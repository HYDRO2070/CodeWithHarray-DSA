#include<stdio.h>

// int linear(int arr[],int size,int element){
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i]==element){
//             return i;
//         }
//     }
//     return -1;    
// }

int binary(int arr[],int size,int element){
    int low=0,high=size-1;
    int mid=(low + high)/2;
    while(low<=high ){
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }      
        mid=(low + high)/2;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,113,141};
    int size=sizeof(arr)/sizeof(int);
    int element=141;
    // printf("%d",linear(arr,size,element));
    printf("%d",binary(arr,size,element));
    return 0;
}