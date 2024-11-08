# 4. WAP to search a no. in list.

a=[]
x=int(input('enter a size of the list'))
for i in range(x):
    b=int(input('enter the values'))
    a.append(b)
print(a)
z=int(input('enter the no.to search'))
flag=0
for i in range(x):
    if(a[i]==z):
        flag=1
        pos=i+1
        break
if(flag==1):
    print('element found at=',pos)
else:
    print('element not found')
                
    
