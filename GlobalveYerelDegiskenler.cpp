#include <stdio.h>


int x=100;

int fonk()
{
	printf("3--%d\n",x);  //Global deðiþken yazdýrýlýyor
	x=400;				  //Global deðiþken deðiþtiriliyor
	printf("4--%d\n",x);  //Global deðiþken yazdýrýlýyor
	
}
int main()
{
	int x=300;
	printf("1--%d\n",x);  //Yerel deðiþken yazdýrýlýyor
	fonk();
	printf("2--%d\n",x);  //Yerel deðiþken yazdýrýlýyor 
}
