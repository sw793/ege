k = 2**1024 + 4**64 - 64
c = 0
while k > 0:
    if k % 2 == 1:
        c+=1
    k //= 2
print(c)
