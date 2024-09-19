#what three different combination of given num addition is 0 find it.
def find():
    num=[]
    for i in range(0,len(nums)):
        a1=0
        for j in range(i+1,len(nums)):
            
            for k in range(j+1,len(nums)):
                a=[]
                
                if nums[i]+nums[j]+nums[k]==0 and i!=j!=k:
                    a.append(nums[i])
                    a.append(nums[j])
                    a.append(nums[k])
                    num.append(a)
                    a1=1
                    break
            if a1==1:
                break    
    return num

nums=[-1,0,1,2,-1,-4]
print(find())