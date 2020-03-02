#include <stdlib.h>
#include <stdio.h>

int main()
{
	
	int i;
	
	for(i=0;i<10;i++)
	{
		int sayi=1+rand()%6;  // Rasgele sayi uretme fonksiyonu a + rand()%c 
				     //  a degeri kaydirma miktari, c degeri uretilecek sayi araligi 
				    //   program her alıstıgında ayni degerler uretilir
		printf("%d\n",sayi);
		
				
	}
	
	return 0;
	
}
