a = input("so: ")
so = int(a)
sochia = 2 
while so >sochia:
    if so % sochia==0:
        print(sochia)
        so /= sochia
    else:
        sochia +=1

print(so)


