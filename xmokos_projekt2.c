#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct zapis
{
	struct zapis *dalsi;
	char kategoria[50];
	char znacka[50];
	char predajca[100];
	int cena;
	int rok_vyroby;
	char stav_vozidla[200];
} ZAPIS;


int n(ZAPIS **pole, FILE **f)
{

}


void v(ZAPIS )


int main()
{
	char c;
	int pocet_zaznamov = 0;
	FILE *f = 0;
	ZAPIS *pole = 0;

	while (1)
	{
		scanf("%c", &c);
		if (c == 'n')
			//pocet_zaznamov = n(&pole, &f);
		else if (c == 'v')
			//v(pole, pocet_zaznamov);
		else if (c == 'p')
			//p(pole, pocet_zaznamov);
		else if (c == 'z')
			//a(pole, pocet_zaznamov);
		else if (c == 'h')
			//h(pole, pocet_zaznamov);
		else if (c == 'a')
			//pocet_zaznamov = a(&pole, f, pocet_zaznamov);
		else if (c == 'k')
		{
			//k(f, pole);
			//return 0;
		}
	}



	return 0;
}


