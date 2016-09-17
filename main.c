//---------------------------------------------------------------------------------------------
//Programa exemplo da utilização de ponteiros
//
//Laboratório de Algoritmo II
//
//Érico Edú Corrêa, acadêmico do curso de Sistemas de Informação, da Faculdade Antonio Meneghetti
//Data: 02/09/2016
//---------------------------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	// criar um ponteiro para o bloco de memoria alocado
	char *memoria_alocada;
	// aloca a quantidade de memoria solicitada (50 x char)
	// e inicializando o ponteiro com a posicao da memoria 
	memoria_alocada = malloc (50 * sizeof (char));
	// se o ponteiro foi inicializado com o valor nulo
	if (memoria_alocada == NULL)
	{
		// exibe a mensagem de erro
		printf("Nao foi possivel alocar a memoria desejada!\n");
	}
	// se o ponteiro nao for nulo 
	else
	{
		// transfere a mensagem para a memoria alocada 
		strcpy (memoria_alocada, "Ser um futuro progamador de sucesso eh um sonho!\n");
	}
	// exibe o conteudo da memoria alocada
	printf("O conteudo da memoria alocada eh: %s\n", memoria_alocada);
	
	// libera a memoria alocada
	free (memoria_alocada);
	// return 0
	return 0;
}
