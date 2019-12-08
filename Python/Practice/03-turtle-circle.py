import turtle as t

# 거북이 모양으로 변경
t.shape("turtle")

n = 50              # 원을 50개 그린다.
t.bgcolor("black")  # 배경색을 검은색으로 지정
t.color("green")    # 펜 색을 녹색으로 지정
t.speed(0)          # 거북이 속도를 가장 빠르게 지정
for x in range(n):  # n번 반복
    t.circle(200)    # 현재 위치에서 반지름이 80인 원을 그린다.
    t.left(360/n)   # 거북이가 360/n만큼 왼쪽으로 회전

# Run -> Run Module (F5) 선택하여 실행
