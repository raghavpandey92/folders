# write a programme to accept marks of 5 subject and find total marks and percentage assuming full marks as 100 in each subject.

a=int(input("marks of subject 1:"))
b=int(input("marks of subject 2:"))
c=int(input("marks of subject 3:"))
d=int(input("marks of subject 4:"))
e=int(input("marks of subject 5:"))
x=a+b+c+d+e      
print("total marks of all 5 subjeect is:",x)
print("full marks of each subject is:",100)
y=(x*100)/500
print("prercentage of all subject is:",y)      
