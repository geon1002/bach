import random

mang = []
for i in range(0, 12):
    mang.append(random.randint(1, 100))


print(mang)

# Code timra so lon nhat trong ma
chieudaimang = len(mang)
tong_index = chieudaimang-1

motnua_index =int(tong_index/2)

for i in range(0,motnua_index):
    i_doidien = tong_index-i
    so_tam=mang[i]
    mang[i]=mang[i_doidien]
    mang[i_doidien]=so_tam

print(mang)