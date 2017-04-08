#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

int j, i, b, pil, x, code;
FILE *pf;
struct
{   char nama[100][100];
    char nim[100][100];
    char notasi[100][100];
 int  nilai[100];
}   data;

char nama_file[1000];
main()
{
 do {
  printf("Masukkan Code : ");
  scanf("%d",&code);
  if(code!=2691) {printf("\tCode Salah...!\n");}
 }while(code!=2691);
 printf("\nDate & Time\t: %s (%s)\nFile\t\t: %s\n",__DATE__,__TIME__,__FILE__);
 printf("Save As\t\t: ");
 scanf("%s", &nama_file);
 printf("\nDATA NILAI MAHASISWA ELEKTRO");
    do {
     printf("\n\n===== MENU =====\n");
     printf("1. Masukkan Data\n2. Cetak Data\n4. Hapus Data\n0. Keluar\n");
     printf("Masukkan Pilihan : "); scanf("%i", &pil);
     switch (pil)
     {
         case 1:{
    x++;
             tulis();
             garis();
             break;
         }
         case 2:{
             tampil();
             break;
         }
         case 3:{
    pf=fopen(nama_file, "w");
    printf("\nData Terhapus...!");
    fprintf(pf,"Data File %s Telah Terhapus pada %s (%s)\n\n\n",nama_file,__DATE__,__TIME__);
          break;
         }
         case 0:{
             printf("\nProgram Selesai...!");
             break;
         }
        getch();
    }
    }
    while (pil!=0);
}

void tampil(){
    pf=fopen(nama_file, "r");
    char kar[1000];
    while(fgets(kar, 1000, pf)){
        printf("%s", kar);
    }
    fclose(pf);
}

void tulis(){
    printf("\nData Mahasiswa\n");
    printf("NIM            : "); scanf("%s", &data.nim[j]);
    printf("Nama Mahasiswa : "); scanf("%s", &data.nama[j]);
    printf("Nilai [0-100]  : "); scanf("%d", &data.nilai[j]);
    j++;
}

void garis(){
    pf=fopen(nama_file, "w");
    fprintf(pf,"Date & Time\t: %s (%s)\nFile\t\t: %s\n",__DATE__,__TIME__,__FILE__);
    fprintf(pf,"Save As\t\t: %s\n\n\n",nama_file);
    fputs("DATA NILAI MAHASISWA\n\n", pf);
 fputs("||================||============||========||\n", pf);
    fputs("||      NIM       ||    NILAI   ||PREDIKAT||\n", pf);
    fputs("||================||============||========||\n", pf);
    for(j=0;j<x;j++){
   if (data.nilai[j]>=0 && data.nilai[j]<=20) {fprintf(pf,"|| %s\t  || %d \t||   E    ||\n", data.nim[j], data.nilai[j]);}
 else if (data.nilai[j]>20 && data.nilai[j]<=40) {fprintf(pf,"|| %s\t  || %d \t||   D    ||\n", data.nim[j], data.nilai[j]);}
 else if (data.nilai[j]>40 && data.nilai[j]<=60) {fprintf(pf,"|| %s\t  || %d \t||   C    ||\n", data.nim[j], data.nilai[j]);}
 else if (data.nilai[j]>60 && data.nilai[j]<=80) {fprintf(pf,"|| %s\t  || %d \t||   B    ||\n", data.nim[j], data.nilai[j]);}
 else if (data.nilai[j]>80 && data.nilai[j]<=100){fprintf(pf,"|| %s\t  || %d \t||   A    ||\n", data.nim[j], data.nilai[j]);}
        }
    fclose(pf);
}
 
