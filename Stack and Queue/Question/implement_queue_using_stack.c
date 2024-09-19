#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
void push(struct stack *s1,int data){
    if(isfull(s1)){
        printf("Stack Overflow");
    }
    else{
        s1->top++;
        s1->arr[s1->top]=data;
    }
}
int pop(struct stack *s1,struct stack *s2){
    int val=-1;
    if(isempty(s2)){
        while(!isempty(s1)){
            s2->top++;
            s2->arr[s2->top]=s1->arr[s1->top];
            s1->top--;
        }
        if(isempty(s2)){
            printf("Stack Underflow");
        }
        else{
            val=s2->arr[s2->top];
            s2->top--;
        }
        
    }
    else{
            val=s2->arr[s2->top];
            s2->top--;
    }
    return val;        
}
int main()
{
    struct stack *s1 = (struct stack *)malloc(sizeof(struct stack));
    s1->size = 10;
    s1->top = -1;
    s1->arr = (int *)malloc(s1->size * sizeof(int));
    struct stack *s2 = (struct stack *)malloc(sizeof(struct stack));
    s2->size = 10;
    s2->top = -1;
    s2->arr = (int *)malloc(s2->size * sizeof(int));
    push(s1,1);
    push(s1,2);
    push(s1,3);
    push(s1,4);
    printf("Element : %d\n",pop(s1,s2));
    printf("Element : %d\n",pop(s1,s2));
    printf("Element : %d\n",pop(s1,s2));
    printf("Element : %d\n",pop(s1,s2));
    printf("Element : %d\n",pop(s1,s2));
    return 0;
}