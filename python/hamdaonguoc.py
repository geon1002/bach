import random


def nn(dodaimangketqua):
    mangketqua = []
    while dodaimangketqua > 0:
        mangketqua.append(random.randrange(0, 100))
        dodaimangketqua -= 1
    return mangketqua



mangcantinhtong = nn(10)
print(mangcantinhtong)


def daonguoc(mang):
    dodaimang = len(mang)
    tong_index =  dodaimang - 1

    mot_nua = int(tong_index/2)

    for i in range(0, mot_nua):
        i_doidien = tong_index-i 
        so_tam = mang[i]
        mang[i]=mang[i_doidien]
        mang[i_doidien] = so_tam
    return mang

mangdaonguoc = daonguoc(mangcantinhtong)
print(mangdaonguoc)

        









