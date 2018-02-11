#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool czy_znak(char znak)
{
	if((znak>='a'&&znak<='z')||(znak>='A'&&znak<='Z'))
		return true;
	else
		return false;
}

void zliczanie(char* ciag, int* wykaz)
{
	int i=0;
	while(ciag[i])
	{
		if(czy_znak(ciag[i]));
		{
			if(ciag[i]>='a')
				wykaz[ciag[i]-'a']++;
			else
				wykaz[ciag[i]-'A']++;
		}
		i++;
	}
}

void wypisz(int* wykaz)
{
	int i;
	for(i=0;i<26;i++){
		printf("%c - %d \n",'a'+i, wykaz[i]);
	}
}

int main()
{
	char* ciag="Ala ma kota, a kot ma Ale.";
	int wykaz[26]={0};
	zliczanie(ciag, wykaz);
	wypisz(wykaz);

}