#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 0;
	float notas1[3];
	float notas2[3];
	float notas3[3];
	float media[3];
//	printf("Digite uma nota: \n");
//	scanf("%f",&notas1[0]);
//	printf("Digite uma nota: \n");
//	scanf("%f",&notas1[1]);
//	printf("Digite uma nota: \n");
//	scanf("%f",&notas1[2]);
//	printf("Digite uma nota: \n");
//	scanf("%f",&notas2[0]);
//	printf("Digite uma nota: \n");
//	scanf("%f",&notas2[1]);
//	printf("Digite uma nota: \n");
//	scanf("%f",&notas2[2]);
//	printf("Digite uma nota: \n");
//	scanf("%f",&notas3[0]);
//	printf("Digite uma nota: \n");
//	scanf("%f",&notas3[1]);
//	printf("Digite uma nota: \n");
//	scanf("%f",&notas3[2]);

	for(i=0; i < 3; i++){
		printf("Digite a primeira nota: \n");
		scanf("%f",&notas1[i]);
		printf("Digite a segunda nota: \n");
		scanf("%f",&notas2[i]);
		printf("Digite a terceira nota: \n");
		scanf("%f",&notas3[i]);
		printf("Todas as notas 1 são: %d\n",notas1[i]);
		
	}
	
	media[0] = (notas1[0] + notas2[0] + notas3[0])/3; 
	media[1] = (notas1[1] + notas2[1] + notas3[1])/3;
	media[2] = (notas1[2] + notas2[2] + notas3[2])/3;  
	printf("O primeiro aluno ficou com a média: %f\n",media[0]);
	printf("O segundo aluno ficou com a média: %f\n",media[1]);
	printf("O terceiro aluno ficou com a média: %f\n",media[2]);
	
	
	
	
	return 0;
}