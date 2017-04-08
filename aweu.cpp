 #include <stdio.h>
#include <conio.h>
int main(){
    int i,x,y;
    printf("masukan jumlah bintang ");
    scanf("%d",&y);
     for(i=1;i<=y;i++){
     for(x=1;x<=i;x++){
     printf("*");
    }
    printf("\n");
    }
    getch();
}
