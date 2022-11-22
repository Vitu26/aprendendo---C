#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1,n2 = 0;
	char final = 0;
	printf("Informe qual operação quer efetuar? Digite '+' - para soma '-'- para subtração '*'- para multiplição '/'- para divisão\n");
	scanf("%s",&final);
	switch(final){
		case '+':
			printf("Informe o primeiro numero: \n");
			scanf("%d",&n1);
			printf("Informe o primeiro numero: \n");
			scanf("%d",&n2);
			final = n1 + n2;
			printf("A soma do %d e %d é igual a: %d\n",n1 ,n2 ,final);
			break;
		case '-':
			printf("Informe o primeiro numero: \n");
			scanf("%d",&n1);
			printf("Informe o primeiro numero: \n");
			scanf("%d",&n2);
			final = n1 - n2;
			printf("A subtração do %d e %d é igual a: %d\n",n1 ,n2 ,final);
			break;
		case '*':
			printf("Informe o primeiro numero: \n");
			scanf("%d",&n1);
			printf("Informe o primeiro numero: \n");
			scanf("%d",&n2);
			final = n1 * n2;
			printf("A multiplicação do %d e %d é igual a: %d\n",n1 ,n2 ,final);
			break;
		case '/':
			printf("Informe o primeiro numero: \n");
			scanf("%d",&n1);
			printf("Informe o primeiro numero: \n");
			scanf("%d",&n2);
			final = n1 / n2;
			printf("A divisão do %d e %d é igual a: %d\n",n1 ,n2 ,final);
			break;
			
	}
	
	return 0;
}