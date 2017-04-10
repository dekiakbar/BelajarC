#include <stdio.h>
#include <string.h>
#include <conio.h>
main(){
    int k,r,nilai[15];
    char nama[15][10];
    printf("masukan jumlah mahasiswa : ");scanf("%d",&k);
    for(r=0;r<k;r++)
      {printf("masukan nama mahasiswa :");scanf("%s",&nama[r]);
       printf("masukan nilai : ");scanf("%d",&nilai[r]);}
    printf("\nNo\t Nama\t Nilai\t");
    for(r=0;r<k;r++)
      {printf("\n%d\t %s\t %d ",r+1,nama[r],nilai[r]);}
    getch();}
    
    
    
