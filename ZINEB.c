#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int nombre1,nombre2;
	char choix;
	
	printf ("DONNER LE PREMIER NOMBRE:");
	scanf("%d",&nombre1);
	getc(stdin);
	printf("DONNER L'OPERATEUR:'");
	scanf("%c",&choix);
	printf("DONNER LE DEUXIEM NOMBRE:");
	scanf("%d",&nombre2);
	switch(choix)
	{
		case'+' :
		    printf("%d + %d = %d\n,",nombre1,nombre2,nombre1 + nombre2);
		break;
		case'-':
			printf("%d - %d = %d\n ",nombre1,nombre2,nombre1 - nombre2);
		break;
		case'*' :
			printf("%d * %d = %d\n",nombre1,nombre2,nombre1 * nombre2);
		break;
		case'/':
			if(nombre2!=0)
			  printf("%d / %d = %.4f\n",nombre1,nombre2,(float) nombre1 / nombre2);
			else
			  printf("math error : Impossible de diveser par 0\n");
		break;
		default: printf("OPERATEUR INCONNUE\n");
			}
    return 0;
}
