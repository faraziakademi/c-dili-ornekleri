#include <stdio.h>


int x=100;

int fonk()
{
	printf("3--%d\n",x);  //Global de�i�ken yazd�r�l�yor
	x=400;				  //Global de�i�ken de�i�tiriliyor
	printf("4--%d\n",x);  //Global de�i�ken yazd�r�l�yor
	
}
int main()
{
	int x=300;
	printf("1--%d\n",x);  //Yerel de�i�ken yazd�r�l�yor
	fonk();
	printf("2--%d\n",x);  //Yerel de�i�ken yazd�r�l�yor 
}
