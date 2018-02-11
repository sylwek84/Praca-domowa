#include <stdio.h>

int nwd(int a,int b)
{
	int c;	
	while(b!=0)
 {	
	c=a%b;
 	a=b;
 	b=c;
 }	
	return a;
}

int main()
{
	int a,b;
	printf("Program do obliczania najwiekszego wspolnego dzielnika dwoch liczb\n");	
	printf("Podaj pierwsza liczbe: "); 
	scanf("%d", &a);
	printf("Podaj druga liczbe: "); 
	scanf("%d", &b);
	printf("NWD = %d\n",nwd(a,b));
	return 0;
}
