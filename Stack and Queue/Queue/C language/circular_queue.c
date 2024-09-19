#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int f;
    int r;
    int *arr;
};
void show(struct Queue *q){
    int i=(q->f) +1;
    while(i!=(q->f)){
        printf("%d ",q->arr[i]);
        i=(i+1)%q->size;
    }
}

int isfull(struct Queue *q){
    if(((q->r+1)%q->size)==(q->f)){
        return 1;
    }
    return 0;
}
int isempty(struct Queue *q){
    if(q->f==q->r){
        return 1;
    }
    return 0;
}
void enqueue(struct Queue *q,int data){
    if(isfull(q)){
        printf("Overflow\n");
    }                                                                                                                                                                                                  
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=data;
    }
}
int dequeue(struct Queue *q){
    int a=-1;
    if(isempty(q)){
        printf("Underflow %d %d\n",q->f,q->r);
    }
    else{
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;
}

int main(){
    struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue)); 
    q->size=6;
    q->f=q->r=0;
    q->arr=(int*)malloc(q->size*sizeof(int));
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    dequeue(q);
    enqueue(q,5);
    enqueue(q,dequeue(q));
    enqueue(q,dequeue(q));
    show(q);
    return 0;
}