#FIND IF THERE IS A ZERO IN MATRIX IF THERE IS THEN make all value in that row and colunm zero.
def find():
    C=[]
    R=[]
    b=0
    for i in a:
        c=0
        for j in i:
            if(j==0):
                C.append(b)
                R.append(c)
            c=c+1
        b=b+1
    return [C,R]
def Tozero():
    
    u=0
    for k in q[0]: 
        for j in q[1]:
            for i in range(len(a[0])):
                a[k][i]=0
                # a[i][j]=0
            for i in range(len(a)):
                
                a[i][j]=0

a=[[10,2,3,2,3,0,5,6,87,5,5],[10,2,3,2,3,5,6,87,5,4,5],[10,2,3,2,4,3,5,6,87,5,5],[10,2,3,2,3,5,6,87,5,5],
[10,2,3,2,3,0,5,6,87,5,5],[10,2,3,2,3,5,6,87,5,4,5],[10,2,3,2,4,3,5,6,87,5,5],[10,2,3,2,3,5,6,87,5,5],]
q=find()
Tozero()
for i in a:
    print(i)
