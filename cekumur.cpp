#include <stdio.h>
#include <conio.h>
int main(){
    int k,y,r,i,l,t,f;
    printf("Masukan tanggal hari ini = ");scanf("%d",&k);
    printf("Masukan bulan ini = ");scanf("%d",&y);
    printf("Masukan tahun ini = ");scanf("%d",&r);
    printf("Masukan tanggal lahir = ");scanf("%d",&i);
    printf("Masukan bulan lahir = ");scanf("%d",&l);
    printf("Masukan tahun lahir = ");scanf("%d",&t);
    if (k>=i && y>=l)
       {f=r-t;
       printf("Umur anda saat ini %d tahun",f);}
    else
        {f=r-(t+1);
        printf("Umur anda saat ini %d tahun",f);}
    getch ();
}
