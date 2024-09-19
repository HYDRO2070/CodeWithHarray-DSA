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

// struct Node* starting(struct Node *head){
//     struct Node *ptr=head;
//     head=ptr->next;
//     free(ptr);
//     return head;
// }
// void between(struct Node *head,int index){
//     struct Node *ptr=head;
//     int i=0;
//     while(i!=index-1){
//         ptr=ptr->next;
//         i++;
//     }
//     struct Node *ptr1=ptr->next;;
//     ptr->next=ptr1->next;
//     ptr1->next=NULL;
//     free(ptr1);
// }
// void after(struct Node *Node){
//     struct Node *ptr=Node;
//     ptr=ptr->next;
//     Node->next=ptr->next;
//     ptr->next=NULL;
//     free(ptr);
// }
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

int main(){
    struct Node *head,*second,*third,*forth,*fifth;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    forth=(struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node *)malloc(sizeof(struct Node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=forth;
    forth->data=3;
    forth->next=fifth;
    fifth->data=4;
    fifth->next=NULL;
    // head=starting(head);
    // between(head,3);
    // after(third);
    afteravalue(head,3);
    show(head);
return 0;
}