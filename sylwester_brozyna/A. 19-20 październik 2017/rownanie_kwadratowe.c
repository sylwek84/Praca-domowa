#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,delta;
	
	puts("Kalkulator rownan kwadratowych ax^2 + bx + c = 0\n\nOpracowal: Sylwester Brozyna, WSPol I rok Informatyka\n\n");
	printf("Podaj wartosc argumentu a: "); scanf("%e", &a);
	printf("Podaj wartosc argumentu b: "); scanf("%e", &b);
	printf("Podaj wartosc argumentu c: "); scanf("%e", &c);
	
	delta=(b*b)-(4*a*c);
	
	if(a==0){puts("Podaj inne 'a', rozne od zera!");}
	else{	
		if(delta>0){printf("Sa dwa rozwiazania: x1= %.2f i x2= %.2f\n", (-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));}
		else if(delta==0){printf("Jest jedno rozwiazanie: x= %.2f\n", -b/(2*a));}
		else if(delta<0){printf("Brak rozwiazan.\n");}
	}
return 0;

}
