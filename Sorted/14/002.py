x = 4**2022 - 2 * 4**1111 + 16**600 + 192
k = 0 
while x > 0:
    if x % 4 == 3:
        k+=1
    x //= 4
print(k)
