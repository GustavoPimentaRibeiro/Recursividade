#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int n){
	
	if(n < 2){
		return 1;
	}else{
		return n * fatorial(n-1);
	}
	
}

main(){
	setlocale(LC_ALL, "portuguese");
	
	int n, fat;
	
	printf("\n Digite um número para fatorial: ");
	scanf("%d", &n);
	
	fat = fatorial(n);
	
	printf("\n\n Resultado: %d\n", fat);
	
}
