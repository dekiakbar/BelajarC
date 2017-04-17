#include <stdio.h>
#include <string.h>
#include <conio.h>
int main () {
		float inputan, hasil;
		int pilihan;
		char satuan[10];
		
		printf("1. ton \n2. kwintal \n3. pon \n4. gram");
		
		printf("masukkan tujuan ? "); scanf("&i", &pilihan);
		printf("masukkan berat (kg) ? "); scanf("%f", &inputan);
		
		switch(pilihan){
			case 1 :
				hasil = inputan/1000; strcpy(satuan, "ton");break;
			case 2 :
				hasil = inputan/100; strcpy(satuan, "kwintal");break;
			case 3 :
				hasil = inputan*2; strcpy(satuan, "pon");break;
			case 4 :
				hasil = inputan*1000; strcpy(satuan, "gram");break;
			default :
				hasil = inputan; strcpy(satuan, "kg");break;
				
			printf("\n%.0f kg = &f %s \n", inputan, hasil, satuan);
				
		}
		getch();
}
