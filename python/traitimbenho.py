def sont(so):
    for sochia in range(2, so):
        if so % sochia==0:
            return False
    return True

song=sont(123456789)
print(song)
    