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
struct Node* Merge(struct Node *p1,struct Node *p2){
    if(p1==NULL) return p2;
    if(p2==NULL) return p1;
    if(p1->data<p2->data){
        p1->next=Merge(p1->next,p2);
        return p1;
    }
    else{
        p2->next=Merge(p1,p2->next);
        return p2;
    }
}
struct Node* MergeSort(struct Node *head){
    if(head==NULL || head->next==NULL) return head;
    struct Node *slow=head;
    struct Node *fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    struct Node* sec_half=slow->next;
    slow->next=NULL;
    struct Node *sort_first_half=MergeSort(head);
    struct Node *sort_second_half=MergeSort(sec_half);
    return Merge(sort_first_half,sort_second_half);
}
int main(){
    struct Node *head=CreatNode(5);
    Insertion(head,4);
    Insertion(head,6);
    Insertion(head,2);
    Insertion(head,8);
    Insertion(head,1);
    traversal(head);
    struct Node *result=MergeSort(head);
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