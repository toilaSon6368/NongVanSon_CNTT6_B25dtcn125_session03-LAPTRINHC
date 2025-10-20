#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int a, b, c, d, tong;
    printf(" ban can nhap vao 1 so nguyen co 4 chu so bat ki : ");  //vi du nhap 1234 nhu de bai cho .
    scanf("%d", &n);

    a = n / 1000;          
    b = (n / 100) % 10;    
    c = (n / 10) % 10;     
    d = n % 10;            

    tong = a + b + c + d;

    printf("Tong cac chu so = %d\n", tong);

    return 0;
}

	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
