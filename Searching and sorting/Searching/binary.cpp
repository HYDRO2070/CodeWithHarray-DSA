#include<iostream>
using namespace std;
int main(){
int a[7]={1,2,3,4,6,8,9};
int end,beg,mid;
int item,loc;
beg=0,end=6;
cout<<"Enter the num to be search :\n";
cin>>item;
mid=(beg+end)/2;
while(beg<=end && a[mid]!=item){
    if(item<a[mid]){
        end=mid-1;
    }
    else{
        beg=mid+1;
    }
    mid=(beg+end)/2;
}
if(a[mid]==item){
loc=mid;
cout<<"the item found at :\n"<<loc;
}
else{
    loc=NULL;
    cout<<"item not found ..\n"<<loc;
}
}