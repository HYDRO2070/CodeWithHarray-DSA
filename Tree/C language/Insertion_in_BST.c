#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node* create(int data){
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
}
void inorder(struct Node *p){
    if(p!=NULL){
        inorder(p->left);
        printf("%d ",p->data);
        inorder(p->right);
    }
}
void insert(struct Node *p,int data){
    struct Node *pre=NULL;
    struct Node *ptr=create(data);
    while(p!=NULL){
        pre=p;
        if(p->data==data){
            printf("Element Already Exists in Tree.\n"); 
            return; 
        }
        else if(p->data>data){
            p=p->left;
        }
        else{
            p=p->right;
        }
    }
    if(pre->data>data){
        pre->left=ptr;
    }
    else{
        pre->right=ptr;
    }
}
int main(){
    struct Node *p=create(4);
    struct Node *p1=create(2);
    struct Node *p2=create(6);
    struct Node *p3=create(1);
    struct Node *p4=create(3);
    struct Node *p5=create(5);
    struct Node *p6=create(7);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;
    inorder(p);
    printf("\n");
    insert(p,8);
    inorder(p);
    
    return 0;
}