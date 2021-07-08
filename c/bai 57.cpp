#include "stdio.h"
#include "string.h"

int MY_STRLEN(char x[]){
	int count = 0;
	while(x[count]!='\0'){
		count++;
	}	
	return count++;
}

void XOA_XUONG_DONG(char x[]){
	size_t len = strlen(x);
	if(x[len - 1]=='\n'){
		x[len - 1]='\0';
	} 
}

int main(){
	//char name[50] = "CAN VIET BACH";
	
	char name[50];
	printf("NHap ten cua ban la: ");
	fgets(name, sizeof(name), stdin);
	XOA_XUONG_DONG(name);
	
	printf("\nTen cua ban la: %s", name );
	printf("\nDo dai ten cua ban la: %d", strlen(name));
	
	printf("\nTen cua ban la: %s", name);
	printf("\nDo dai ten cua ban la: %d", MY_STRLEN(name));
}
