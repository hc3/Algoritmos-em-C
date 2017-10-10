#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void ordenacaoBolha(int num[], int x) //Bubble sort
{
	int i, j, troca;
	
	for (i=0;i<x;i++){
		for (j=i+1;j<x;j++)
		{
			if (num[i] > num[j])
			{
				troca=num[i]; //Guarda o valor de i que � maior que j para ser trocado
				num[i]=num[j]; //"num", na posi��o i, recebe o "num" da posi��o j
				num[j]=troca; //o n�mero guardado passado para a posi��o do num[j]									
			}
		}
		printf("%d ",num[i]);
	}	
}

int main()
{
	setlocale(LC_ALL,"");
	int i,num[50];
	int qntNumeros;
	
	printf("Quantos n�meros quer ordenar?\n");
	printf("> ");
	scanf("%d",&qntNumeros);
	printf("\n\n");
	
	srand(time(NULL));
	
	printf("N�meros desordenados > ");
	for (i=0;i<qntNumeros;i++)
	{
		num[i]=rand()%20;
		printf("%d ",num[i]);	
	}
	printf("\n\n");	
	printf("Ordenados > ");
	ordenacaoBolha(num,qntNumeros);	
		
}
