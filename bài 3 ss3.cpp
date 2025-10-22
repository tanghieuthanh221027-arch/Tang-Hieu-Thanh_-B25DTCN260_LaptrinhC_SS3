#include <stdio.h>
#include <math.h>
int main (){
	float r ;
	printf("Nhap ban kinh :") ;
	scanf("%f" , &r) ;
	float perimeter = 2 * M_PI * r ;
	float acreage = M_PI * pow(r,2) ;
	printf("%.2f\n" , perimeter ) ;
	printf("%.2f" , acreage ) ;
	return 0 ;  
}
