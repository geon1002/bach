Mang = [5245245,45,234534,534,534,534]


def them(mang):
	dodaimang = len(mang)
	tong_index = int(dodaimang/2)

	mot_nua = tong_index -1

	for i in range(0, mot_nua):
		for j in range(i, mot_nua):
			if mang[i] > mang[j]:
				i_doidien = tong_index - 1
				so_tam  = mang[i]
				mang[i] = mang[i_doidien]
				mang[i_doidien] = mang[i]
	return mang

check = them(Mang)
print(check) 
	 