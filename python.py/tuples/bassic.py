# Basic of tuples.

# size difference(memory)

'''import sys
list1= [1,2,'true','false']
tuple1= (1,2,'true','false')
print ('size of list=',sys.getsizeof(list1))
print ('size of tuple=',sys.getsizeof(tuple1))'''


# time checking.

'''import timeit
listtime= timeit.timeit(stmt='[1,2,3,4,5,6]',number=1000)
tupletime= timeit.timeit(stmt='[1,2,3,4,5,6]',number=1000)
print('list take time=',listtime)
print('tuple take time=',tupletime)'''

#creating tuple.


t1=tuple('adarsh')
print(t1)
list=[1,3,5,6,'ada',4]
t2=tuple(list)
print(t2)
