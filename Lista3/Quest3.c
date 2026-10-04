#include <stdio.h>

//int  main(){
//	int contador = 1;
//	
//	while(contador <= 100){
//		if(contador % 2  ==0){
//			printf("%d ", contador);
//		}
//	contador++;
//	}
//	
//	return  0;
//}

int main(){
	int num;
	
	for(num = 1; num <= 100; num++){
		if(num %2 == 0 ){
			printf("%d\n", num);
		}
	}
	return 0;
}
