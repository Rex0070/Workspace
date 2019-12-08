from functools import reduce
print(reduce(lambda a ,b : a+b, list(map(lambda a:a[0],input().split()))))
