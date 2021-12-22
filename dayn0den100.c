#include <stdio.h>
#include <math.h>

int main(){
	int n, i, a[101], d = 0, dem = 0;
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n <= 0 || n >= 101);
	for(i = 0; i < n; i++ ){
		printf("So thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\nDay so:");
	for(i = 0; i < n; i++ ){
		printf(" %d", a[i]);	
	}
	printf("\nDao nguoc day so:");
	for(i = n-1; i >= 0; i-- ){
		printf(" %d", a[i]);	
	}
	for(i = 0; i < n; i++ ){
		if(a[i] % 3 == 0){
			d++;
		}
		if((float)sqrt(a[i]) == sqrt(a[i])){
			dem ++;
		}	
	}
	printf("\nDay co %d so chia het cho 3.", d);
	printf("\nDay co %d so chinh phuong.", dem);
	
	
	return 0;
}
