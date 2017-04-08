#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
    int k,r,nilai[30],no[10];
    float i,d;i=0;d=0;
    char y[2][13]={"LULUS","Tidak LULUS"},nama[30][30];
    printf("Masukan jumlah mahasiswa : ");scanf("%d",&k);
    for(r=0;r<k;r++)
      {printf("Masukan nama mahasiswa :");scanf("%s",&nama[r]);
       printf("Masukan nilai : ");scanf("%d",&nilai[r]);
       printf("Masukan NIS  :");scanf("%s",&no[r]);}
    printf("\nNo\t NIS\t\t Nama\t Nilai Ujian\t Keterangan\t");
    for(r=0;r<k;r++)
      {if (nilai[r]>70)
       {y[1][13];}
       else if (nilai[r]<=70)
       {y[2][13];}
       i=d;
       d=nilai[r]+i;
       printf("\n%d\t %d\t %s\t  %d\t\t   %s\t",r+1,no[r],nama[r],nilai[r],y);}
    printf("\n\nNilai Rata-Rata : %.2f",d/k);
    getch();}
