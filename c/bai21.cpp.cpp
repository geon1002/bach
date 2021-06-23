#include "stdio.h"
#include "math.h"
int KIEM_TRA_SO_CP(int x){
	int kt = (int) sqrt(x);
	if(pow(kt, 2) ==x)
		return 1;
	else;
		return 0; 
		
}
int main(){
	int n;
	
	do{
	printf("n = ");
	scanf("%d", &n);	
	}while(n<1);
	for(int i = 2; i<=n ; i++){
		if(KIEM_TRA_SO_CP(i)){
			printf("%d ", i);
		}
			
	}
}
