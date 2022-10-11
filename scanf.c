#include<stdio.h>
#include<conio.h>
void main() {
    char nama[20];
    char alamat[20];
    printf("Masukkan nama Anda : ");
    scanf("%s", &nama);
    printf("Masukkan alamat Anda :");
    scanf("%s", &alamat);
    printf("\n Nama:    %s", nama);
    printf("\n Alamat : %s", alamat);
    getch();
}
