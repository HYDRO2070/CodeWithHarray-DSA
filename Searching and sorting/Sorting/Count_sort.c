#include<stdio.h>
#include<stdlib.h>
void print(int *A, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");
}
int max(int A[],int size){
    int max=0;
    for (int i = 0; i < size; i++)
    {
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
}
void countsort(int A[],int size){
    int maax=max(A,size),i,j;
    int *count=(int*)malloc((maax+1)*sizeof(int));
    for (i = 0; i <= maax; i++)
    {
        count[i]=0;
    }
    for (i = 0; i < size; i++)
    {
        count[A[i]]=count[A[i]]+1;
    }
    i=0;
    j=0;
    while (i<=maax)
    {
        if(count[i]>0){
            A[j]=i;
            count[i]--;
            j++;
        }
        else{
            i++;
        }
    }
    
    
}
int main(){
    int A[10] = {9, 6, 3, 1, 5, 8, 2, 7, 0, 4};
    int size = 10;
    print(A, size);
    countsort(A,size);
    print(A, size);
return 0;
}