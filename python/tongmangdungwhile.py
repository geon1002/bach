
import random


def nn(dodaimangketqua):
    mangketqua = []
    while dodaimangketqua > 0:
        mangketqua.append(random.randrange(0, 100))
        dodaimangketqua -= 1
    return mangketqua



mangcantinhtong = nn(10)
print(mangcantinhtong)



def tinhtong(mang):
    tong = 0
    index = 0
    dodaimang  = len(mang)
    while index < dodaimang:
        so = mang[index]
        print(so)
        index += 1
        tong += so
    return tong

tong_tat_ca  =  tinhtong(mangcantinhtong)
print(tong_tat_ca)


   










