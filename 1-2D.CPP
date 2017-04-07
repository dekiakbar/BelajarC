#include <stdio.h>
#include <conio.h>
int main ()
{
  int d=0, array [12]= {1,2,3,4,5,6,7,8,9,10,11,12}, a[2][6],b[3][4],c[6][2];
     for (int i=0;i<1;i++){
	for (int j=0;j<12;j++){
	   a[i][j]=array[d];
	   b[i][j]=array[d];
	   c[i][j]=array[d];
	   d++;}}
     printf ("\n[12] -> [2][6]...\n");
    for (int i=0;i<2;i++){
	for (int j=0;j<6;j++){
	printf("%d ", a[i][j]);}
  printf ("\n");}
  
  printf ("\n[12] -> [3][4]...\n");
  for (int i=0;i<3;i++){
	for (int j=0;j<4;j++){
	printf("%d ", b[i][j]);}
  printf ("\n");}
  
  printf ("\n[12] -> [6][2]...\n");
  for (int i=0;i<6;i++){
	for (int j=0;j<2;j++){
	printf("%d ", c[i][j]);}
  printf ("\n");}
  
  getch();}
