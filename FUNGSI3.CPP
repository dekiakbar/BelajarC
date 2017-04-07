#include<stdio.h>
#include<conio.h>
void judul(), cetak ( int hasil);
int inputangka(), faktorial ( int N);
int main (){
	judul();
	int hasil = faktorial(inputangka());
	cetak (hasil);
	getch();
}

void cetak( int hasil){
	printf("%d\n", hasil);
	}
void judul() {
	printf("menghitung faktorial \n ");
	}
int inputangka(){
	int angka;
	printf("masukkan angka : \n");
	scanf("%d ", &angka);
	return angka;
	}

int faktorial (int N) {
	int hasil =1 ;
	for (int i=N; i>=1; i--)
		hasil =hasil*i;
		return hasil;


}
