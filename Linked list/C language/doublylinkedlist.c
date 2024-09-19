#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

void show(struct Node *head){
    struct Node *ptr=head;
    if(ptr->next==NULL){
        while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->prev;
        }
        printf("\n");
    }
    else if(ptr->prev==NULL){
        while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
        }
        printf("\n");
    }

    
}

int main(){
    struct Node *head,*second,*third,*forth;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    forth=(struct Node *)malloc(sizeof(struct Node));
    head->data=1;
    head->next=second;
    head->prev=NULL;
    second->data=2;
    second->next=third;
    second->prev=head;
    third->data=3;
    third->next=forth;
    third->prev=second;
    forth->data=4;
    forth->next=NULL;
    forth->prev=third;
    show(head);
    show(forth);
return 0;
}