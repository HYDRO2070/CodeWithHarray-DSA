#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    int height;
};

int getheight(struct Node *p)
{
    if (p == NULL)
    {
        return 0;
    }
    return p->height;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}
struct Node* create(int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->height = 1;
    return ptr;
}

struct Node* rightrotation(struct Node *p)
{
    struct Node *x = p->left;
    struct Node *t = x->right;
    x->right = p;
    p->left = t;
    p->height = max(getheight(p->left), getheight(p->right)) + 1;
    x->height = max(getheight(x->left), getheight(x->right)) + 1;
    return x;
}
struct Node* leftrotation(struct Node *p)
{
    struct Node *y = p->right;
    struct Node *t = y->left;
    y->left = p;
    p->right = t;
    p->height = max(getheight(p->left), getheight(p->right)) + 1;
    y->height = max(getheight(y->left), getheight(y->right)) + 1;
    return y;
}
int getbalancefactor(struct Node *p)
{
    if (p == NULL)
    {
        return 0;
    }
    return getheight(p->left) - getheight(p->right);
}
struct Node *insert(struct Node *p, int data)
{
    if (p == NULL)
    {
        return(create(data));
    }
    if (data < p->data)
    {
        p->left = insert(p->left, data);
    }
    else if (data > p->data)
    {
        p->right = insert(p->right, data);
    }
    else{
        return p;
    }
    p->height = 1 + max(getheight(p->left), getheight(p->right));
    int bf = getbalancefactor(p);

    if (bf > 1 && data < p->left->data)
    {
        return rightrotation(p);
    }
    if (bf < -1 && data > p->right->data)
    {
        return leftrotation(p);
    }
    if (bf > 1 && data > p->left->data)
    {
        p->left = leftrotation(p->left);
        return rightrotation(p);
    }
    if (bf < -1 && data < p->right->data)
    {
        p->right = rightrotation(p->right);
        return leftrotation(p);
    }
    return p;
}
void inorder(struct Node *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        printf("%d ", p->data);
        inorder(p->right);
    }
}
int main()
{
    struct Node *p = NULL;
    p = insert(p, 6);
    p = insert(p, 2);
    p = insert(p, 3);
    p = insert(p, 4);
    p = insert(p, 5);
    p = insert(p, 1);
    
    inorder(p);
    return 0;
}