#include<stdio.h>
#include<stdlib.h>
#include<math.h>


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
int Binary(struct Node *head){    
    struct Node *p=head->next;
    int a=head->data;
    while(p!=NULL){
        a=(a*10)+p->data;
        p=p->next;
    }
    return a;    
}
int Integer(int num){
    int i=0,j=0,k;
    while(num>0){
        k=num%10;
        if(k==1){
            j=j+pow(2,i);
        }
        i++;
        num=num/10;
    }
    return j;
}

int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    head->data=0;
    head->next=NULL;
    insertion(head,0);
    insertion(head,1);
    printf("%d",Integer(Binary(head)));
return 0;
}