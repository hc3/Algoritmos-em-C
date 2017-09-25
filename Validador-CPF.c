#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int validaCPF(char cpf[])
{
	int icpf[15];
    int mPdigito,sPdigito=0,diviP,pDigi; //V�riaveis usadas para valida��o do 1� digito
    int mSdigito,sSdigito=0,diviS,sDigi; //V�riaveis usadas para valida��o do 2� digito
    int p=10,s=11,i; //contadoras    

    for (i=0; i<strlen(cpf);i++)
    {
       if ((cpf[i]=='.') || (cpf[i]=='-'))
        {
           i++;
        }

        icpf[i]=cpf[i] - '0'; //converte char em int

        if (p>1)
        {
            mPdigito=icpf[i]*p; //multiplica��o de cada n�mero do cpf
            sPdigito+=mPdigito; //soma de todos os resultados do c�lculo acima
            p--;
        }
        if (s>1)
        {
            mSdigito=icpf[i]*s;
            sSdigito+=mSdigito;
            s--;
        }
    }
    
    diviP=sPdigito%11;
    pDigi=11-diviP;
    diviS=(sSdigito%11);
    sDigi=11-diviS;

    if (diviS<2)
    {
        pDigi=0;
    }
    if (diviP<2)
    {
        sDigi=0;
    }    

    if ((pDigi==icpf[12]) && (sDigi==icpf[13]))
    {
        return 0;
    } else
    {
        return 1;
    }
}

int main()
{
    setlocale(LC_ALL,"");
    char cpf[15];
	int valida;    

    printf("Entre com seu CPF (111.111.111-11): ");
    scanf("%s",cpf);    
    
	valida=validaCPF(cpf);
    
    if (valida==0)
    {
    	printf("CPF v�lido.\n\n");
	} else
	{
		printf("CPF inv�lido.\n\n");
	}
	    
    system("pause");
}