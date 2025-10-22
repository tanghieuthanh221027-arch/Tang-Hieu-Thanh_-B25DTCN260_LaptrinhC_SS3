#include <stdio.h>
int main (){
	int number ; 
	printf("Nhap so :") ;
	scanf("%d" , &number);
	int a = number % 10 ;
	int b = (number / 10) % 10 ;
	int c = (number / 100) % 10 ;
	int d = (number / 1000) % 10 ;
	int sum = a + b + c + d ;
	printf("%d" , sum ) ;
	return 0 ;
}
