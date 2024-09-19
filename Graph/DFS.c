#include<stdio.h>
#include<stdlib.h>
int visited[7]={0,0,0,0,0,0,0};
int Graph[7][7]={
        {0,1,0,0,0,0,0},
        {0,0,0,0,0,0,1},
        {0,0,0,0,0,0,1},
        {0,0,0,0,0,0,1},
        {0,0,0,0,0,0,1},
        {0,0,0,0,0,0,1},
        {1,1,1,1,1,1,0},
    };
void DFS(int i){
    printf("%d ",i);
    visited[i-1]=1;
    for (int j = 0; j < 7; j++)
    {
        if(Graph[i-1][j]==1 && !visited[j]){
            DFS(j+1);
        }
    }
    
}
int main(){
    DFS(1);
    // 

    return 0;
}