#include <stdio.h>


int x=100;

int fonk()
{
	printf("3--%d\n",x);  //Global değişken yazdırılıyor
	x=400;				  //Global değişken değiştiriliyor
	printf("4--%d\n",x);  //Global değişken yazdırılıyor
	
}
int main()
{
	int x=300;
	printf("1--%d\n",x);  //Yerel değişken yazdırılıyor
	fonk();
	printf("2--%d\n",x);  //Yerel değişken yazdırılıyor 
}
