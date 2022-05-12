//Para exercitar ponteiros elabore um programa que contenha as instruções a seguir: 

//a) Defina um ponteiro do tipo inteiro. 
//b) Faça alocação dinâmica para o ponteiro recém-criado. 
//c) Preencha a memória com o valor 42. 
//d) Imprima o endereço do ponteiro na memória e o valor contido nele. 


//Escreva no campo de resposta o que se pede acima em linguagem C. 

#include <stdio.h>
#include <stdlib.h>

main () {
	//definindo o tipo de ponteiro como inteiro
	printf("############################\n\n");
	int *xp;   
	printf ("Endereco: %p\n\n", xp);
	// fazendo alocação dinamica de memoria
	xp = (int *) malloc(sizeof (int));
	// Preenchendo a memória com o valor 42 e imprimindo o ponteiro na memória contido nele
	printf ("Endereco %p \nValor: %d\n\n", xp, *xp);
	*xp = 54;
	printf("Endereco: %p \nValor: %d\n\n", xp, *xp);
	printf("############################\n\n");
	printf("Confesso que e um grande desafio \n\n ...porem nao iremos desistir!\n\n");
	
	system("Pause");
	return(0);

}
