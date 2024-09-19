// 
#include<stdio.h>
int ceiling(int a[],int size,int x){
    if(a[0]>=x){
    return a[0];}
    for (int i = 0; i < size-1; i++)
    {
        if(a[i]<x && x<=a[i+1]){
            return a[i+1];
        }
    }
    return 0;
    
}
int flooring(int a[],int size,int x){
    for (int i = 0; i < size-1; i++)
    {
        if(a[i]<=x && x<a[i+1]){
            return a[i];
        }
    }
    if(a[size-1]<=x){
            return a[size-1];
        }
    return 0;
    
}
int main(){
    int a[]={1,2,8,10,10,12,19};
    int size=sizeof(a)/sizeof(int);
    int x=20;
    if(ceiling(a,size,x)){
        printf("%d have ceiling %d.\n",x,ceiling(a,size,x));
    }
    else{
        printf("It does not have ceiling...\n");
    }
    if(flooring(a,size,x)){
        printf("%d have flooring %d.\n",x,flooring(a,size,x));
    }
    else{
        printf("It does not have flooring...\n");
    }
    return 0;
}