


#tao mot ham nhan vao mot mang va tra ve mang dao chieu 
def kiemtrant(socankt):
    sochia = 2
    while sochia < socankt:
        if socankt % sochia==0 :
            return False
        sochia += 1
    return True


socankt = input("so:")
so = int(socankt)
vv=kiemtrant(so)
print(vv)