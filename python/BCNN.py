so = input("so:")
so2 = input("so2:")
so2 = int(so2)
so = int(so)

so_duybip = so
so2_huanrose = so2

while so2  != so:
    if so2   < so:
        so2 += so2_huanrose
    else:
        so += so_duybip

print("BCNN: ", so2, so)
