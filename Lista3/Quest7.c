#include <stdio.h>

int main(){
	int alunos = 10; // defino a quantidade de alunos 
	int c; // contador do for
	int aprovado = 0; // contador de aprovados
	int reprovado = 0; // contador de reprovados
	float percentual; // armazena o percentual de aprovação
	float nota; // armazena a nota de cada aluno
	
	// Repete o processo para cada um dos 10 alunos
	for(c = 1; c <= 10; c++){ 
		printf("Digite a nota do aluno %d: ", c);
		scanf("%f", &nota);
		
		if(nota >= 7){
			aprovado++; // aumenta a quantidade de aprovados em 1 (por isso começa em 0 na declaração)
		}else{
			reprovado++; // aumenta a quantidade de reprovados em 1
		}
	}
	
    percentual = (aprovado * 100)/ 10; //cálculo do percentual
    
    printf("\n====== RESULTADOS ======\n");
    printf("O percentual de aprovacao e: %.0f%% \n", percentual);
    printf("O numero de aprovados: %d \n", aprovado);
    printf("O numero de reprovados: %d \n", reprovado);
	
	return 0;
}
