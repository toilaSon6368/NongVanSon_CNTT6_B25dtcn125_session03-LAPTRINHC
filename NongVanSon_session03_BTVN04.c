#include <stdio.h>
#include <math.h>

int main(){
	float toan, van , anh;
	float tong , trungBinh; 
	
	printf("nhap diem toan ,van ,anh:");
	scanf("%f%f%f",&toan, &van, &anh) ;
	
	tong = toan + van + anh;
	trungBinh = tong / 3;
	
	printf("Tong diem cua 3 mon la : %.2f\n",tong); 
	printf("Trung binh diem 3 mon la : %.2f", trungBinh);
	
	return 0; 
}
