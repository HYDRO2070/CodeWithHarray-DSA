#include<stdio.h>
void print(int* A,int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",A[i]);
    }
        printf("\n");
    
}
void selectionsort(int *a,int size){
    int i=0;
    for (int t = 0; t < size-1; t++)
    {
        i=t;
        for (int k = 0+t; k < size; k++)
        {
            if(a[k]<a[i]){
                i=k;
            }
        }        
        if(a[t]==a[i]){
        }
        else{
        int k=a[t];
        a[t]=a[i];
        a[i]=k;
        }
    }
    
}
int main(){
    int A[10]={9,6,3,1,5,8,2,7,0,4};
    int size=10;
    print(A,size);
    selectionsort(A,size);
    print(A,size);
}