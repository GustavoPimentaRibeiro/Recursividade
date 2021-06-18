#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibo(int n){
	
	if(n < 2){
		return n;
	}else{
		return fibo(n-1) + fibo(n-2);
	}
	
}
main(){
	setlocale(LC_ALL, "portuguese");
	
	int n, fibonacci;
	
	printf("Digite o número de iterações para fibonacci: ");
	scanf("%d", &n);
	
	fibonacci = fibo(n);
	
	printf("\n\n Resultado: %d", fibonacci);
	
}
