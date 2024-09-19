#include<iostream>
using namespace std;


class Myarray{
    private:
    int total_size;
    int used_size;
    int *ptr;
    public:
    void create(class Myarray *a, int tosize, int ussize){
    a->total_size=tosize;
    a->used_size=ussize;
    a->ptr=(int*)malloc(tosize*sizeof(int));
}
void show(class Myarray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
    
}
void Enter(class Myarray *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf(" %d ->",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;

    }
    
}

};

int main(){
    Myarray mark;
    mark.create(&mark,10,2);
    mark.Enter(&mark);
    mark.show(&mark);

    return 0;
}