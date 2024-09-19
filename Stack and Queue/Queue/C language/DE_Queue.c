#include<stdio.h>
#include<stdlib.h>
struct Node *f;
struct Node *r;
struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr){
    while(ptr!=NULL){
    printf("%d ",ptr->data);
    ptr=ptr->next;
    }
}
void enqueueR(int data){
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        printf("Overflow\n");
    }
    else{
        p->data=data;
        p->next=NULL;
        if(f==NULL){
            r=f=p;
        }
        else{
            r->next=p;
            r=p;
        }
    }
}
void enqueueF(int data){
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        printf("Overflow\n");
    }
    else{
        p->data=data;
        p->next=f;
        f=p;
        
    }
}
int dequeueF(){
    int val=-1;
    struct Node *p=f;
    if(f==NULL){
        printf("Underflow\n");
    }
    else{

        f=f->next;
        val=p->data;
        free(p);
    }
    return val;
}
int dequeueR(){
    int val=-1;
    struct Node *p=f;
    if(f==NULL){
    }
    else{
        if(f->data==r->data){
            val=f->data;
            f=r=NULL;
            free(p);
        }
        else{
        while((p->next->next)!=NULL){
            
            p=p->next;
        }
        r=p;
        p=p->next;
        r->next=NULL;
        val=p->data;
        free(p);
        }
        
    }
    return val;
}
int main(){
    // enqueueR(1);
    // enqueueR(2);
    // enqueueR(3);
    // enqueueR(4);
    // enqueueR(5);
    // enqueueF(6);
    // enqueueF(6);
    // traversal(f);
    // printf("\nDequeueing %d\n",dequeueF());
    // printf("Dequeueing %d\n",dequeueF());
    // printf("Dequeueing %d\n",dequeueF());
    // printf("Dequeueing %d\n",dequeueR());
    // printf("Dequeueing %d\n",dequeueR());
    // printf("Dequeueing %d\n",dequeueR());
    // printf("Dequeueing %d\n",dequeueR());
    // printf("Dequeueing %d\n",dequeueR());

    // traversal(f);
    printf("%d",printf("Hello"));
return 0;
}