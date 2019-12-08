name = input("주민등록번호 : ")
num = [2,3,4,5,6,7,8,9,2,3,4,5]
number = 0

for i in range(0, len(num)):
    number += int(name[i]) * int(num[i])
    
gender=int(int(name)/1000000)

if 11-(number%11) == int(name[12]):
  if(gender%2==0):
    print ("이 주민등록번호는 유효한 여성주민등록번호 입니다.")
  else:
    print ("이 주민등록번호는 유효한 남성주민등록번호 입니다.")
else:
    print ("이 주민등록번호는 유효하지 않은 주민등록번호 입니다")
