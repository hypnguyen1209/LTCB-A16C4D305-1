#include <stdio.h> 
int main() {
    float a[20][20], max, min;
    int i, j, m, n;
    printf("nhap kich thuoc ma tran:");
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf("nhap a[%d][%d]:", i, j);
            scanf("%f", &a[i][j]);
        }
    max = a[0][0];
    min = a[0][0];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    printf("phan tu lon nhat ma tran la:%f", max);
    printf("\nphan tu nho nhat ma tran la:%f", min);
    return 0;
}
