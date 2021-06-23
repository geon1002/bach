
import random


def nn(dodaimangketqua):
    mangketqua = []
    while dodaimangketqua > 0:
        mangketqua.append(random.randrange(0, 100))
        dodaimangketqua -= 1
    return mangketqua



Mang1 = nn(10)
Mang2 = nn(10)
print(Mang1)
print(Mang2)


def them(mang1, mang2):
    mang = []
    dodaimang = len(Mang1)
    dodaimang1 = len(Mang2)
    for j in range(0,dodaimang1):
        for i in range(0, dodaimang):
            so1 = mang1[i]
        so2 = mang2[j]
    mang.append(so1)
    mang.append(so2)
    return mang

mangthem = them(Mang1, Mang2)
print(mangthem)


