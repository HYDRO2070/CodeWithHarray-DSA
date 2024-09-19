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
    p->left=nullptr;
    p->right=nullptr;
}
void insert(Node *p,int data){
    Node *pre=nullptr;
    Node *ptr=create(data);
    while(p!=nullptr){
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
void inorder(Node *p){
    if(p!=nullptr){
        inorder(p->left);
        printf("%d ",p->data);
        inorder(p->right);
    }
}

int main(){
    Node *p=create(4);
    insert(p,2);
    insert(p,3);
    insert(p,4);
    inorder(p);
    return 0;
}