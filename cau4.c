#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    float x1, x2, x;
    printf("\n nhap vao 3 so a, b, c \n ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0) {
        printf("Phuong trinh %dx^2 + %dx + %d = 0 co 1 nghiem x: %f\n ", a, b, c, -c/(float)b);
    }
    else {
        d = b*b - 4*a*c;
        if (d < 0) {
            printf("Phuong trinh vo nghiem\n ");
        }
        else if (d == 0) {
            printf("Phuong trinh %dx2 + %dx + %d = 0 co nghiem kep: %f\n ", a, b, c, (float)-b/(2*a));
        } else {
            x1 = (-b - sqrt(d))/(2*a);
            x2 = (-b + sqrt(d))/(2*a);
            printf("Phuong trinh %dx2 + %dx + %d = 0 co 2 nghiem la x1 = %f, x2 = %f\n ", a, b, c, x1, x2);
        }
        return 0;
    }
}
