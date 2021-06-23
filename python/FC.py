so_nhap_vao = input("so:")
so_nhap_vao2 = input("so2:")
so2 = int(so_nhap_vao2)
so = int(so_nhap_vao)


def tinhdoF(doC):
    doF = (doC * 1.8) + 32
    return doF

DoF = tinhdoF(so)
print(DoF)


def tinhdoC(dof):
    doC = (dof - 32) / 1.8
    return doC

DoC = tinhdoC(so2)
print(DoC)







   










