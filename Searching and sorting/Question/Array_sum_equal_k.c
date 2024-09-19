// given two array to find that if both value at same index is equal or greater than than the k . print yes for there or nOt.
#include<stdio.h>

int permute(int a[],int b[],int size,int k){
    for (int i = 0; i < size; i++)
    {
        if(a[i]+b[i]>=k){
            return 1;
        }
    }
    return 0;    
}

int main(){
    int a[]={1,2,2,1};
    int b[]={3,3,3,4};
    int k=5;
    if(permute(a,b,4,k)==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}