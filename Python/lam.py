list = [lambda x ,y: x+y, lambda x,y : x-y, lambda x,y : x*y, lambda x,y : x/y]
a=int(input())
b=int(input())
c=int(input())
print(list[c](a,b))
