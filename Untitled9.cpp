#include <stdio.h>
#include <conio.h>
int main(){
  int k,y,r,i,n;
    r=0;i=1;
    printf("masukan fibbonaci ke-n : ");scanf("%d",&y);
  for(k=1;k<=y;k++)
    {n=i;i=r;r=r+n;
    printf(" %d ",r);}
    printf("Angka fibbonaci ke-%d adalah %d",y,r);
    getch();}
