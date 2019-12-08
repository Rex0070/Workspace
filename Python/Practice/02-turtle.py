import turtle as t

# 거북이 모양으로 변경
t.shape("turtle")

# 원 그리기
t.circle(50)    # 반지름이 50인 원을 그린다.

# 사각형 그리기
t.color("red")  # 펜 색상을 빨간색으로 변경
t.pensize(3)    # 펜 굵기를 3으로 변경

for i in range(4) : # 아래 로직을 4번 반복 
    t.forward(100)  # 거북이가 100만큼 앞으로 이동
    t.left(90)      # 거북이가 왼쪽으로 90도 회전

# Run -> Run Module (F5) 선택하여 실행
