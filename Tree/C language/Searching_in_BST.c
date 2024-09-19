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
// struct Node* search_recursive(struct Node *p,int data){
//     if(p==NULL){
//         return NULL;
//     }
//     if(p->data==data){
//         return p;
//     }
//     else if(p->data>data){
//         return search_recursive(p->left,data);
//     }
//     else{
//         return search_recursive(p->right,data);
//     }
    
// }
struct Node* search_iterative(struct Node *p,int data){
    while(p!=NULL){
        if(p->data==data){
        return p;
        }
        else if(p->data>data){
            p=p->left;
        }
        else{
            p=p->right;
    }
    }
    return NULL;
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
    // struct Node *n=search_recursive(p,9);
    struct Node *n=search_iterative(p,7);
    if(n!=NULL){
        printf("Found :%d",n->data);
    }
    else{
        printf("Not Found");        
    }
    
    return 0;
}