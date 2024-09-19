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
int main(){
    struct Node *p=createnode(1); 
    struct Node *p1=createnode(2); 
    struct Node *p2=createnode(3); 
    p->left=p1;
    p->right=p2;
    return 0;
}