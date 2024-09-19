#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void show(struct Node *head){
    struct Node *ptr=head;    
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while (ptr!=head);
    
}

struct Node* insertion(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;
    do{
        p=p->next;
    }while (p->next!=head);
    ptr->next=head;
    p->next=ptr;
    return ptr;
}

int main(){
    struct Node *head,*second,*third,*forth;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    forth=(struct Node *)malloc(sizeof(struct Node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=forth;
    forth->data=4;
    forth->next=head;
    head=insertion(head,5);
    show(head);
return 0;
}