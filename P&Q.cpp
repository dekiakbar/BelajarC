#include <stdio.h>
#include <conio.h>
int main(){
    int k,y,r,i,n,z,t;
    y=1;r=1;
    printf("  P   Q   P or Q   P and Q  Not P  P xor Q  ");
    printf("----------------------------------------------");
    for(k=1;k<=4;k++){
    i=y||r;n=y&&r;z=y!=r;
     printf("  %d   %d   %d   %d   %d   %d",y,r,n,z);}
     
getch();
}
