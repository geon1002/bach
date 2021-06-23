bachgianroi = []
for bachsoma in range(2000, 3200):
    if bachsoma % 7==0 and bachsoma % 5 != 0:
        bachgianroi.append(str(bachsoma))
print( ' '.join(bachgianroi))
