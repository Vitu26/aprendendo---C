#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vet[5], idade,i,somai = 0;
	printf("Informe uma idade ou digite 0 pra sair do programa: \n");
	scanf("%d",&idade);
	if(idade !=0){
		for(i=0,i<=5;i++){
			somai = somai + vet[i];
		}
		printf("%d",somai);
		}else{
			printf("NÃO É UMA IDADE VÁLIDA");
	}
	return 0;
}