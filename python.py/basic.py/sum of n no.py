'''#WAP to find sum from 1 to n.
a=int(input("enter a no.="))
x=1
sum=0
while(x<=a):
    sum=sum+x
    x=x+1
print("sum of n no. is=",sum)'''


#write a programmeto find sum of square from 1 to n.
#write a programmeto find sum of cube from 1 to n.    
#write a programmeto find sum of even no. from 1 to n.



'''x=int(input('enter a no.='))
a=1
sum=0
while(a<=x):
    sum=sum+a*a*a
    a=a+1
print('the sum of square of n no. is=',sum)'''



x=int(input('enter a no.='))
a=2
sum=0
for i in range(2,x,2):
    sum=sum+i
    
print('the sum of even no. is=',sum)
    
    
