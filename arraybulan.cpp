#include <stdio.h>
#include <conio.h>
int main (){
    int x,y;
    char bulan[12][100]= {"jan","feb","mar","apr","mei","jun","jul","agu","sep","okt","nop","des"};
    for(x=0;x<12;x++){
    for(y=0;y<3;y++)
    printf("%c ",bulan[x][y]);
    printf(" ");
}
 getch();
}
