import random


def nn(dodaimangketqua):
    mangketqua = []
    while dodaimangketqua > 0:
        mangketqua.append(random.randrange(0, 100))
        dodaimangketqua -= 1
    return mangketqua



mangcantinhtong = nn(10)
print(mangcantinhtong)

def tinhsoln(mang):
    sln = mang[0]
    for so in mang:
        if so > sln:
            sln=so
    return sln

solonnhat = tinhsoln(mangcantinhtong)
print(solonnhat)

def tinhsonn(mang):
    snn = mang[0]
    for so in mang:
        if so < snn:
            snn=so
    return snn
sonhonhat = tinhsonn(mangcantinhtong)
print(sonhonhat)





