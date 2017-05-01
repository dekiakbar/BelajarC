#include <stdio.h>
#include <string.h>
#include <conio.h>
main(){
    int k,r,nilai[30];
    float i,d;i=0;d=0;
    char y,nama[30][10];
    printf("Masukan jumlah mahasiswa : ");scanf("%d",&k);
    for(r=0;r<k;r++)
      {printf("Masukan nama mahasiswa :");scanf("%s",&nama[r]);
       printf("Masukan nilai : ");scanf("%d",&nilai[r]);}
    printf("\nNo\t Nama\t Nilai\t Indeks\t");
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
       i=d;
       d=nilai[r]+i;
       printf("\n%d\t %s\t  %d\t   %c\t",r+1,nama[r],nilai[r],y);}
    printf("\n\nNilai Rata-Rata : %.2f",d/k);
    getch();}
