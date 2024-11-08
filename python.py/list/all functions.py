#.WAP to print all builtin function in one programme.


a=[]
for i in range(5):
    x=input('enter the values=')
    a.append(x)
print(a)
b=len(a)
print('the length of the list is=',len(a))
print('the max value in the list is=',max(a))
print('the min value in the list is=',min(a))
z=input('enter the value to be count=')
b=a.count(z)
print(z,'the value appear in the list are=',b,'times')
y=input('enter the index which is to found')
index=a.index(y)
print(index)






