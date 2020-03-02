#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	
	int i;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		int sayi=1+rand()%6;  //Rasgele sayi üretme fonksiyonu a + rand()%c 
						   	 // a degeri kaydýrma miktarý, c degeri uretilecek sayý araligi 
						   	 // program her alýstýgýnda farkli degerler uretilir
						   	 //srand(time(NULL)) fonksiyonu ile farklý seed deðeri için uretilir  
		printf("%d\n",sayi);
		
				
	}
	
	return 0;
	
}

