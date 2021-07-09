#include "stdio.h"
#include "string.h"

//void XOA_XUONG_DONG(char x[]){
//	size_t len = strlen(x);
//	if(x[len-1]=='\n'){
//		x[len-1]=='\0';
//	}
//}
void XOA_XUONG_DONG(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

void MY_STRREV(char x[]){
	size_t len = strlen(x);
	for(int i = 0; i<len/2; i++){
		char temp = x[i];
		x[i] = x[len-i-1];
		x[len-i-1] = temp; 
	}
}

int main(){
	char s[50] = "";
	printf("Nhap s = ");
	fgets(s, sizeof(s), stdin);
	XOA_XUONG_DONG(s);
	
	printf("\ns = %s", s);
	//strrev(s);
	MY_STRREV(s);
	printf("\ns = %s", s);

	
	
}
