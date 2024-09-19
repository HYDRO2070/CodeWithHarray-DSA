#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr){
    while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
}

int main(){
    struct Node *head,*second,*third;
    head=(struct Node *) malloc(sizeof(struct Node));
    second=(struct Node *) malloc(sizeof(struct Node));
    third=(struct Node *) malloc(sizeof(struct Node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    traversal(head);
return 0;
}