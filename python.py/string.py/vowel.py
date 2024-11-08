#wap to count total no. of vowel and consonant in a given string.



a=input('enter string:')
vowel=0
consonant=0
for i in range(0,len(a)):
    if(a[i]!=' '):
        if(a[i]=='a'or a[i]=='e'or a[i]=='i'or a[i]=='o'or a[i]=='u'or a[i]=='A'or a[i]=='E'or a[i]=='I'or a[i]=='O'or a[i]=='U'):
            vowel=vowel+1
        else:
            consonant=consonant+1
print('total no. of vowel=',vowel)
print('total no. of consonant=',consonant)




'''a=input('enter a string=')
i=0
x=0
vowel=0
consonant=0
while(i<=len(a)):
    if(a[i]!=' '):
        if(a[i]=='a'or a[i]=='e'or a[i]=='i'or a[i]=='o'or a[i]=='u'or a[i]=='A'or a[i]=='E'or a[i]=='I'or a[i]=='O'or a[i]=='U'):
            vowel=vowel+1
        else:
            consonant=consonant+1
print('total no. of vowel=',vowel)
print('total no. of consonant=',consonant)'''


# table from for lop
a=int(input('enter a no.'))
for i in range(1,11,1):
    x=a*i
    print(x)
        






