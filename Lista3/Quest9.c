#include <stdio.h>

int main(){
	int senha = 1234;
	int c;
	int tentativas = 5;
	
	for(c = 1; c <= tentativas; c++){
		printf("Digite sua senha: ");
		scanf("%d", &senha);
		
		if(senha == 1234){
            printf("Acesso autorizado!");
            break;
        }else if(c == tentativas){
            printf("Atingiu o limite de tentativas!");
            break;
        }else{
            printf("Senha incorreta, tente novamente!\n");
        }
	}
	
	return 0;
}
