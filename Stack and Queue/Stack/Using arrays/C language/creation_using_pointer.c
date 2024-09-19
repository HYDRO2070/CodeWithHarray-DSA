#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}
int main(){
    struct stack *ptr=(struct stack*)malloc(sizeof(struct stack));
    ptr->size=10;
    ptr->top=-1;
    ptr->arr=(int*)malloc(ptr->size * sizeof(int));
    
return 0;
}