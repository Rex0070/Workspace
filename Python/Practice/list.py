menu=1
friend=[ ]
while menu !=0:
    print("1. 리스트 출력")
    print("2. 추가")
    print("3. 삭제")
    print("4. 변경")
    print("0. 삭제")
    menu=int(input("선택해주세요>> "))
    if menu==1:
        print(friend)
    elif menu==2:
        name=input("추가할 요소를 입력해주세요>> ")
        friend.append(name)
    elif menu==3:
        del_name=input("삭제하고 싶은 요소를 입력해주세요>>")
        if del_name in friend:
              friend.remove(del_name)
        else:
              print("요소가 발견되지 않음")
    elif menu==4:
        old_name=input("변경하고 싶은 요소를 입력해주세요>> ")
        if old_name in friend:
          index=friend.index(old_name)
          new_name=input("새로운 요소를 입력해주세요>> ")
          friend[index]=new_name
        else:
          print("요소가 발견되지 않음")
