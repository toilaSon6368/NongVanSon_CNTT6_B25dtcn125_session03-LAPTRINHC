#include <stdio.h>
#include <math.h>

int main(){
	float r , chuVi , dienTich;
	printf("nhap vao ban kinh hinh tron r la:");
	scanf("%f",&r);
	
	chuVi = 2.0 * M_PI * r;
	dienTich = M_PI * r * r;
	
	printf("Chu vi = %.2f\n", chuVi);
	printf("Dien tich = %.2f",dienTich);
	
	
	return 0;
}
