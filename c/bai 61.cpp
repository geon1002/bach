#include "stdio.h"
#include "string.h"
void MY_STRUPR(char x[]){
	for(int i = 0; i<strlen(x); i++){
		if(x[i]>=97 && x[i]<=122){
			x[i] = x[i]-32;
		}
	}
}

void MY_STRLWR(char x[]){
	for(int i = 0; i<strlen(x); i++){
		if(x[i]>=65 && x[i]<=90){
			x[i] = x[i]+32;
		}
	}
}

int main(){
	char s[50] ="" ;
	printf("Nhap ten cua ban:");
	fgets(s, sizeof(s), stdin);
	printf("s = %s", s);
	//strupr(s);
	MY_STRUPR(s);
	printf("\nChuyen sang viet hoa: %s", s);
	//strlwr(s);
	 MY_STRLWR(s);
	printf("\nChuyen sang viet thuong: %s", s);
	
}
