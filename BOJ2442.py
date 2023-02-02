a = int(input())

for i in range(1, a+1) :
    for j in range(a-i) : print(" ", end="")
    print("*"*(2*i-1))