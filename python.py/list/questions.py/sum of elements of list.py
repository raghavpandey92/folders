# 1. WAP to find sum of elements of the list.

a=[]
for i in range(5):
    x=int(input('enter the no.='))
    a.append(x)
print(a)
sum=0
for i in range(0,5):
    sum=sum+a[i]
print('the sum of all list elements is=',sum)
