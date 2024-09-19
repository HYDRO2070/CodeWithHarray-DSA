#include<stdio.h>
#include<malloc.h>
struct Node{
    int data;
    struct Node* next;
};
void traversal(struct Node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
struct Node* CreatNode(int value){
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    p->data=value;
    p->next=NULL;
    return p;
}
void Insertion(struct Node *head,int value){
    struct Node *ptr=CreatNode(value);
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=ptr;
}
struct Node* ReverseList(struct Node *head){
    struct Node *pre=NULL;
    struct Node *current=head;
    struct Node *next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=pre;
        pre=current;
        current=next;
    }
    return pre;
}
int main(){
    struct Node *head=CreatNode(1);
    Insertion(head,2);
    Insertion(head,3);
    Insertion(head,4);
    Insertion(head,5);
    Insertion(head,6);
    traversal(head);
    struct Node *result=ReverseList(head);
    traversal(result);
    while (head!=NULL)
    {
        struct Node *temp=head;
        head=head->next;
        free(temp);
    }
    while (result!=NULL)
    {
        struct Node *temp=result;
        result=result->next;
        free(temp);
    }
return 0;
}