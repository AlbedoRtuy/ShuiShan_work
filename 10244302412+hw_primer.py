n=int(input("please input a number:"))
for i in range(2,n+1):
    flag=1
    for j in range(2,int(i**0.5)+1):
        if (i % j==0):
            flag=0
            break
    if (flag):
        print(i)