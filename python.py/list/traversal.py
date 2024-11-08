# list traversal in python.


a=['adarsh',10,'shyam',12.5]
for i in a:
    print(i)



'''a=['adarsh',10,'shyam',12.5]
for i in range(len(a)):
    print(a[i])'''



#various type of functions in list.

# 1.Max(list)
#2. Min(list)


'''a=[10,40,50,70,89,99]
print('the maximum value in list=',max(a))
print('the minimum value in list=',min(a))'''



# 3. cmp(list1,list2)

'''list1=[2,4,6,8]
list2=[2,4,6,8]
list3=[2,4,6,9,11]
list4=[2,4,6,8]
print('comparing list 1 and list 2:')
print(cmp(list1,list2))'''




# 4. append()

'''a=[]
for i in range(6):
    x=int(input('enter a term added in list='))
    a.append(x)
print(a)'''



# 5.  count()

'''a=['ram','shyam','adarsh','ram','adarsh','adarsh']
x=a.count('ram')
y=a.count('adarsh')
print('the frequency of ram and adarsh are=',x,y)'''


# 6. index()

'''a=['ram','shyam','adarsh','ram','adarsh','adarsh']
x=a.index('adarsh')
y=a.index('ram')
print('the index of given elements are=',x,y)'''



# 7. insert()

'''a=[]
for i in range(5):
    x=input('enter the values=')
    a.append(x)
print(a)
index=int(input('enter the index='))
value=input('enter the value=')
a.insert(index,value)
print(a)'''


# 8. remove(object)


'''a=[]
for i in range(5):
    x=input('enter the value')
    a.append(x)
print(a)
val=input('enter the value which is remove=')
a.remove(val)
print(a)'''



# 9. reverse()


'''a=[]
for i in  range(5):
    x=int(input('enter the value='))
    a.append(x)
print(a)
a.reverse()
print('the reverse of the list=',a)'''


'''# 10. pop()

a=[]
for i in range(5):
    x=int(input('enter the values='))
    a.append(x)
print('the string is=',a)
a.pop()
print(a)'''

















































    
    



































