import random



def nn(dodaimangketqua):
    mangketqua = []
    while dodaimangketqua > 0:
        mangketqua.append(random.randrange(0, 100))
        dodaimangketqua -= 1
    return mangketqua



mangcantinhtong = nn(2)
print(mangcantinhtong)

def tong(mang):
    tong = 0
    for so in mang:
        tong += so
    return tong

tong_tat_ca = tong(mangcantinhtong)
print(tong_tat_ca)









