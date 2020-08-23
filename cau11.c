#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> 
typedef struct sinh_vien {
    char ho_ten[20];
    float diem_tb;

    struct sinh_vien *tiep;
} p_sv;
p_sv *p_dau, *p_cuoi, *p;
void tao_ds() {
    char ht[20], chon;
    int stt = 0;
    float x;
    printf("NHAP DANH SACH SINH VIEN\n");
    p_dau = NULL;
    do {
        fflush(stdin);
        printf("Nhap thong tin ve sinh vien thu %d: \n", ++stt);
        printf("Nhap ho va ten: ");
        gets(ht);
        printf("Nhap diem trung binh: ");
        scanf("%f", &x);
        p = (p_sv *)malloc(sizeof(p_sv));
        strcpy(p->ho_ten, ht);
        p->diem_tb = x;
        if (p_dau == NULL) {
            p_dau = p;
            p_cuoi = p;
        }
        else
        {
            p_cuoi->tiep = p;
            p_cuoi = p;
        }
        p->tiep = NULL;
        printf("Co nhap nua khong?");
        fflush(stdin);

        chon = getchar();
    } while (chon != 'k');
}
void in_ds()
{
    int stt = 0;
    printf("DANH SACH SINH VIEN\n");
    printf("STT\tHO_TEN\t\tDiem_trung_binh\n");
    p = p_dau;
    while (p != NULL)
    {
        printf("%d\t%s\t\t%6.2f\n", ++stt, p->ho_ten, p->diem_tb);
        p = p->tiep;
    }
    system("pause");
}
void chen_pt()
{
    p_sv *p_tim;
    float x;
    char ht[20];
    printf("Nhap ho va te: ");
    fflush(stdin);
    gets(ht);
    printf("Nhap diem trung binh: ");
    scanf("%f", &x);
    p = (p_sv *)malloc(sizeof(p_sv));
    strcpy(p->ho_ten, ht);
    p->diem_tb = x;
    p->tiep = NULL;
    printf("Muon chen sau sinh vien nao: ");
    fflush(stdin);
    gets(ht);
    p_tim = p_dau;
    while ((p_tim != NULL) && (strcmpi(p_tim->ho_ten, ht)))

        p_tim = p_tim->tiep;
    if (p_tim == NULL)
        printf("Khong tim thay vi tri can chen");
    else
    {
        if (p_tim->tiep == NULL)
            p_tim->tiep = p;
        else
        {
            p->tiep = p_tim->tiep;
            p_tim->tiep = p;
        }
        printf("Da chen xong");
    }
}
void xoa_pt()
{
    p_sv *p_tim, *p_truoc;
    char ht[20];
    printf("Nhap ho ten sinh vien can xoa: ");
    fflush(stdin);
    gets(ht);
    p_tim = p_dau;
    while ((p_tim != NULL) && (strcmpi(p_tim->ho_ten, ht)))
    {
        p_truoc = p_tim;
        p_tim = p_tim->tiep;
    }
    if (p_tim = NULL)
        printf("Khong tim thay vi tri can xoa");
    else
    {
        if (p_tim->tiep == NULL)
            p_truoc->tiep == NULL;

        else if (p_tim = p_dau)
            p_dau = p_tim->tiep;
        else
            p_truoc->tiep = p_tim->tiep;
        free(p_tim);
        printf("Da xoa xong");
    }
}
main()
{
    char chon;
    do
    {
        system("cls");
        printf("DANH SACH CHUC NANG CAN THUC HIEN\n");
        printf("1. Tao danh sach\n");
        printf("2. In danh sach\n");
        printf("3. Chen phan tu vao trong danh sach\n");
        printf("4. Xoa phan tu trong danh sach\n");
        printf("5. Thoat\n");
        printf("Moi chon chuc nang: ");
        chon = getchar();
        system("cls");
        switch (chon)
        {
        case '1':
            tao_ds();
            break;
        case '2':
            in_ds();
            break;
        case '3':
            chen_pt();
            break;
        case '4':
            xoa_pt();
            break;
        }
    } while (chon != '5');

    getch();
}
