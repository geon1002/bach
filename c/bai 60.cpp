#include "stdio.h"
#include "string.h"

int MY_STRCMP(char x1[], char x2[]){
	int Ket_qua = 0;
	size_t len1 = strlen(x1);
	size_t len2 = strlen(x2);
	size_t min = len1<len2?len1:len2;
	
	for(int i = 0; i<min; i++){
		Ket_qua = x1[i]-x2[i];
			if(Ket_qua!=0)
				break;
	}
	if(Ket_qua>0)
		return 1; 
	else if(Ket_qua<0)
		return -1;
	else
		return 0;

}

int main(){
	
	char s_1[50];
	char s_2[50];
	
	printf("Nhap vao s_1: ");
	fgets(s_1, sizeof(s_1), stdin);
	
	printf("Nhap vao s_2: ");
	fgets(s_2, sizeof(s_2), stdin);
	
	printf("\nKet qua so sanh: %d", strcmp(s_1, s_2));
	printf("\n------");
	printf("\nKet qua so sanh: %d", MY_STRCMP(s_1, s_2));
	
	
	
}
