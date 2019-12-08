target=[1,3,9,7,4,5,9,2,1,5,9,8,1,2]
len(target)-target[::-1].index(sorted(target)[-1])-1
