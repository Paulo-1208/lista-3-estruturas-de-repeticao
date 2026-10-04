#include <stdio.h>

int main(){
	int c;
	int num;
	int maior;
	
	for(c = 1; c <= 10; c++){
		printf("Digite o %d numero:", c);
		scanf("%d", &num);
		
		if(c == 1){
			num = maior;
		}else if(num > maior){
			maior = num;
		}
	}
	printf("O maior número e: %d", maior);
	
	return 0;
}
