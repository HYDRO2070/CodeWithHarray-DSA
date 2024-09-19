#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node* createnode(int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
void preorder(struct Node *p){
    if(p!=NULL){
        printf("%d ",p->data);
        preorder(p->left);
        preorder(p->right);
    }
}
void inorder(struct Node *p){
    if(p!=NULL){
        inorder(p->left);
        printf("%d ",p->data);
        inorder(p->right);
    }
}
void postorder(struct Node *p){
    
    if(p!=NULL){
        postorder(p->left);
        postorder(p->right);
        printf("%d ",p->data);
    }
}
int isBST(struct Node *ptr){
    static struct Node *pre=NULL;
    if(ptr!=NULL){
        if(!isBST(ptr->left)){
            return 0;
        }
        if(pre!=NULL && ptr->data <= pre->data){
            return 0;
        }
        pre=ptr;
        return isBST(ptr->right);
    }
    else{
        return 1;
    }
}
int main(){
    struct Node *p=createnode(4); 
    struct Node *p1=createnode(3); 
    struct Node *p2=createnode(5); 
    struct Node *p3=createnode(1); 
    struct Node *p4=createnode(2); 
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
printf("inorder :");
    inorder(p);
    printf("\n");
    printf("IS BST : %d",isBST(p));
    return 0;
}