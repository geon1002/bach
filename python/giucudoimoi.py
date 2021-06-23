import random



def nn(dodaimangketqua):
    mangketqua = []
    while dodaimangketqua > 0:
        mangketqua.append(random.randrange(0, 100))
        dodaimangketqua -= 1
    return mangketqua



mangcantinhtong = nn(2)

def nhandoi(mang):
    mangmoi = []
    dodaimang = len(mang)
    for i in range(0, dodaimang):
        mangmoi.append(mang[i] * 2)
    return mangmoi

manggapdoi = nhandoi(mangcantinhtong)

print(mangcantinhtong)
print(manggapdoi)










