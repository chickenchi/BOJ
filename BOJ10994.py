a = int(input())

cell = 0
tag = 0
cell2 = 1
tag2 = 0
delay = 1

for i in range(1, 2 + 4*(a-1)) :
    if i % 2 :
        print("* "*cell + "*"*(1+4*(a-1-cell)) + " *"*cell)

        if cell == a-1 : tag = 1
        
        if tag == 0 : cell += 1
        else : cell -= 1

    else :
        print("* "*cell2 + " "*(1+4*(a-1-cell2)) + " " + "* "*cell2)

        if cell2 == a-1 : tag2 = 1

        if tag2 == 0 : cell2 += 1
        elif tag2 == 1 :
            if cell2 != 1 and delay == 0 : cell2 -= 1
            else : delay = 0