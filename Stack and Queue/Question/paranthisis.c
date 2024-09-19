#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Node{
    char data;
    struct Node *next;
};
int isfull(struct Node *top){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    if(ptr==NULL){
        return 1;
    }
    return 0;
}
int isempty(struct Node *top){
    if(top->next==NULL){
        return 1;
    }
    return 0;
}
struct Node* push(struct Node *top,int data){
    if(isfull(top)){
        printf("Stack Overflow");
        return top;
    }
    else{struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=top;
    top=ptr;
    return top;
    }
}
struct Node* pop(struct Node *top){
    if(isempty(top)){
    printf("Stack Underflow");
    return top;
    }
    else{
    
    struct Node *ptr=top;
    top=ptr->next;
    ptr->next=NULL;
    
    free(ptr);
    return top;
    }
}
int check(struct Node *top){
    if(isempty(top)){
        return 1;
    }
    return 0;
}
int main(){
    struct Node *top=(struct Node*)malloc(sizeof(struct Node));
    top->data=' ';
    top->next=NULL;
    char equation[50];
    printf("give the string :\n");
    gets(equation);
    int i=0;
    while (equation[i]!='\0')
    {
        if(equation[i]=='('){
            top=push(top,'(');
        }
        if(equation[i]==')'){
            top=pop(top);
        }
        i++;
    }
    printf("%d",check(top));
    

    return 0;
}