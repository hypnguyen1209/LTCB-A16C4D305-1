#include <stdio.h>
#include <conio.h> 
int main() {
    int a, b, i = 2;
    do {
        printf("Hay nhap vao 2 so nguyen duong a,b\n");
        scanf("%d%d", &a, &b);
    } while (a <= 0 || b <= 0);
    while (a % b != 0) {
        a = a/(i - 1)*i;
        i++;
    }
    printf("BCNN cua 2 so la: %d", a);
    return 0;
}
