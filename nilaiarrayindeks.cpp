#include <stdio.h>
#include <string.h>
#include <conio.h>
main(){
    int k,r,nilai[15];
    char y,nama[15][10];
    printf("masukan jumlah mahasiswa : ");scanf("%d",&k);
    for(r=0;r<k;r++)
      {printf("masukan nama mahasiswa :");scanf("%s",&nama[r]);
       printf("masukan nilai : ");scanf("%d",&nilai[r]);}
    printf("\nNo\t Nama\t Nilai\t Indeks");
    for(r=0;r<k;r++)
       {if (nilai[r]>=81)
        {y='A';}
       else if (nilai[r]<=80 && nilai[r]>=61)
        {y='B';}
       else if (nilai[r]<=60 && nilai[r]>=41)
        {y='C';}
       else if (nilai[r]<=40 && nilai[r]>=21)
        {y='D';}
       else if (nilai[r]<=20 && nilai[r]>=0)
        {y='E';}
    printf("\n%d\t %s\t %d\t %c ",r+1,nama[r],nilai[r],y);}
    getch();}
