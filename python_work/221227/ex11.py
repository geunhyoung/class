from student import student

s1= student("홍길동",11,3)
s2= student("이길동",13,5)
s3= student("박길동",12,4)

print(s1)
print(s2)
print(s3)

list1 = [s1,s2,s3]

from operator import attrgetter

alist = sorted(list1,key=attrgetter('age'))
for item in alist:
    print(item)