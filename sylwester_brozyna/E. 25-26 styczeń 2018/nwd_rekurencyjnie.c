#include <stdio.h>

int nwd(int a,int b)
{
	if(b==0){
		return a;
	}
	else{
    		return nwd(b,a%b);
	}
}

int main()
{
	int a,b;
	
	printf("\nNajwiekszy wspolny dzielnik dwoch liczb\n\n");
	printf("Podaj a = "); scanf("%d", &a);
	printf("Podaj b = "); scanf("%d", &b);
	printf("NWD = %d\n",nwd(a,b));
	
	return 0;
}
