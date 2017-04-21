#include<stdio.h>
#include<conio.h>
int main(){
int x[3][3]={{1,3,5},{2,4,7},{9,10,11}};
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    printf("%d ",x[i][j]);}
    printf("\n");}
    printf("\n========\n");
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    printf(" %d ",x[j][i]);}
    printf("\n");}
    getch();}
