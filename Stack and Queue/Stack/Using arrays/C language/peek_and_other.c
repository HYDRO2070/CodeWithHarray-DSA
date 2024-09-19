#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void show(struct Node *ptr){
    while(ptr->next!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
}
int isfull(struct Node *top){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    if(ptr==NULL){
        return 1;
    }
    return 0;
}
int isempty(struct Node *top){
    if(top->next==NULL){
        return 1;
    }
    return 0;
}
struct Node* push(struct Node *top,int data){
    if(isfull(top)){
        printf("Stack Overflow");
        return top;
    }
    else{struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=top;
    top=ptr;
    return top;
    }
}
int pop(struct Node **top){
    if(isempty(*top)){
    printf("Stack Underflow");
    return -1;
    }
    else{
    int data;
    struct Node *ptr=*top;
    *top=ptr->next;
    ptr->next=NULL;
    data=ptr->data;
    free(ptr);
    return data;
    }
}
int peek(struct Node *top,int i){
    struct Node *ptr=top;
    while(i!=1){
        ptr=ptr->next;
        i--;
        if(ptr==NULL){
            return -1;
        }
    }
    return ptr->data;
}
int stacktop(struct Node *ptr){
    return ptr->data;
}
int stackbottom(struct Node *ptr){
    while(ptr->next->next!=NULL){
    ptr=ptr->next;
    }
    return ptr->data;
}

int main(){
    struct Node *top=(struct Node*)malloc(sizeof(struct Node));
    top->data=-1;
    top->next=NULL;
    top=push(top,1);
    top=push(top,2);
    top=push(top,3);
    top=push(top,4);
    // show(top);
    // int i=5;
    // printf("Element at %d is %d",i,peek(top,i));
    printf("Element : %d\n",stacktop(top));
    printf("Element : %d\n",stackbottom(top));
    return 0;
}