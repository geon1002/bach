#include "stdio.h"
#include "math.h"
int KIEM_TRA_SO_NT(int x){
	if(x<=1) return 0;
	for(int j=2; j<=sqrt(x); j++){
		if(x%j==0) return 0;
			
	}
	return 1;
}

int main(){
	int n;
	
	do{
		printf("n = ");
		scanf("%d", &n);
		
	}while(n<1);
	
	for(int i=2; i<=n; i++){
		int kt = KIEM_TRA_SO_NT(i);
		if(kt){
			printf("%d", i);
		}
	}
}
