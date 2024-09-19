#include<stdio.h>
#include<stdlib.h>
#define MAX_VERTICES 100
int visited[7]={0,0,0,0,0,0,0};
struct graph{
    int numvertices;
    int adj_martrix[MAX_VERTICES][MAX_VERTICES];
};
struct graph* creategraph(int vertices){
    struct graph* gra=(struct graph*)malloc(sizeof(struct graph));
    gra->numvertices=vertices;
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            gra->adj_martrix[i][j]=0;
        }
    }
    return gra;
}
void addedge(struct graph* gra,int src,int dest){
    gra->adj_martrix[src][dest]=1;
}
void printgraph(struct graph* gra){
    printf("Adjacency Matrix: \n");
    for(int i=0;i<gra->numvertices;i++){
        for(int j=0;j<gra->numvertices;j++){
            printf("%d ",gra->adj_martrix[i][j]);
        }
        printf("\n");
    }
}
void DFS(struct graph* gra,int i){
    printf("%d ",i);
    visited[i-1]=1;
    for (int j = 0; j < 7; j++)
    {
        if(gra->adj_martrix[i-1][j]==1 && !visited[j]){
            DFS(gra,j+1);
        }
    }
    
}
int main(){
    struct graph* gra=creategraph(7);
    addedge(gra,0,6);
    addedge(gra,1,6);
    addedge(gra,2,6);
    addedge(gra,3,6);
    addedge(gra,4,6);
    addedge(gra,5,6);
    addedge(gra,6,0);
    addedge(gra,6,1);
    addedge(gra,6,2);
    addedge(gra,6,3);
    addedge(gra,6,4);
    addedge(gra,6,5);
    printgraph(gra);
    DFS(gra,1);
    free(gra);
    return 0;
}