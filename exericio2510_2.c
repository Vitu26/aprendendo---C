#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
	int cpf;
	int idade;
	char nome[50];
	float altura;
}t_pessoa;
typedef struct banda{
	char nome[50];
	int integrantes;
	char estilo[50];
	int rank;
}t_banda;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
//	int count;
//	
//	t_pessoa galera[2];
//	
//	for(i=0;i<2;i++){
//		printf("Digite a idade: \n");
//		scanf("%d",&galera[i].idade);
//		printf("Digite o nome: \n");
//		scanf("%s",&galera[i].nome);
//		printf("Digite a altura: \n");
//		scanf("%f",&galera[i].altura);
//		printf("Digite o cpf: \n");
//		scanf("%d",&galera[i].cpf);
//	}
//	
//	for(i=0;i<2;i++){
//		printf("Nome: %s\n",galera[i].nome);
//		printf("Idade: %d\n",galera[i].idade);
//		printf("Altura: %0.2f\n",galera[i].altura);
//		printf("CPF: %d\n",galera[i].cpf);
//		
//		
//		if(galera[i].idade >= 15 && galera[i].idade <= 35){
//		count++;
//		
//		}
//	
//	}
//	printf("No total %d são tem idade entre 15 e 35 anos\n",count);

	t_banda bandas[5];
	for(i=0;i<5;i++){
		printf("Qual o nome da banda: \n");
		scanf("%s",bandas[i].nome);
		printf("Qual o estilo musical: \n");
		scanf("%s",bandas[i].estilo);
		printf("Quantos integrantes tem na banda: \n");
		scanf("%d",&bandas[i].integrantes);
		printf("Qual o rank da banda: \n");
		scanf("%d",&bandas.rank);
		
	}
	
	for(i=0;i<5;i++){
		if(bandas[i].rank == 1){
			printf("A banda %s é posição - %d \n",bandas[i].nome,bandas[i].rank);
		}
	}
	for(i=0;i<5;i++){
		if(bandas[i].rank == 2){
			printf("A banda %s é posição - %d \n",bandas[i].nome,bandas[i].rank);
		}
	}
	for(i=0;i<5;i++){
		if(bandas[i].rank == 3){
			printf("A banda %s é posição - %d \n",bandas[i].nome,bandas[i].rank);
		}
	}
	for(i=0;i<5;i++){
		if(bandas[i].rank == 4){
			printf("A banda %s é posição - %d \n",bandas[i].nome,bandas[i].rank);
		}
	}
	for(i=0;i<5;i++){
		if(bandas[i].rank == 5){
			printf("A banda %s é posição - %d \n",bandas[i].nome,bandas[i].rank);
		}
	}


 
	return 0;
}