#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vet[10];
	int i = 0;
	
	for(i=0;i<10;i++){
		printf("Informe o valor para ser armazenado: \n");
		scanf("%d",&vet[i]);
	}
	
	
	
	for(i=0;i<10;i++){
		if(vet[i]%2==0){
		
			printf("%d\t",vet[i]);
		}
	}
	return 0;
	
	
}