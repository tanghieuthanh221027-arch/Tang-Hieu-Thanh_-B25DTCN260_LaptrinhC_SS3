#include<stdio.h>
#include <math.h>
int main (){
	int n ;
	printf("nhap n :") ;
	scanf("%d" , &n) ;
	float result = 1/((n - 1) * n) + 1/(n * (n + 1)) + 1/((n + 1) * (n + 2)) ;
	printf("%.2f" , result) ;
	return 0 ; 
}
