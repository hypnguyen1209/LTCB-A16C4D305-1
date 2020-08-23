#include <stdio.h>
#include <conio.h> 
int main() {
    int i, n, max, min, vtmax, vtmin;
    int a[50];
    printf("Nhap vao so n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nNhap vao phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }
    max = a[0];
    vtmax = 1;
    for (i = 1; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
            vtmax = i + 1; // lưu vị trí max
        }
    }
    printf("\nSo lon nhat trong mang la %d nam o vi tri thu %d", max, vtmax);
    min = a[0];
    vtmin = 1;
    for (i = 1; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
            vtmin = i + 1; // lưu vị trí min
        }
    }
    printf("\nSo nho nhat trong mang la %d nam o vi tri thu %d", min, vtmin);
    return 0;
}
