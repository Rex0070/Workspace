import os

number=int(input("숫자를 입력하세요(1~10000):"))

os.system("cls")

while True:

  predict=int(input())

  if number>predict:
    print("UP 이다")
  elif number<predict:
    print("DOWN 이다")
  elif number==predict:
    print("정답이다")
    break


