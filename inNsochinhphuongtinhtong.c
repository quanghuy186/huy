#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool soChinhPhuong(int n){
	if((float)sqrt(n) == sqrt(n)){
		return true;
	}else{
		return false;
	}
}

int main(){
	int n, i, s = 0, d = 0;
	float tbc = 0;
	printf("N = ");
	scanf("%d", &n);
	
	if(n > 0){
		printf("So chinh phuong tu 1 den %d:", n);
		for(i = 1; i <= n; i++){
			if(soChinhPhuong(i)){
				d++;
				printf(" %d", i); 
                s += i; 
			}
		}
		printf("\nTong so chinh phuong = %d ", s);
		printf("\nTBC so chinh phuong = %.4f ", 1.0*s/d);
			
	}else{
		printf("%d khong la so nguyen duong!", n);
	}
}
