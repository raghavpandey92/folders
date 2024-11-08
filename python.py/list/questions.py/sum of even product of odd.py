# WAP to find sum of even no.and product of odd no. in list.

a=[]
x=int(input('how many value you want to insert='))
for i in range(x):
    b=int(input('enter the values='))
    a.append(b)
print(a)
sum=0
mult=1
for i in range(x):
    if(a[i]%2==0):
        sum=sum+ a[i]
    else:
        mult=mult*a[i]
print('sum=',sum)
print('product=',mult)
