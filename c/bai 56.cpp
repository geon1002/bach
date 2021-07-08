#include "stdio.h"
#include "string.h"

int MY_STRLEN(char x[]){
	int count = 0;
	while(x[count]!='\0'){
		count++;
	}	
	return count++;
}

int main(){
	//char name[50] = "CAN VIET BACH";
	
	char name[50];
	printf("NHap ten cua ban la: ");
	fgets(name, sizeof(name), stdin);
	
	printf("\nTen cua ban la: %s", name );
	printf("\nDo dai ten cua ban la: %d", strlen(name));
	
	printf("\nTen cua ban la: %s", name);
	printf("\nDo dai ten cua ban la: %d", MY_STRLEN(name));
}
