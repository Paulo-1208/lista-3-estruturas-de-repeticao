#include <stdio.h>

int main(){
	
	int num;
	int mult;
	
	printf("Digite um numero: "); //aqui solicito ao usuário que digite o valor correspodente à tabuada que ele deseja
	scanf("%d", &num);
	
	for(mult = 0; mult <= 10 ; mult++){ // "mult = 0"-> inicialização da variável / "mult <= 10"-> condição / "mult++"-> atualiza
		printf("%d x %d = %d\n", num, mult,num*mult); // ao invés de criar uma variável para a ultiplicação, realiza a mesma dentro do printf.
	}
	
	return 0;
}
