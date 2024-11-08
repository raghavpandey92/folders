# all the functions of dictionary.

'''a={'brand':'adarsh','mode':'fast','year':2003,'day':'sunday'}
print(a)
for i in a:
    print(a[i])'''


'''# 1. accesing item.
a={'brand':'adarsh','mode':'fast','year':2003,'day':'sunday'}
x=a['mode']
print(x)
t=a.get('day')
print(t)'''


# 2. accesing through for loop.
a={'brand':'adarsh','mode':'fast','year':2003,'day':'sunday'}
'''for i in a:
    print(i)
    print(a[i])
for i in a.values():
    print(i)
for i in a.items():
    print(i)'''


# 3. change values.
'''a={'brand':'adarsh','mode':'fast','year':2003,'day':'sunday'}
a['day']= 'monday'
print(a)'''


# checking wether a key is exist or not.

'''a={'brand':'adarsh','mode':'fast','year':2003,'day':'sunday'}
if 'year' in a:
    print('yes it is exist')
else:
    print('not exist')'''

# 4. len()

'''a={'brand':'adarsh','mode':'fast','year':2003,'day':'sunday'}
x=len(a)
print('the length of a is-=',x)'''


# 5.pop() / popitem

'''a={'brand':'adarsh','mode':'fast','year':2003,'day':'sunday'}
a.pop('mode')
print(a)
a.popitem()
print(a)'''

# 6. del keyword.// clear keyword // copy()

'''a={'brand':'adarsh','mode':'fast','year':2003,'day':'sunday'}
b=a.copy()
print(b)
del a['brand']
print(a)
a.clear()
print(a)'''


# 7. setdefault()

'''a={'brand':'adarsh','mode':'fast','year':2003,'day':'sunday'}
y=a.setdefault('place','kanpur')
print(a)
x=a.setdefault('brand','raghav')
print(a)'''


# 8.from keys()

'''a={'brand':'adarsh','mode':'fast','year':2003,'day':'sunday'}
x=('brand','day')
y=50
a=a.fromkeys(x,y)
print(a)'''

# 9. update

a={'brand':'adarsh','mode':'fast','year':2003,'day':'sunday'}
a.update('prabhu','kripa')
print(a)



































    





 



