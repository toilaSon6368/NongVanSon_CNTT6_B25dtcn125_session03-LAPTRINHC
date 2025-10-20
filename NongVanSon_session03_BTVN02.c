#include <stdio.h>
#include <math.h>
int main(){
	float celsius, fahrenheit;
	printf("Nhap nhiet do theo thang Celsius la:");
	scanf("%f",&celsius);
	
	fahrenheit = celsius * (9.0 / 5) + 32;
	
	printf("Nhiet do theo thang Fahrenheit la: %.2f",fahrenheit);
	
	return 0;
} 
