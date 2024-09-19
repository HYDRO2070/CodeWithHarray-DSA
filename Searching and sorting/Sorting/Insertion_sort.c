#include<stdio.h>
void print(int* A,int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",A[i]);
    }
        printf("\n");
    
}
void Insertionsort(int* A,int size){
    int a,j;
    for (int i = 1; i < size; i++)
    {
        a=A[i];
        j=i-1;
        while(j>=0 && A[j]>a){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=a;
    }
    
}
int main(){
    int A[10]={9,6,3,1,5,8,2,7,0,4};
    int size=10;
    print(A,size);
    Insertionsort(A,size);
    print(A,size);
    return 0;
}