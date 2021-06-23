import random
from typing import ValuesView

mang = []
for i in range(0, 12):
    mang.append(random.randint(1, 100))


print(mang)


#tao mot ham nhan vao mot mang va tra ve mang dao chieu 
def sapxep(dodaimang):
    chieudaimang = len(dodaimang)
    for i in range(0, chieudaimang):
        for j in range(i,chieudaimang):
            if mang[i] < mang[j]:
                so_tam = mang[i]
                mang[i]=mang[j]
                mang[j]=so_tam
    return dodaimang

vv = sapxep(mang)
print(vv)


