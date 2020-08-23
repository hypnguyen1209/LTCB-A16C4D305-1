#include <stdio.h>
#include <math.h>
#include <conio.h>
int main() {
    int a[50], i, j, n, m;
    printf("Hay nhap so phan tu: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nNhap a[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("Day so ban dau la: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nDay so da sap xep la: ");
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    for (j = 0; j < n; j++)
        printf("%d ", a[j]);
    return 0;
}
