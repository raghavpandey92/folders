# 1. write a programe to find sum of digit of a given number.


'''a=int(input('enter the no.='))
sum=0
while(a>0):
    sum=sum+a%10
    a=a//10
print(sum)'''


# 2. WAP to find sum of square of digit of a given no.

'''a=int(input('enter a no='))
sum=0
while(a>0):
    sum=sum+(a%10)*(a%10)
    a=a//10
print('the sum of square of a given no.=',sum)'''


# 3. WAP to find the sum of even digit and product of odd digit no.

'''a=int(input('enter the digit='))
sum=0
mult=1
num=a
while(num>0):
    x=num%10
    if(x%2==0):
        sum=sum+x
    else:
        mult=mult*x
    num=num//10
print('sum=',sum)
print('sum=',mult)'''



# 4. WAP to check wether the given no. is armstrong or not.

'''a=int(input('enter the no.='))
sum=0
b=a
while(a>0):
    sum=sum+(a%10)*(a%10)*(a%10)
    a=a//10
print('the sum of cube of a given no is=',sum)
if (b==sum):
    print('the given no. is armstrong')
else:
    print('the given no. is not a armstrong')'''


# 5. WAP to find product of a digit of a given no.

'''a=int(input('enter the no.'))
prod=1
while(a>0):
    prod=prod*(a%10)
    a=a//10
print('the product of a given no is=',prod)'''


# 6. WAP to find reverse of a given no.

'''a=int(input('enter the no.='))
reverse=0
while(a>0):
    reverse=(a%10)+reverse*10
    a=a//10
print('the reverse of a given no. is=',reverse)'''



# 7. WAP to check wether the given no is palindrome or not.

'''a=int(input('enter the no.='))
d=a
rev=0
while(a>0):
    rev=(a%10)+(rev*10)
    a=a//10
print('the reverse of a given no. is',rev)
if(d==rev):
   print('the given no. is palindrome')
else:
    print('the given no. is not a palindrome')'''


# 8.WAP to check the given no is prime or not.

'''a=int(input('enter the no.='))
i=1
count=0
while(i<=a):
    if(a%i==0):
        count=count+1
    i=i+1
if(count==2):
    print('no. is prime')
else:
    print('no. is not prime')'''


# 9. WAP to print factoraial of a given no.

'''a=int(input('enter the no.'))
fact=1
while(a>0):
    fact=fact*a
    a=a-1
print('the factorial of a given no is=',fact)'''


# 10. WAP to print a fibonacci series.

a=int(input('enter the no'))
x=0
y=1
z=0      
while(z<=a):
    print(z)
    x=y
    y=z
    z=x+y


# factorial printing.

'''sum=0
fact=1
for i in range(1,2):
    fact=fact*i
    sum=sum+(i/fact)
print(sum)'''
    
    






























    































    
































    
        
    
   
    
    
    










