import turtle as t

# 거북이 모양으로 변경
t.shape("turtle")

angle = 89.9           # 거북이가 왼쪽으로 회전할 각도를 지정
t.bgcolor("black")   # 배경색을 검은색으로 지정
t.color("green")     # 펜 색을 녹색으로 지정
t.speed(0)           # 거북이 속도를 가장 빠르게 지정
for x in range(1500): # x 값을 0에서 199까지 바꾸면서 200번 실행
    t.forward(x)     # x 만큼 앞으로 이동 (실행을 반복하면서 선이 길어짐)
    t.left(angle)    # 거북이가 왼쪽으로 89도 회전

t.hideturtle();      # 거북이를 화면에 보이지 않도록 숨긴다.

# Run -> Run Module (F5) 선택하여 실행
