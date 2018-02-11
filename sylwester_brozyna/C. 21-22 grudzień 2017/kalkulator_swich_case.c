#include <stdio.h>
#include <stdlib.h>

double dodawanie(double a, double b)
{return a+b;}

double odejmowanie(double a, double b)
{return a-b;}

double mnozenie(double a, double b)
{return a*b;}

double dzielenie(double a, double b)
{return a/b;}

double kalkulator(double a, double b, char wybor)
{		
	switch (wybor){
		case '+':
			return dodawanie(a,b);
		case '-':
			return odejmowanie(a,b);
		case '*': 
			return mnozenie(a,b);
		case '/':
			return dzielenie(a,b);
		case 'q':
			exit(0);
		default:
			printf("Zly wybor! Powtorz\n");
			return 0;
			}
}

int main()
{
	double a,b;
	char wybor;
	printf("\nKALKULATOR.\nPomoge Ci przejsc przez matematyke :)\n");
	
	while(1){	
		printf("Podaj pierwsza liczbe: \n");
		scanf(" %lf",&a);
		printf("Podaj druga liczbe: \n");
		scanf(" %lf",&b);
		printf("Ktore dzialanie chcesz wykonac?\n '+' - dodawanie, '-' - odejmowanie, '*' = mnozenie, '/' - dzielenie, q - WYJSCIE!\n");
		scanf(" %c",&wybor);
		printf("\n\tWynik = %f\n", kalkulator(a,b,wybor));
		printf("--------------------------------------------------------------------------\n");
	}	
	
	return 0;
}

