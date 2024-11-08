
#2. WAP to count and display the number of capital letter in a given letter.

'''a="ABADAasADA"
count=0
i=0
for i in a:
    print(len(a))
print(a)
for i in a:
    if a.isupper():
        count=count+1
        i=i+1
print(count)'''



# 3. WAP to check the given string is palindrome.

'''x=input('enter the string = ')
b=x[-1::-1]
if(x==b):
    print('the given string is palindrome')
else:
    print('the given string is not a palindrome')'''


#4. WAP to count the no. of each vowel in a string.

'''a=input('enter a string')
count=0
for i in range(0,len(a)):
    if(a[i]=='a' or a[i]=='e' or a[i]=='i' or a[i]=='o' or a[i]=='u' or a[i]=='A' or a[i]=='E'or a[i]=='I' or a[i]=='O' or a[i]=='U'):
        count=count+1
print('the total no. of vowel in a given string is =',count)'''



#6. WAP to accept a string and display the resultant string in reverse order.
'''
a=[]
a=input('enter a string = ')
b=a[0::2]
c=b[-1::-1]
print(b)
print(c)'''


#8. WAP to print the floating no. upto 2 decimal places.
'''
a=float(input('enter the value = '))
z=f"{a:.0f}"
print(z)'''


#9. WAP to print the following floating no. with no decimal places.

'''a=float(input('enter a no = '))
z=int(a)
print(z)'''


#13. WAP to count repeated character in a string.

'''a=input('enter a string = ')
count=0
ch=input('enter the string')
for i in a:
    if(i==ch):
        count=count+1
print(count)'''
    

#7. WAP to count character in both lower and upper case and display the maximum count of a character.

'''a='ABaBCbGc'
a=a.upper()
print(a)
count=0
for ch in a:
    count=0
    for j in range(0,len(a)):
        if(ch==a[j]):
            count+=1
    print(str(count)+ch)'''
# 7. using ( set ) inbuilt function.

'''a='ABaBCbGc'
a=a.upper()
count=0
x=set(a)
for i in x:
    print(i)
    print('count =',i,a.count(i))'''









class Person:
    def _init_(self, name, age, department):
        self.name = name
        self.age = age
        self.department = department

class Faculty(Person):
    def _init_(self, name, age, department, position):
        super()._init_(name, age, department)
        self.position = position

class Publication:
    def _init_(self, title, year):
        self.title = title
        self.year = year

# Example usage:
faculty_member = Faculty(name="John Doe", age=40, department="Computer Science", position="Professor")
publication1 = Publication(title="Research Paper 1", year=2022)
publication2 = Publication(title="Research Paper 2", year=2023)

print(f"Faculty Member: {faculty_member.name}, Age: {faculty_member.age}, Department: {faculty_member.department}, Position: {faculty_member.position}")
print(f"Publications: {publication1.title} ({publication1.year}), {publication2.title} ({publication2.year})");















    

         








    




    






 
        



    
  






























    






























































        


