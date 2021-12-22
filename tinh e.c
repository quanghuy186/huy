#include <stdio.h>
#include <math.h>

int main(){
	float x, fx = 0;
	printf("Nhap x = ");
	scanf("%f", &x);
	if(x >= 0){
		fx = (exp(x) - 1) / (sqrt(x) + 1);
		printf("Gia tri cua bieu thuc la: %.4f", fx);
	}else{
		printf("Bieu thuc khong xac dinh!");
	}
	return 0;
} 
