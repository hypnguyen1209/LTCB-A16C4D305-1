#include <stdio.h>
#include <conio.h> 
int main() {
    int i, giaithua = 1, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        giaithua = giaithua*i;
    }
    printf("\nGiai thua cua %d la: %d", n, giaithua);
    return 0;
}
