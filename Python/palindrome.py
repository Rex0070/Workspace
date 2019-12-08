def func(a):
    a=str(a)
    if a==a[::-1]:
        print(a)
    else:
        func(int(a)+int(a[::-1]))
func(int(input()))

