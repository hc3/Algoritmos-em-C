#include<stdio.h>
#include<string.h>

int main(void)
{
	float salario,bonus,ttl;
	char casado[100], filho[100];

	printf("Qual seu sal�rio?\n");
	scanf("%g",&salario);
	printf("Voc� � casado? (sim ou n�o)\n");
	scanf("%s",casado);
	printf("Tem filhos? (sim ou n�o)\n");
	scanf("%s",filho);
	printf("\n");


	if (strcmp (casado,"sim") == 0 && strcmp(filho,"sim")==0)
	{
	    bonus = salario*20/100;
	    ttl = salario+bonus;

        printf("Sal�rio R$""%g",salario);
		printf("\n");
		printf("Seu sal�rio receber� um b�nus de 20%. R$""%g",bonus);
		printf("\n");
		printf("Ficar� R$""%g",ttl);
		printf("\n");

	} else if (strcmp (casado,"sim") == 0 && strcmp(filho,"nao")==0)
	{
	    bonus = salario*15/100;
	    ttl = salario+bonus;

        printf("Sal�rio R$""%g",salario);
		printf("\n");
		printf("Seu sal�rio receber� um b�nus de 15%. R$""%g",bonus);
		printf("\n");
		printf("Ficar� R$""%g",ttl);
		printf("\n");
	} else
	{
	    printf("Voce n�o receber� b�nus.");
	    printf("\n");
	}
return 0;
}
