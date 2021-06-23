import random

mang = []
for i in range(0, 12):
    mang.append(random.randint(1, 100))


print(mang)

# Code timra so lon nhat trong ma
dodaimang=len(mang)

for i in range(0,dodaimang):
    for bach in range(i,dodaimang):
        if mang[i]>mang[bach]:
            so_tam= mang[i]
            mang[i]=mang[bach]
            mang[bach]=so_tam
print(mang)