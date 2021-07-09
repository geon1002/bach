#include "stdio.h"
#include "string.h"
void XOA_XUONG_DONG(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

int KIEM_TRA_DOI_XUNG(char x[]){
	size_t len = strlen(x);
	for(int i = 0; i<len/2; i++){
		if(x[i]!=x[len-i-1])
			return 0;
	}
	return 1;
}

int main(){
	char s[50];
	printf("NHap s = ");
	fgets(s, sizeof(s), stdin);
	XOA_XUONG_DONG(s);
	
	
	if(KIEM_TRA_DOI_XUNG(s)){
		printf("Day la chuoi doi xung");
	}else{
		printf("Day la chuoi khong doi xung");
	}
}
