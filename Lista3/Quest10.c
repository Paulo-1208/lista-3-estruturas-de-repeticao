#include <stdio.h>

int main(){
	float saldo = 1000;
	float valor;
	int opcao = 0;
	
	printf("Seu saldo atual e R$: %.2f\n", saldo);
	
	while(opcao != 4){
		printf("\n=== Opcoes ===\n");
		printf("1 - Consultar saldo\n");
		printf("2 - Depositar\n");
		printf("3 - Sacar\n");
		printf("4 - Sair\n");
		
		printf("\nSelecione uma opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("Seu saldo atual e: %.2f\n", saldo);
				break;
			case 2:
				printf("Digite o valor do deposito R$: ");
				scanf("%f", &valor);
				
				saldo = saldo + valor;
				
				printf("Deposito realizado!\n");
				printf("Seu saldo agora e R$: %.2f\n", saldo);
			    break;
			case 3:
				printf("Digite o valor que deseja sacar R$: ");
				scanf("%f", &valor);
				if(valor <= saldo){
					saldo = saldo - valor;
					printf("Saque realizado com successo!\n");
					printf("Seu saldo agora e R$: %.2f\n", saldo);
				}else{
					printf("Valor invalido!");
				}
				break;
			case 4:
				printf("Obrigado por utilizar nosso sistema!");
				break;
				
		}
	}
	
	return 0;
}
