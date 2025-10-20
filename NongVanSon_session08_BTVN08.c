#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int a, b, c, d, nghichdao;
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &n);

    if (n < 1000 || n > 9999) {                         //ham kiem tra xem co phai 4 so khong ? 
        printf("Vui long nhap so co 4 chu so!\n");
        return 0;
    }
    

    a = n / 1000;          
    b = (n / 100) % 10;    
    c = (n / 10) % 10;     
    d = n % 10;           

    nghichdao = d * 1000 + c * 100 + b * 10 + a;

    printf("So nghich dao la: %d\n", nghichdao);

    return 0;
}

