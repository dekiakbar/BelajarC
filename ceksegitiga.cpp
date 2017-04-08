#include <stdio.h>
#include <conio.h>
int main (){
    int k,y,n;
    printf("Masukan nilai sisi pertama = ");scanf("%d",&k);
    printf("Masukan nilai sisi kedua = ");scanf("%d",&y);
    printf("Masukan nilai sisi ketiga = ");scanf("%d",&n);
    if (k==y && y==n)
    printf("Segitiga sama sisi");
    else
    printf("Bukan Segitiga sama sisi");
    getch ();
}
