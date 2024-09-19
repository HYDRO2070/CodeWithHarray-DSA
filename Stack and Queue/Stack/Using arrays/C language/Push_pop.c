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
void push(struct stack *ptr, int value){
    if(isfull(ptr)){
        printf("Stack Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("Stack Underflow");
    }
    else{
        int i=ptr->arr[ptr->top];
        ptr->top--;
        return i;
    }
}
int main(){
    struct stack *ptr=(struct stack*)malloc(sizeof(struct stack));
    ptr->size=10;
    ptr->top=-1;
    ptr->arr=(int*)malloc(ptr->size * sizeof(int));
    push(ptr,1);
    push(ptr,2);
    push(ptr,3);
    pop(ptr);
    // printf("%d\n",isfull(ptr));
    // printf("%d\n",isempty(ptr));
return 0;
}