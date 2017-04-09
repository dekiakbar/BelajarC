#include <stdio.h>
#include <conio.h>
int main(){
int k,y,r,i;
    k,y,r=1;
    printf("Bilangan penjumlah harus > banyaknya penjumlahan!!!\n");
    printf("Masukan bilangan yang akan dijumlahkan : ");scanf("%d",&k);
    printf("Masukan bilangan awal penjumlah : ");scanf("%d",&r);
    printf("Masukan banyaknya penjumlahan : ");scanf("%d",&y);
    for(;r<=y;r++){
    i=r+k;
    printf("%d + %d = %d\n",r,k,i);}
    getch();
}
