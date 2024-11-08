# WAP to count total no.of odd and even no.in the list.

a=[]
for i in range(5):
    b=int(input('enter the value:'))
    a.append(b)
print(a)
x=0
c=0
sum1=0
sum2=0

for i in range(5):
    if(a[i]%2==0):
        sum1=sum1+a[i]
        x=x+1
    else:
        sum2=sum2+a[i]
        c=c+1
print('the sum of even elements is=',sum1)
print('the sum of odd elements is=',sum2)
