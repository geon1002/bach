import os
import time

mang = [' ', 'B', 'a', 'c', 'h', ' ', 'D', 'e', 'p', ' ', 'T', 'r', 'a', 'i']

def dich_mang(mang):
    index_cuoi = len(mang)-1
    chucuoicung = mang[index_cuoi]
    for i in range(index_cuoi - 1, -1, -1):
        mang[i+1] = mang[i]
    mang[index_cuoi]= chucuoicung
    return mang

while True:
    os. system('cls')
    mang = dich_mang(mang)
    b=' '. join(mang)
    print(b)
    time.sleep(0.5)