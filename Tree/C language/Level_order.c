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

void printcurrentlevel(struct Node *root,int level){
    if(root==NULL){
        return;
    }
    if(level==1){
        printf("%d ",root->data);
    }
    else if(level>1){
        printcurrentlevel(root->left,level-1);
        printcurrentlevel(root->right,level-1);
    }
}

int height(struct Node *root){
    if(root==NULL){
        return 0;
    }
    else{
        int left=height(root->left);
        int right=height(root->right);
        if(left>right){
            return left+1;
        }
        else{
            return right+1;
        }
    }
}
void printlevelorder(struct Node *root){
    int h=height(root);
    for (int i = 1; i <= h; i++)
    {
        printcurrentlevel(root,i);
    }
    
}

void inorder(struct Node *p){
    if(p!=NULL){
        inorder(p->left);
        printf("%d ",p->data);
        inorder(p->right);
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
    printf("Level Order :");
    printlevelorder(p);
    return 0;
}