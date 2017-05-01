#include <stdio.h>
#include <conio.h>
int main (){
    int x,y;
    char bulan[5][3][15]= {
         {"anton","ucil","dono"},
         {"jono","joni","juna"},
         {"ncek","begal","restu"},
         {"arul","gilank","asep"},
         {"ocol","epul","woow"}
         };
    for(x=0;x<5;x++){
    printf("nama-nama kelompok ke-%d :\n ",x+1);
    for(y=0;y<3;y++)printf(" \t%s\n",bulan[x][y]);
    printf(" ");
}
 getch();
}
