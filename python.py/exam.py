# import tkinter as tk
# w = tk.Tk()
# l1 = tk.Label(text = "first name:")
# l2 = tk.Label(text = "last name:")
# t1 = tk.Entry(width = 40)
# t2 = tk.Entry(width = 40)
# l1.grid(row=0)
# l2.grid(row=1)
# t1.grid(row=0,column=1)
# t2.grid(row=1,column=1)
# w.minsize(500,400)
# w.mainloop()


# import tkinter as tk
# root = tk.Tk()
# root.minsize(500,500)
# l1 = tk.Label(root,text = "enter something")
# l2 = tk.Label(root,text = "enter")
# l3 = tk.Label(root,text = "result")
# t1 = tk.Entry(root,width = 30)
# t2 = tk.Entry(root,width = 30)
# t3 = tk.Entry(root,width = 30)
# l1.grid(row = 0,column = 0)
# l2.grid(row = 1,column = 0)
# l3.grid(row = 2,column = 0)
# t1.grid(row = 0,column = 1)
# t2.grid(row = 1,column = 1)
# t3.grid(row = 2,column = 1)

# root.mainloop()







# OOPS WITH PYTHON 

# class className:
#     ''' documentation string'''

# print(className.__doc__)
# help(className)


# class student:
#     '''xyz'''
#     def __init__ (self):
#         self.name = 'adarsh'
#         self.age = 21
#         self.marks = 80
#     def talk(self):
#         print("hello my name is",self.name,"and my age is:",self.age,"and my marks are",self.marks)
# s1 = student()
# print(s1.name)
# print(s1.age)
# print(s1.marks)
# s1.talk()
# s2 = student()
# print(id(s1))
# print(id(s2))

# s3 = student("shivam",56,76)

class Student:
    '''xyz'''
    def __init__(self,name,rollno,marks):
        print("constrcutor execution")
        self.name = name
        self.rollno = rollno
        self.marks = marks
    def talk(self):
        print("hello I am ",self.name)
        print("my age is ",self.age)
        print("my marks is ",self.marks)