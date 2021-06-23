so_nhapvao = input("so: ")
so_nhapvao2 = input("so:")
so = int(so_nhapvao)    
so2 = int(so_nhapvao2)
ucln = 1
for sochia in range(2,so and so2):
    if so % sochia==0 and so2 %sochia==0 :
        ucln = sochia


print("ucln la",ucln)
 

