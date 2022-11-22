#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
	char nome[50];
	int matricula;
	char disciplina[50];
	float nota1;
	float nota2;
	
}t_aluno;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	float media = 0;
	float media_p = 0;
	
	
	t_aluno galera[2];
	
	
	
	for(i=0;i<2;i++){
		printf("Digite a matricula: \n");
		scanf("%d",&galera[i].matricula);
		printf("Digite o nome: \n");
		scanf("%s",&galera[i].nome);
		printf("Codigo de disciplina: \n");
		scanf("%s",&galera[i].disciplina);
		printf("Digite a primeira nota: \n");
		scanf("%f",&galera[i].nota1);
		printf("Digite a segunda nota: \n");
		scanf("%f",&galera[i].nota2);
	}
	
	for(i=0;i<2;i++){
		media = (galera[i].nota1 + galera[i].nota2)/2;
		media_p = (galera[i].nota1 + (2 * galera[i].nota2))/2;
		printf("Nome: %s\n",galera[i].nome);
		printf("Matricula: %d\n",galera[i].matricula);
		printf("Codigo de disciplina: %s\n",galera[i].disciplina);
		printf("Media-final: %0.2f\n",media);
		printf("Media-ponderada: %0.2f\n",media_p);
		
		
	}

 
	return 0;
}
