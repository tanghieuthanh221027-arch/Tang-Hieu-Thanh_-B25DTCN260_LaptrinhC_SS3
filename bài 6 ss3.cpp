#include <stdio.h>
#include <math.h>
int main (){
	float a , h ;
	printf("Nhap canh day :") ;
	scanf("%f" , &a);
	printf("Nhap chieu cao :") ;
	scanf("%f" , &h);
	float acreage = a * h / 2 ; 
	printf("%.2f" , acreage);
	return 0 ;
	
} 
