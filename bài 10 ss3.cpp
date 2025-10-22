#include <stdio.h>
#include <math.h>
int main (){
	float a , b ; 
	printf("Nhap a :") ;
	scanf("%f" , &a);
	printf("Nhap b :") ;
	scanf("%f" , &b);
	float result = sqrt(a + sqrt(b +1)) + sqrt(b + sqrt(pow(a,2) + pow(b,2))) ;
	printf("%.2f" , result ) ;
	return 0 ; 
}
