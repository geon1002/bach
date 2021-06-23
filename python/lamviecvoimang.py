import random

# tao mang
mang = []

# them phan tu vao mang
mang.append(1)

# tao ngau nhien mang co 10 phan tu, moi phan tu tu 0 - 100
mangngaunhien = []
for i in range(0, 10):
    mangngaunhien.append(random.randrange(0, 100))

# duyet cac phan tu trong mang bang for
for so in mang:
    print(so)

# duyet cac phan tu trong mang bang index
dodaimang = len(mang)
for index in range(0, dodaimang):
    so = mang[index]
    print(so)

# tinh cac phan tu trong mang
tong = 0
for so in mang:
    tong += so
print(tong)

# duyet mang dung while
index = 0
dodaimang = len(mang)
while index < dodaimang:
    so = mang[index]
    print(so)
    index += 1