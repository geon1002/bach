import random

# Tao ra mang
mang = []
for i in range(0, 12):
    mang.append(random.randint(1, 100))


# print(mang)


# Tinh toan ham
def tinh(mangso, sonhan):
    dodaimangso = len(mangso)
    for i in range(0, dodaimangso):
        mangso[i] *= sonhan
    return mangso

def sapxep(mangso):
    dodaimangso = len(mangso)
    for i in range(0, dodaimangso):
        for j in range(i, dodaimangso):
            if mangso[i] > mangso[j]:
                so_tam = mangso[i]
                mangso[i] = mangso[j]
                mangso[j] = so_tam
    return mangso

def inmang(mangso):
    print(mangso)

def tong2so(a, b):
    return a + b

#hieu hai so

def hieu(a, b):
    return a-b

print(hieu(9, 8))

#tong hai so
def tong(a, b, c):
    return a+b+c

tong3so = tong(12, 13, 14)
print(tong3so)

#nhan banh
def nhan(a,bede):
    return a*bede

nhanqua= nhan(10, 2)
print(nhanqua)

#chia tay
def chia(a,b):
    return a/b

chiahaiso= chia(10,2)
print(chiahaiso)
#giai thua
def giaithua(a):
    tichchung=1
    for bachdz in range(1,a+1):
        tichchung*=bachdz
    return(tichchung)

print(giaithua(10))
#mu
def mu(so,mu):
    tichchung=1
    for _ in range(0, mu):
        tichchung*=so
    return(tichchung)

print(mu(100,100))





    
    
    

