import random

# Tao ra mang
mang = []
for i in range(0, 12):
    mang.append(random.randint(1, 100))


print(mang)

# Sap xep mang
dodaimang=len(mang)

for i in range(0,dodaimang):
    for bach in range(i,dodaimang):
        if mang[i]>mang[bach]:
            so_tam= mang[i]
            mang[i]=mang[bach]
            mang[bach]=so_tam
print(mang)

# x2 cac phan tu
for i in range(0,dodaimang):
      mang[i] *= 2
print(mang)