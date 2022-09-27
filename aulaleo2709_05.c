#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vet[5];
	int i = 0;
	
	for(i=0;i<=4;i++){
		printf("Informe um valor: \n");
		scanf("%d",&vet[i]);
	}
	
	for(i = 0;i <=4; i++){
		printf("%d\t",vet[i]);
	}
	for(i = 0;i <=4; i--){
		printf("%d\t",vet[i]);
	}
	return 0;
}