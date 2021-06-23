so_nhapvao = input("Số: ")
nam = int(so_nhapvao)
if nam % 4==0 and nam % 100 > 0 or nam % 400==0:
    print("năm nhuận ", nam)
else:
    print("năm không nhuận", nam)