#include<stdio.h>
void print(int* A,int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",A[i]);
    }
    
        printf("\n");
}
int partition(int A[],int low,int high){
    int pivot=A[low];
    int i=low,temp,j=high;
    do
    {
        while (A[j]>pivot)
    {
        j--;
    }
    while (A[i]<=pivot)
    {
        i++;
    }
    if(i<j){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    
    } while (i<j);
    
    
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
}
// int partition(int A[],int low,int high){
//     int pivot=A[low];
//     int i=low,temp;
//     for (int j = i+1; j <= high; j++)
//     {
//         if(A[j]<pivot){
//             i++;
//             temp=A[i];
//             A[i]=A[j];
//             A[j]=temp;
//         }
//     }
//     temp=A[low];
//     A[low]=A[i];
//     A[i]=temp;
//     return i;
// }
void quicksort(int A[],int low,int high){
    int index;
    if(low<high){
    index=partition(A,low,high);
    quicksort(A,low,index-1);
    quicksort(A,index+1,high);
    }
}
int main(){
    int A[10]={9,6,3,1,5,8,2,7,0,4};
    int size=10;
    print(A,size);
    quicksort(A,0,size);
    print(A,size);
    return 0;
}