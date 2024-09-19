#include<stdio.h>
#include<stdlib.h>

struct Myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

void create(struct Myarray *a, int tosize, int ussize){
    a->total_size=tosize;
    a->used_size=ussize;
    a->ptr=(int*)malloc(tosize*sizeof(int));
}
void show(struct Myarray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
    
}
void Enter(struct Myarray *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf(" %d ->",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;

    }
    
}


int main(){
    struct Myarray mark;
    create(&mark,10,2);
    Enter(&mark);
    show(&mark);

    return 0;
}