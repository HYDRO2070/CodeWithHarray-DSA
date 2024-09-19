#include<stdio.h>

void print(int* A,int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",A[i]);
    }
        printf("\n");
    
}
void bubblesort(int* A,int size){
    int a,b=0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {   printf("%d",j);
            if(A[j]>A[j+1]){
                b=1;
                a=A[j];
                A[j]=A[j+1];
                A[j+1]=a;
            }
        }
        if(b==0){
            break;
        }
        
    }
    
}
int main(){
    // int A[10]={9,6,3,1,5,8,2,7,0,4};
    int A[10]={0,1,2,3,4,5,6,7,8,9};
    int size=10;
    print(A,size);
    bubblesort(A,size);
    print(A,size);
    return 0;
}