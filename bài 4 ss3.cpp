#include <stdio.h>
#include <math.h>
int main (){
	float a , b , c ;
	printf("Nhap diem toan :");
	scanf("%f" , &a) ;
	printf("Nhap diem van :");
	scanf("%f" , &b) ;
	printf("Nhap diem anh :");
	scanf("%f" , &c) ;
	float sum = a + b + c ;
	float average = (a + b + c) / 3 ;
	printf("%.2f\n" , sum) ;
	printf("%.2f" , average) ;
	return 0 ;
}
