// give a array and a interger and we have to find a pair with difference equal to k
#include<stdio.h>
void find(int a[],int k,int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(i==j){
                continue;
            }
            if(a[i]-a[j]==k){
                printf("%d and %d\n",a[i],a[j]);
                return;
            }
        }
        
    }
    printf("Not found");
    
}

int main(){
    int a[]={5,20,3,2,40,100};
    int k=600;
    int size=sizeof(a)/sizeof(int);
    find(a,k,size);
    return 0;
}