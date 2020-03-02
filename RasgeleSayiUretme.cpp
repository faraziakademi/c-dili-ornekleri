#include <stdlib.h>
#include <stdio.h>

int main()
{
	
	int i;
	
	for(i=0;i<10;i++)
	{
		int sayi=1+rand()%6;  //Rasgele sayi üretme fonksiyonu a + rand()%c 
						   	 // a degeri kaydýrma miktarý, c deðeri üretilecek sayý araligi 
		printf("%d\n",sayi);
		
				
	}
	
	return 0;
	
}
