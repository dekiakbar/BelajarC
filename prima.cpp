#include <stdio.h>
#include <conio.h>
int main (){
    int j,i,x,y,a;
    printf("Masukan angka awal : ");scanf("%d",&y);
    printf("Masukan angka akhir : ");scanf("%d",&x);
     for(i=y;i<=x;i++){
      if(i==2)
      {printf("%d",i);}
      else
      {for(j=2;j<i;j++){
       if(i%j==0)
       {a=0;}
       else
       {a=1;}}
       if(a==1)
       {printf("%d",i);}
       else
       {printf("");}}}
       getch;
       }
