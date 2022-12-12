def search(c):
    cout=1
    while c//10:
        cout += 1
        c//=10
    cout = 5-cout
    while cout!=0 :
        print("0", end="")
        cout -= 1

a = int(input())
t = 1
for i in range(1, a+1):
    t *= i
    while t%10==0: t//=10
    if t//1000000000000: t%=1000000000000
b = t%100000
search(b)
print(b)