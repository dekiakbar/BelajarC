#include <stdio.h>
#include <conio.h>
int main(){
    int k,t,y,z;t=0;y=0;z=0;
    printf("Masukan Jumlah Jam Kerja= ");scanf("%d",&k);
    if(k>48)
    {k=k-48;t=48*15000;y=k*20000;z=t+y;}
    else if(k<=48)
    {z=k*15000;}
    printf("Jumlah Gaji Reguler Rp. %d ,-\n",t);
    printf("Jumlah Gaji Lembur Rp. %d  ,-\n",y);
    printf("Jumlah Gaji Seluruhnya Rp. %d ,-\n",z);
    getch();}
    
