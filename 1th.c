#include <stdio.h>
#include <math.h> 
#define MAX 100
int ktsnt(int x){
	int j, dem = 0;
	if(x< 2){
		return 0;
	} else{
		for(j=2; j<=sqrt(x); j++){
	    if(x%j==0) return 0;
	}
	return 1;
	}
}

int main(){
	int A[MAX], n, i, dem = 0;
		printf("so phan tu n = "); scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("A[%d] = ", i); scanf("%d", &A[i]);
	}
	for(i=0; i<n; i++){
		if(ktsnt(A[i])){
			dem ++; 
	        printf("\ncac so nguyen to la: %d ", A[i]);
	} 	
	}
	    printf("\nso luong so nguyen to = %d", dem); 
}
