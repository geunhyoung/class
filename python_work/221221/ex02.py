'''
page 114
'''

a= ['life','is','too','short']
result = " ".join(a)

print(result)

# 2

a= (1,2,3)
a = tuple(a) + tuple([4])

print(a)
'''

    list , tuple, set ,range, iterable
'''
#for i in []

#3
a= dict()
a['name'] = 'python'
a[('a',)] = 'python'

# try:

#     a[[1]] = 'python'
# except Exception as e:
#     pass
a[250] = 'python'

print(a)