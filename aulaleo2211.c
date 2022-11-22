#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct {
	char nome[50];
	float n1;
	float n2;
	float n3;
	float media;
	
}t_aluno;

float media (float x, float y, float z) {
	float res = 0;
	res = (( x + y + z)/3);
	return res;
	
}

void aprovado (float x){
	if(x >= 6){
		printf("O aluno está aprovado!\n");
	}else {
		printf("O aluno está reprovado!\n");
	}
	return;
}

int main(int argc, char *argv[]) {
	int i;
	t_aluno turma[10];
	media(turma[i].n1, turma[i].n2, turma[i].n3);
	for(i = 0; i < 10; i++){
		printf("Informe o nome do aluno: ");
		scanf("%s",&turma[i].nome);
		printf("Informe a primeira nota do aluno: ");
		scanf("%f",&turma[i].n1);
		printf("Informe a segunda nota do aluno: ");
		scanf("%f",&turma[i].n2);
		printf("Informe a terceira nota do aluno: ");
		scanf("%f",&turma[i].n3);
		printf("Media do aluno aluno %s é : %f \n",turma[i].nome,media(turma[i].n1,turma[i].n2,turma[i].n3));
		aprovado(media(turma[i].n1,turma[i].n2,turma[i].n3));
		
	}
	
	
	return 0;
}