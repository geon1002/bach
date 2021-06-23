so = input("so:")
so = int(so)
sochia = 3
nhucnach = 0
while so % sochia==0:
	so /= sochia
	nhucnach = nhucnach + 1

print(nhucnach,"lan")