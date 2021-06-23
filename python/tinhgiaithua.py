x = input("so nhap vao tinh giai thua")
x = int(x)
def fact(x):
    if x == 0:
        return 1
    return x * fact(x - 1)

print(fact(x))