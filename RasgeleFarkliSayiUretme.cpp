#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	
	int i;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		int sayi=1+rand()%6;  //Rasgele sayi �retme fonksiyonu a + rand()%c 
						   	 // a degeri kayd�rma miktar�, c degeri uretilecek say� araligi 
						   	 // program her al�st�g�nda farkli degerler uretilir
						   	 //srand(time(NULL)) fonksiyonu ile farkl� seed de�eri i�in uretilir  
		printf("%d\n",sayi);
		
				
	}
	
	return 0;
	
}

