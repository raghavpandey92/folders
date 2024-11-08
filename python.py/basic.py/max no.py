#write a programme to find max between three no.

a= int(input("enter a 1st no.:"))
b= int(input("enter a 2nd no.:"))
c= int(input("enter a 3rd no.:"))
if a>b and a>c:
         print("max no.=",a)
elif b>a and b>c:
         print("max no.=",b)
else:
         print("max no.=",c)
