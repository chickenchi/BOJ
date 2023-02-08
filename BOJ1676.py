a = int(input())
r = 1
resu = 0

for i in range(1, a+1) :
    r *= i

while r // 10 != 0 :
    if r % 10 == 0 :
        resu += 1
    else : break
    r //= 10

print(resu)