x = 3**70 - 3**55 + 9**20 - 81
k = 0
while x > 0:
    if x % 3 == 2:
        k+=1 
    x //= 3
print(k)
