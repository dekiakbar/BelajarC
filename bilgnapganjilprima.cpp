#include <stdio.h>
using namespace std;
int batas,ganjil=0,genap=0,prima=0;
bool cek;
int main(int argc, char const *argv[])
{	
	printf("masukan bilangan mas = ");scanf("%d",&batas);
	if (batas < 2){
		prima =0;
	}if (batas >=2){
		prima=1;
	}
	
	for (int hit = 1; hit <= batas; hit++)
	{	
		for(int pmbgi=2;pmbgi < hit;pmbgi++){
			cek = true;
			if(hit%pmbgi == 0){
				cek = false;
				break;
			}
		}
		if(cek == true){
			prima++;
		}
		
		if (hit%2 == 0){
			genap++;
		}else if (hit%2 == 1){
			ganjil++;
		}
	}
	printf("jumlah ganjil: %d\n",ganjil);
	printf("jumlah prima: %d\n",prima);
	printf("jumlah genap : %d",genap);
	
	return 0;

	puts("enter = quit");
	getchar();
}
