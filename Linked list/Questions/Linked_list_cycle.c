#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node *head){
    struct Node *p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int findcycle(struct Node *head){
    struct Node *first=head,*second=head;
    while(first&&second->next){
        first=first->next;
        second=second->next->next;
        if(first==second)return 1;
    }
    return -1;
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
    struct Node *first=(struct Node *)malloc(sizeof(struct Node));
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth=(struct Node *)malloc(sizeof(struct Node));
    head->data=1;
    head->next=first;
    first->data=2;
    first->next=second;
    second->data=3;
    second->next=third;
    third->data=4;
    third->next=fourth;
    fourth->data=5;
    fourth->next=fifth;
    fifth->data=6;
    fifth->next=second;
    printf("%d ",findcycle(head));

return 0;
}