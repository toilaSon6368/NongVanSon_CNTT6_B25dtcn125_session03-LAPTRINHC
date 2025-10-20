#include <stdio.h>
#include <math.h>  

int main(){
    int a, b;                         // vi du lay nhu de bai a=3; b=4 } ds=5.29
    double S;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);

    S = sqrt(a + sqrt(b + 1)) + sqrt(b + sqrt((a * a) + (b * b)));
    printf("S = %.2lf", S);

    return 0;
}




































