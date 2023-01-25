class A:
    pass
class B:
    pass

a= A()
b= B()

print('a.isinstance(A)',isinstance(a,A))
print('a.isinstance(B)',isinstance(a,B))

print('a.isinstance(A)',isinstance(b,A))
print('a.isinstance(B)',isinstance(b,B))

if a.isinstance(a):
    print("a는 A입니다")


if a.isinstance(b):
    print("b는 B입니다")