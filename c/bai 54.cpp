#include "stdio.h"

//Truyen tham tri
void swap_1(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

//Truyen tham chieu
void swap_2(int &a, int &b){
	int temp = a; 
	a = b; 
	b = temp;
	
}

//Dung con tro
void swap_3(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp; 
}
int main(){
	int a = 5; 
	int b = 10;
	
	printf("\nTruoc khi swap_1: a = %d va b = %d", a, b);
	swap_1(a, b);
	printf("\nSau khi swap_1: a = %d va b = %d", a, b);
	
	printf("\nTruoc khi swap_2: a = %d va b = %d", a, b);
	swap_2(a, b);
	printf("\nSau khi swap_2: a = %d va b = %d", a, b);
	
	
	printf("\nTruoc khi swap_3: a = %d va b = %d", a, b);
	swap_3(&a, &b);
	printf("\nSau khi swap_3: a = %d va b = %d", a, b);
}
