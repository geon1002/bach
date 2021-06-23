#january
print(" T2 T3 T4 T5 T6 T7 CN")
chuoi = '       '
for i in range(1, 31):
    cong_them = ' '
    if i < 10:
        cong_them = ' '
    chuoi = chuoi + cong_them + str(i)
    if (i+2) % 7 == 0:
        print(chuoi)
        chuoi = ''
print(chuoi)




