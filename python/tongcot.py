
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

def tinhtongmang(mang1, mang2):
    a = []
    dodaimang = len(mang1)
    for i in range(0, dodaimang):
        so1 = mang1[i]
        so2 = mang2[i]
        tong = so1 - so2
        a.append(tong)
    return a
tong_tat_ca = tinhtongmang(Mang1, Mang2)
print(tong_tat_ca)

        









