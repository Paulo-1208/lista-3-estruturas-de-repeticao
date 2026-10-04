#include <stdio.h>

int main(){
	int limite; //limite de contagem(valor que o usuário vai digitar)
	int soma = 0; //acumulador, que realizará a soma dos números(irá guardar os valores acumuados durante os loops)
	int c; //responsável por adicionar os valores até o número digitado (contador)
	
	printf("Digite um valor: "); // solicita o valor para o usuário
	scanf("%d", &limite);
	
	for(c = 1; c <= limite; c++){ // o contador começa em 1 / loop enquanto"c" for menor que "limitador" / "c++" o contador soma de 1 em 1
		soma += c; // 
	}
	
	printf("A soma dos valores ate %d resulta em: %d", limite, soma);
	return 0;
}
