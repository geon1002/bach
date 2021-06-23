import random


def nn(dodaimangketqua):
    mangketqua = []
    while dodaimangketqua > 0:
        mangketqua.append(random.randrange(0, 100))
        dodaimangketqua -= 1
    return mangketqua



mangcantinhtong = nn(10)
print(mangcantinhtong)



def sont(so):
    for sochia in range(2,so):
         if so % sochia==0:
            return False
    return True


def duyet(mang):
    tong = 0
    dapso = 0
    for so in mang:
        dunglasont = sont(so) 
        if dunglasont:
            tong += so
    return tong
cosnt = duyet(mangcantinhtong)
print(cosnt)