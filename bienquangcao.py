import os
import time

mang = [' ', 'B', 'a', 'c', 'h', ' ', 'D', 'e', 'p', ' ', 'T', 'r', 'a', 'i']

def dich_mang(mang):
    insex_cuoi = len(mang)-1
    chudautien = mang[0]
    for i in range(0,insex_cuoi):
        mang[i]=mang[i+1]
    mang[insex_cuoi]=chudautien
    return mang

while True:
    os.system('cls')
    mang = dich_mang(mang)
    b = ' '.join(mang)
    print(b)
    time.sleep(0.1)
