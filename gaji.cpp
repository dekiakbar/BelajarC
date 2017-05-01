#include <stdio.h>
#include <conio.h>
int main(){
    int k,y;
    printf("Masukan Jumlah Jam Kerja= ");scanf("%d",&k);
    if(k>48)
    {y=k*20000;}
    else if(k<=48)
    {y=k*15000;}
    printf("Jumlah Gaji Rp. %d ,-",y);
    getch();}
    
