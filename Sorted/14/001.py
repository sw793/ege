x = 5**2022 - 2 * 5**1010 + 25**850 + 2500
k = 0
while x > 0:
	if x % 5 == 4:
		k+=1
	x //= 5
print(k)
