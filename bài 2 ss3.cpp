#include <stdio.h>
int main (){
	float celcius ;
	printf("Nhap nhiet do :");
	scanf("%f",&celcius) ;
	float fahrenheit = (celcius * 9 / 5 + 32);
	printf("%.2f",fahrenheit) ;
	return 0 ;
}
