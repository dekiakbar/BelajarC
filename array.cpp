#include <stdio.h>
#include <conio.h>
int main() {
    int k[10],y;
    printf("memasukkan nilai :\n");
    for(y=0;y<10;y++)
    {printf("nilai angka : ");scanf("%d",&k[y]);}
    printf("\n");
    printf("membaca nilai :\n");
    for(y=0;y<10;y++)
    {printf("nilai angka : %d\n",k[y]);}
    getch();}    
