#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
int push(struct stack ptr,int data){
    ptr.top=ptr.top+1;
    ptr.arr[ptr.top]=data;
    return ptr.top;
}
void traversal(struct stack ptr){
    int i=0;
    while(i<=ptr.top){
        printf("%d ",ptr.arr[i]);
        i++;
    }
}
int isempty(struct stack ptr){
    if(ptr.top==-1){
        return 1;
    }
    return 0;
}
int isfull(struct stack ptr){
    if(ptr.top==(ptr.size)-1){
        return 1;
    }
    return 0;
}

int main(){
    struct stack ptr;
    ptr.size=15;
    ptr.top=-1;
    ptr.arr=(int *)malloc(ptr.size * sizeof(int));
    
    ptr.top=push(ptr,1);
    if(isempty(ptr)==1){
        printf("Empty ");
    }
    
    traversal(ptr);
return 0;
}