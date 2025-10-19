n=int(input("please input the line："))
for num in range(1,n+1):
    for i in range(1,n-num+1):
        print(" ",end="")
    for i in range(1,num*2):
        print("*",end="")
    print("")
for num in range(n,0,-1):
    for i in range(1,n-num+1):
        print(" ",end="")
    for i in range(1,num*2):
        print("*",end="")
    print("")
