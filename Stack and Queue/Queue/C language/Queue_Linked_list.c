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
void enqueue(int data){
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
int dequeue(){
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
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    printf("Dequeueing %d\n",dequeue());
    printf("Dequeueing %d\n",dequeue());
    printf("Dequeueing %d\n",dequeue());
    printf("Dequeueing %d\n",dequeue());
    printf("Dequeueing %d\n",dequeue());
    traversal(f);
return 0;
}