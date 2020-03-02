#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//Kurallar:

//Iki zar atilir

//Zarlarin toplami hesaplanir

//Ilk atista 7 veya 11 gelirse oyuncu kazanır

//Ilk atista 2, 3 veya 12 gelirse oyuncu kaybeder

//Ilk atislarda kurallar olmazsa gelen her sayi oyuncunun puani oluyor.

// Oyuncu ilk atista kazanamazsa veya kaybetmezse puan durumuna bakılır 7 atista  max puanin %50'den  yuksek puan alan kazanir.

// Max. puan 84

int main()
{
	
	int i;
	int zar1,zar2;
	srand(time(NULL));
		int oyuncu=0;
	for(i=0;i<7;i++)
	{
		int zar1=1+rand()%6;  //Rasgele zar1 icin sayi üretme 
		int zar2=1+rand()%6;  ////Rasgele zar2 icin sayi üretme 
		int toplam=zar1+zar2;
	
	
	
	
		if((toplam==7 || toplam==11) && i==0)
		{
			printf("Toplam %d geldi kazandiniz  !!!\n",toplam);
			return 0;
						 
		}
		
		else if((toplam==2 ||  toplam==3 ||  toplam==12 ) && i==0)
		{
			printf("Toplam %d geldi kaybettiniz !!!\n",toplam);	
			return 0;
    	}
    	
		else
		{
			printf("Toplam %d geldi ",toplam);
			
			oyuncu=oyuncu+toplam;
			
			printf("Puaniniz %d\n",oyuncu);
			
		}
		
			 
						   	 
	}
	
		int yuzde=(oyuncu*100)/84;
		
			if(50<yuzde)
			{
				printf("Puaniniz max. puanin %%50 buyuktur kazandiniz !!! Yuzdeniz %d",yuzde);
			}
			
			else
			{
				printf("Puaniniz max. puanin %%50 kucuktur kaybettiniz!!! Yuzdeniz %d",yuzde);
			}
				
	
	return 0;
	
}

