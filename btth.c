#include <stdio.h>
#include <math.h>
int main () {
	float a, b ;
	printf("Nhap a :") ;
	scanf("%f" , &a ) ;
	printf("Nhap b :") ;
	scanf("%f" , &b ) ;
	float result =sqrt( pow(a,2) + pow(b,2) ) /(a + b) + sqrt(a) + sqrt(b) )/(a * b);
	printf("%.2f" , result);
	return 0 ;
}


