#include <stdio.h>
int main(){
	//Dia chi bien
	int var;
	printf("NHap var: ");
	scanf("%d", &var);
	printf("\nGia tri cua var: %d", var);
	printf("\nDia chi cua var: %p", &var);
	
	int *pc, c;
	c = 5;
	pc = &c;
	printf("\nGia tri cua c: %d", *pc);
	printf("\nDia chi cua bien c trong bo nho: %p", pc);
	
	*pc = 1;
	printf("\nGia tri cua c: %d", c);
	printf("\nGia tri cua *pc: %d", *pc);
}
