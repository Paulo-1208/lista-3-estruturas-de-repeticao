#include <stdio.h>

int main(){
	int alunos; // quantidade de alunos
	int c; // contador de alunos
	float nota; 
	float soma = 0; // acumula os resultados calculados 
	float media;
	
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &alunos);
	
	for(c = 1; c <= alunos; c++){ // enquanto o contador for menor que a quantidade de alunos, o bloco será executado 
		printf("Digite a nota do aluno %d: ", c);
		scanf("%f", &nota);
		
		soma += nota; // calcula (soma + nota) e salva na variável "soma"
	}
	
	media = soma / alunos; 
	
	printf("A média das notas resulta em: %.2f", media);
	
	return 0;
}
