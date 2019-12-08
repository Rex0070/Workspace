a=int(input())
b=int(input())
A=a
B=b

while(a!=b):
  if(a>b) : a-=b
  else    : b-=a

print(A*B/a)
