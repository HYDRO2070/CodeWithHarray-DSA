#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char data;
    struct Node *next;
};
char stacktop(struct Node *ptr){
    return ptr->data;
}
int isempty(struct Node *top){
    if(top->next==NULL){
        return 1;
    }
    return 0;
}
char pop(struct Node **top){
    if(isempty(*top)){
    printf("Stack Underflow");
    return '1';
    }
    else{
    char data;
    struct Node *ptr=*top;
    *top=ptr->next;
    ptr->next=NULL;
    data=ptr->data;
    free(ptr);
    return data;
    }
}
struct Node* push(struct Node *top,int data){
    {struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=top;
    top=ptr;
    return top;
    }
}
int isoperator(char ch){
    if(ch=='*' || ch=='/' || ch=='+' || ch=='-'){
        return 1;
    }
    else
        return 0;
}
int precedence(char ch){
    if(ch=='*' || ch=='/'){
        return 3;
    }
    else if(ch=='+' || ch=='-'){
        return 2;
    }
    else
        return 0;
}
char * infixtopostfix(char *infix){
    struct Node *top=(struct Node*)malloc(sizeof(struct Node));
    top->data='0';
    top->next=NULL;
    char *postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    int i=0,j=0;
    while(infix[i]!='\0'){
        if(!isoperator(infix[i])){
            postfix[j]=infix[i];
            i++,j++;
        }
        else{
            if(precedence(infix[i])>precedence(stacktop(top))){
                top=push(top,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(&top);
                j++;
            }
        }
    }
    while(!isempty(top)){
        postfix[j]=pop(&top);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}


int main(){
    char *infix="x-y/z-k*d";
    printf("%s",infixtopostfix(infix));


    return 0;
}