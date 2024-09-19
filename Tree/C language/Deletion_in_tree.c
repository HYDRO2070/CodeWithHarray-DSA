#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *create(int data)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
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
void insert(struct Node *p, int data)
{
    struct Node *pre = NULL;
    struct Node *ptr = create(data);
    while (p != NULL)
    {
        pre = p;
        if (p->data == data)
        {
            printf("Element Already Exists in Tree.\n");
            return;
        }
        else if (p->data > data)
        {
            p = p->left;
        }
        else
        {
            p = p->right;
        }
    }
    if (pre->data > data)
    {
        pre->left = ptr;
    }
    else
    {
        pre->right = ptr;
    }
}
struct Node *inoderprodecessor(struct Node *p)
{
    if (p->left != NULL)
    {
        p = p->left;
        while (p->right != NULL)
        {
            p = p->right;
        }
    }
    else
    {
        p = p->right;
        while (p->left != NULL)
        {
            p = p->left;
        }
    }
    return p;
}
struct Node *delete(struct Node *p, int value)
{
    struct Node *ipre;
    if (p == NULL)
    {
        return NULL;
    }
    if (p->right == NULL && p->left == NULL)
    {
        free(p);
        return NULL;
    }
    if (value < p->data)
    {
        p->left = delete (p->left, value);
    }
    else if (value > p->data)
    {
        p->right = delete (p->right, value);
    }
    else
    {
        ipre = inoderprodecessor(p);
        p->data = ipre->data;
        if (p->left != NULL)
        {
            p->left = delete (p->left, ipre->data);
        }
        else
        {
            p->right = delete (p->right, ipre->data);
        }
    }
    return p;
}
int main()
{
    struct Node *p = create(5);
    insert(p, 3);
    insert(p, 6);
    insert(p, 1);
    insert(p, 2);
    insert(p, 4);
    insert(p, 7);
    inorder(p);
    printf("\n");
    delete (p, 6);
    inorder(p);

    return 0;
}