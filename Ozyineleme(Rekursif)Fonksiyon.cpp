#include <stdlib.h>
#include <stdio.h>


int tumsayilar(int sayi)
{
	if(sayi==0)
	{
		return 1;
	}
	
	else
	{
		printf("%d\n",sayi);
		
	    return	tumsayilar(sayi-1);
		
	}
}


int main()
{
	
	int sayi;
	
	printf("Bir sayi giriniz: ");
	
	scanf("%d",&sayi);
	
	tumsayilar(sayi);
	
				
	
	return 0;
	
}

