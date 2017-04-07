#include<stdio.h>
#include<conio.h>
int main(){
    int array[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int a,b,x[2][6],y[4][3],z[6][2];b=0;
    for(int i=0;i<=5;i++){
    for(int j=0;j<=1;j++){
            b=i*2+j;
            x[i][j]=array[b];
            }}
    for(int i=0;i<=5;i++){
    for(int j=0;j<=1;j++){
    printf("%d ",x[i][j]);}
    printf("\n");}
//=============================================
printf("=======================================");
printf("\n");b=0;    
    for(int i=0;i<=2;i++){
    for(int j=0;j<=3;j++){
            b=i*4+j;
           y[i][j]=array[b];
            }}
    for(int i=0;i<=2;i++){
    for(int j=0;j<=3;j++){
    printf("%d ",y[i][j]);}
    printf("\n");}

//=============================================
printf("=======================================");
printf("\n");b=0; 
for(int i=0;i<=1;i++){
    for(int j=0;j<=5;j++){
            b=i*4+j;
            z[i][j]=array[b];
            b++;}}
    for(int i=0;i<=1;i++){
    for(int j=0;j<=5;j++){
    printf("%d ",z[i][j]);}
    printf("\n");}   
    
    
    getch();}
