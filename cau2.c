#include <stdio.h>
#include <conio.h> 
int main () {
    float a, b, GDP;
    int Nam;
    printf("Ban hay nhap vao GDP nam 2014: ");
    scanf("%f", &a);
    printf("Toc do tang truong kinh te binh quan hang nam la: ");
    scanf("%f", &b);
    GDP = a;
    Nam = 2014;
    printf("Nam\tGDP\n2014\t%f\n", GDP);
    while (GDP <= (2*a))
    {
        GDP = GDP + (GDP*b/100);
        Nam = Nam + 1;
        printf("%d\t%f\n", Nam, GDP);
    }
    return 0;
}
