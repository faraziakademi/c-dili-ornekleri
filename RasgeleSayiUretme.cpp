#include <stdlib.h>
#include <stdio.h>

int main()
{
	
	int i;
	
	for(i=0;i<10;i++)
	{
		int sayi=1+rand()%6;  //Rasgele sayi �retme fonksiyonu a + rand()%c 
						   	 // a degeri kayd�rma miktar�, c de�eri �retilecek say� araligi 
		printf("%d\n",sayi);
		
				
	}
	
	return 0;
	
}
