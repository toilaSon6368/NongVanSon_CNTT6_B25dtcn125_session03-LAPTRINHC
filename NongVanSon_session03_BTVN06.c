#include <stdio.h>               
#include <math.h>

int main(){
	float canhDay, chieuCao, dienTich;

	printf("Moi ban nhap vao do dai canh day va chieu cao la:");
	scanf("%f%f",&canhDay, &chieuCao);
		
	dienTich = (canhDay * chieuCao) / 2.0 ;
	
	printf("Dien tich cua tam giac la = %.2f\n", dienTich);
	
	return 0;
}
