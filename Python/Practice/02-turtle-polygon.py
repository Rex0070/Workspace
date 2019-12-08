import turtle as t

n = 5                # 오각형을 그립니다. 
t.color("purple")    # 펜 색지정 
t.begin_fill()       # 색칠할 영역을 시작

for x in range(n):   # n번 반복
    t.forward(50)    # 거북이가 50만큼 앞으로 이동
    t.left(360/n)    # 거북이가 왼쪽으로 360/n만큼 왼쪽으로 회전

t.end_fill()         # 색칠할 영역을 마무리
t.hideturtle();      # 거북이를 화면에 보이지 않도록 숨긴다.


