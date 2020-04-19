#include <stdio.h>

int main()
{

	int i[10], j, *iptr;

	for(j=0;j<10;j++)
		i[j]=j;


	iptr=i;		
printf("%d\n",iptr);
	for(j=0;j<10;j++)
			{
				printf("%d",*iptr);
				iptr++;
			}

	printf("\n");

	printf("1--- %d\n",*(iptr-1)); // pointer baþý göstermez

	printf("\n");
	
	iptr=i;

	for(j=0;j<10;j++)
		printf("%d",*(j+iptr));

	printf("\n");

	printf("2---%d",*iptr); //pointer baþý gösterir


}











