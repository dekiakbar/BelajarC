#include <stdio.h>
#include <conio.h>
int main() {
    char k[6];
    printf("Masukan bentuk zat = ");scanf("%s",&k);
    if (k='cair' || k='padat')
    printf("Tidak beku");
    else if (k=='padat')
    printf("Beku");
    else
    printf("");
    getch();
    }
