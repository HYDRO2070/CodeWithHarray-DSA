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
    while(i<=q->r){
        printf("%d ",q->arr[i]);
        i++;
    }
}

int isfull(struct Queue *q){
    if((q->r)==(q->size)-1){
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

    }
    else{
        q->r++;
        q->arr[q->r]=data;
    }
}
int dequeue(struct Queue *q){
    int a=-1;
    if(isempty(q)){

    }
    else{
        q->f++;
        a=q->arr[q->f];
        // free(q->arr[q->f]);
    }
    return a;
}

int main(){
    struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
    q->size=10;
    q->f=q->r=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    // enqueue(q,1);
    // enqueue(q,2);
    // enqueue(q,3);
    // enqueue(q,4);
    // enqueue(q,5);
    // dequeue(q);
    // dequeue(q);
    // dequeue(q);
    // show(q);
    printf("%d ",isfull(q));
    return 0;
}