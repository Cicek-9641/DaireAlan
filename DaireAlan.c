#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float square(const int r);

float yaricap,alan;
float pi= 3.14 ;



int main(){
	
	printf("dairenin yaricapini girin(r): ");
	scanf("%f" , &yaricap);
	
	alan = pi*(yaricap*yaricap);
	printf("alan = %.2f" , alan);

    getch();
	return 0;
	
}
