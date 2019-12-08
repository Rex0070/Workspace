a = [1,2,[[100]]]
def dw(a): #문을 뿌셔서 빵을 구해서 먹는 함수
    sum1 = 0
    for i in a: #문을 뿌수는 행위
        if type(i) == int:
            sum1 += i
        else :
            sum1 += dw(i)
    return sum1
print(dw(a))
   
  
