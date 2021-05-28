tong = 0 
for socantim in range(2,100):
    dunglasont =1
    for sochia in range(2,socantim-1):
        if socantim % sochia==0:       
            dunglasont = 0
            break
    if dunglasont==1:
        tong = tong + socantim
print("tong so nt la: ", tong)

