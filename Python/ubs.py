def length(num) :
    i=[str(num)]
    while num > 1 :
        if num % 2 == 0 :
            num = num / 2
        else :
            num = 3*num + 1
        i.append(str(num))
    return len(i)
def max(rs, rt) :
    max_num, max_i = 0,0
    while rs < rt:
        if length(rs) > max_i :
            max_i = length(rs)
            max_num = rs  
        rs += 1
    print(max_num, max_i)
a=int(input())
b=int(input())
max(a,b+1)
