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
void afteravalue(struct Node *head,int value){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
}

struct Node* starting(struct Node *head){
    struct Node *ptr=head;
    head=ptr->next;
    free(ptr);
    return head;
}
int Duplicate(struct Node *head){
    struct Node *p=head->next;
    int i=head->data,j=0;
    while(p!=NULL){
        if(i==p->data){ 
            if(i!=head->data)afteravalue(head,i);
            else j=1;
        }
        i=p->data;
        p=p->next;
    }
    if(j==1)return 1; else return 0;
}

int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    head->data=1;
    head->next=NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,2);
    insertion(head,2);
    traversal(head);
    if(Duplicate(head)==1) head=starting(head);
    traversal(head);
return 0;
}