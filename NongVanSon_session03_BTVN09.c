#include <stdio.h>
#include <math.h>

int main(){
    int n;
	float A;
	printf("Thay can phai nhap n(>1):");
	scanf("%d",&n);

if(n > 1){
    A = (1.0 / ((n - 1) * n)) +(1.0 / (n * (n + 1))) + (1.0 / ((n + 1) * (n + 2)));
    printf("A = %.5f",A);
 }
else{
 	printf("gia tri n phai lon hon 1.0 \n");
 }
 return 0;
		
}
