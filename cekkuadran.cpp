#include <stdio.h>
#include <conio.h>
int main (){
    int k,y;
        printf("Masukan koordinat X= ");scanf("%d",&k);
        printf("Masukan koorrdinat Y= ");scanf("%d",&y);
    if (k>0 && y>0)
       printf("koordinat %d , %d ada di kuadran 1",k,y);
    else if(k<0 && y>0)
       printf("koordinat %d , %d ada di kuadran 2",k,y);
    else if (k<0 && y<0)
       printf("koordinat %d , %d ada di kuadran 3",k,y);
    else 
       printf("koordinat %d , %d ada di kuadran 4",k,y);
    getch();
}
