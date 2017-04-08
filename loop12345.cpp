#include <stdio.h>
#include <conio.h>
int main(){
    int k,y,z;
    printf("masukkan input : ");
    scanf("%d",&z);
    for (k=1;k<=z;k++){
        for (y=1;y<=k;y++){
    printf("* ");
    }
    printf("\n");
    }
    for (k=(z-1);k>=0;k--){
        for (y=1;y<=k;y++){
    printf("* ");
    }
    printf("\n");
    }
getch();
}
