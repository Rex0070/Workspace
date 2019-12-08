def hail(n):
    print(n, end=' ')
    if not n%2:
        hail(int(n/2))
    else:
        if n != 1: hail(3*n+1)
hail(int(input()))
