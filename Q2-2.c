//S�ntese:
// Objetivo: Verificar se risada digital eh muito engra�ada ou nao
// Entrada: risada
// Saida: e ou nao engracada
#include<stdio.h>
#include<string.h>
#define MAX_TAM 60
int validaRisada(char risada[MAX_TAM]);
int ehEngracada(char risada[MAX_TAM]);
int main()
{
    char risada[MAX_TAM];

	// Entrada exigida
    scanf("%s", &risada);
    
    if(!validaRisada(risada))
    	printf("Valor invalido!");
    else
    {
	    // Saida exigida
	    system("CLS");
		if (ehEngracada(risada))
	    	printf("S");
		else
			printf("N");
	}
    return 0;
}

//=====================================SUBPROGRAMAS=============================

//Objetivo: Validar a risada
//Par�metros: risada
//Retorno: situacao da risada
int validaRisada(char risada[MAX_TAM])
{
	int aux, tamanho;
	tamanho = strlen(risada);
    if((tamanho == 0) || (tamanho >= MAX_TAM))
	    return 0;
	else{
		for (aux=0; aux < tamanho; aux++)
			switch(risada[aux]) {
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					return 1;
			}
		return 0;
	}
	    
}

//Objetivo: analise se risada eh muito engracada ou nao
//Par�metros: risada
//Retorno: analise da risada ser muito engracada
int ehEngracada(char risada[MAX_TAM])
{
    int outra, tamanho, aux = 0;
    tamanho = strlen(risada);
    if(tamanho == 1)  {
    	switch(risada[aux]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				return 1;
				break;
			default:
				return 0;
		}
	}
	else {
      for(aux=0; aux < tamanho-1; aux++)
      {
       	switch(risada[aux]) {
			case 'a':
				if(risada[aux+1] == 'a') 
					return 0;
			case 'e':
				if(risada[aux+1] == 'e') 
					return 0;
			case 'i':
				if(risada[aux+1] == 'i') 
					return 0;
			case 'o':
				if(risada[aux+1] == 'o') 
					return 0;
			case 'u':
				if(risada[aux+1] == 'u') 
					return 0;
		}
	 }
	 return 1;
	}
}
