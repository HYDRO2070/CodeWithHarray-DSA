#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void show(struct Node *ptr){
    while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
}

// struct Node* insertion(struct Node *head,int data){
//     struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
//     ptr->data=data;
//     ptr->next=head;
//     return ptr;
// }
// void between(struct Node *head,int data,int index){
//     struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
//     struct Node *p=head;
//     int i=0;
//     while (i!=index-1)
//     {
//         p=p->next;
//         i++;
//     }
//     ptr->data=data;
//     ptr->next=p->next;
//     p->next=ptr;
// }
// void after(struct Node *Node,int data){
//     struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
//     ptr->data=data;
//     ptr->next=Node->next;
//     Node->next=ptr;
// }
void aftervalue(struct Node *head,int value,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;
    struct Node *q=head->next;
    while(p->data!=value){
        p=p->next;
        q=q->next;
    }
    ptr->next=q;
    p->next=ptr;
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
    forth->next=NULL;
    // head=insertion(head,5);
    // between(head,5,4);
    // after(forth,5);
    aftervalue(head,1,5);
    show(head);
return 0;
}