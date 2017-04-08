#include <stdio.h>
#include <conio.h>
int main () {
    int k,y,p,t;
    printf("Masukan bilangan pertama = ");scanf("%d",&k);
    printf("Masukan bilangan kedua = ");scanf("%d",&y);
    printf("Masukan bilangan Ketiga = ");scanf("%d",&p);
    t=k+y;
    if (t==p)
    printf("BISA!!!");
    else
    printf("Tidak Bisa!!!");
    getch ();
}
