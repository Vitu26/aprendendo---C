#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void exibeF1(int nums[10]){
	int i;
	for(i=0;i<10;i++){
		printf("Valor: %d\n", nums[i]);
	}
}
int main(int argc, char *argv[]) {
	int numeros[10];
	int i;
	
	for(i=0;i<10;i++){
		numeros[i] = i;
	}
	
	exibeF1(numeros);
	
	return 0;
}