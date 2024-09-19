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
    }
    return a;
}

int main(){
    struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
    q->size=10;
    q->f=q->r=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));

    int i=1;
    int visited[7]={0,0,0,0,0,0,0};
    int Graph[7][7]={
        {0,1,0,0,0,0,0},
        {0,0,0,0,0,0,1},
        {0,0,0,0,0,0,1},
        {0,0,0,0,0,0,1},
        {0,0,0,0,0,0,1},
        {0,0,0,0,0,0,1},
        {1,1,1,1,1,1,0},
    };
    printf("%d ",i);
    visited[i-1]=1;
    enqueue(q,i);
    while (!isempty(q))
    {
        int n=dequeue(q)-1;
        for (int j = 0; j < 7; j++)
        {
            if(Graph[n][j]==1 && visited[j]==0){
                printf("%d ",j+1);
                visited[j]=1;
                enqueue(q,j+1);
            }
        }
        
    }
    
    

    return 0;
}