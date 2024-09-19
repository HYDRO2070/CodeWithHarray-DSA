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
void sort(struct Node *head){
    int count[3]={0,0,0};
    struct Node *ptr=head;
    while (ptr!=NULL)
    {
        count[ptr->data]+=1;
        ptr=ptr->next;
    }
    int i=0;
    ptr=head;
    while (ptr!=NULL)
    {
        if(count[i]==0)
        ++i;
        else
        {
            ptr->data=i;
            --count[i];
            ptr=ptr->next;
        }
        
    }
    
}



int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    head->data=1;
    head->next=NULL;
    insertion(head,2);
    insertion(head,0);
    insertion(head,2);
    insertion(head,1);
    insertion(head,1);
    insertion(head,2);
    insertion(head,2);
    traversal(head);
    sort(head);
    traversal(head);
return 0;
}