# 5. WAP to count a frequency of a given no.

a=[]
b=int(input('enter the size of the list='))
for i in range(b):
    x=int(input('enter the values='))
    a.append(x)
print(a)
y=int(input('enter the no. to be count='))
c=a.count(y)
print('frequency=',c)
