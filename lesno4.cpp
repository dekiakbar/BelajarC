#include<stdio.h>
#include<conio.h>
int main () {
    int i=1,x,a;
    for(a=1;a<=8;a++){
    for(x=1;x<=i;x++)printf("*");
    if(a%2==0)i=i-1;else i=i+2;
    printf("\n");}
    getch();}
    
    
