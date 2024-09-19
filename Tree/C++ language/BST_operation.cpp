#include<iostream>
#include<malloc.h>
struct Node{
    int data;
    Node *left;
    Node *right;
};
Node* create(int data){
    Node *p=(Node*)malloc(sizeof(Node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
}
void insert(Node *p,int data){
    Node *ptr=p;
    Node *pr=create(data);
    while(p!=NULL){
        ptr=p;
        if(p->data==data){
            return;
        }
        else if(p->data>data){
            p=p->left;
        }
        else{
            p=p->right;
        }
    }
    if(ptr->data>data){
            ptr->left=pr;
        }
        else{
            ptr->right=pr;
        }

}
Node* inoderpretition(Node *p){
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
Node* deletion(Node *p,int data){
    Node *ptr;
    if(p==NULL){
        return NULL;
    }
    if(p->data==data && p->left==NULL && p->right==NULL){
        free(p);
        return NULL;
    }
    if(p->data>data){
        p->left=deletion(p->left,data);
    }
    else if(p->data<data){
        p->right=deletion(p->right,data);
    }
    else{
        ptr=inoderpretition(p);
        p->data=ptr->data;
        if(p->left!=NULL){
            p->left=deletion(p->left,ptr->data);
        }
        else{
            p->right=deletion(p->right,ptr->data);
        }
    }
    return p;
}
void inorder(Node *p){
    if(p!=NULL){
        inorder(p->left);
        std::cout<<p->data<<" ";
        inorder(p->right);
    }
}
int main(){
    Node* p=create(1);
    insert(p,2);
    insert(p,3);
    insert(p,4);
    insert(p,5);
    insert(p,6);
    // inorder(p);
    deletion(p,2);
    inorder(p);
    return 0;
}