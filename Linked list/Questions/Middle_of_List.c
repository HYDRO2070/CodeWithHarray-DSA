#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *next;
};
void insertion(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
}
void traversal(struct Node *head){
    struct Node *p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void Middle(struct Node *head,int size){
    struct Node *p=head;
    int i=0;
    while(p!=NULL){
        if(i>=(size/2))printf("%d ",p->data);
        p=p->next;
        i++;
    }
}
int length(struct Node *head){
    struct Node *p=head;
    int i=0;
    while(p!=NULL){
        i++;
        p=p->next;
    }
    return i;
}


int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    head->data=1;
    head->next=NULL;
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
    insertion(head,5);
    insertion(head,6);
    insertion(head,6);
    insertion(head,6);
    traversal(head);
    Middle(head,length(head));
return 0;
}