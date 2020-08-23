#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("hay nhap vao 3 so a,b,c \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if ((a + b) >= c & (b + c) >= a & (a + c) > +b) {
        printf("3 canh tao thanh mot tam giac\n");
        if ((a * a + b * b == c * c) | (a * a + c * c == b * b) | (b * b + c * c == a * a)) {
            printf("3 canh tao thanh tam giac vuong\n");
            if ((a == b) | (b == c) | (a == c)) {
                printf("3 canh tao thanh tam giac vuong can\n");
            } else {
                printf("3 canh khong phai la tam giac vuong can\n");
            }
        } else if ((a == b) || (b == c) || (a == c)) {
            if ((a == b) && (b == c) && (a == c)) {
                printf("la tam giac deu\n");
            } else {
                printf("la tam giac can\n");
            }
        } 
    } else {
        printf("la tam giac thuong\n");
        printf("3 canh khong tao thanh mot tam giac\n");
    }
    return 0;
}
