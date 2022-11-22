#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct {
	char nome[50];
	float valor_hora;
	int hora;
}t_funcionario;

float pagamento (float valorh, int qtdh){
	float sal;
	sal = valorh * qtdh;
	return sal;
}

void cargo ( float x) {
	if(x >= 500 && x <= 1500){
		printf("junior\n");
	} else if(x > 1500 && x <= 2500){
		printf("P.O\n");
	} else if (x > 2500 &&  x <= 3500){
		printf("Analista");
	} else if (x > 3500 &&  x <= 7000){
		printf("Senior\n");
	}else{
		printf("Estágiario ou CEO");
	}
	return;
}

int main(int argc, char *argv[]) {
	
	t_funcionario Empresa[50];
	int i;
	int count = 0;
	
	for(i = 0; i < 10; i++){
		printf("Informe o nome do funcionário: ");
		scanf("%s",&Empresa[i].nome);
		printf("Informe a quantidade de horas trabalhadas: ");
		scanf("%d",&Empresa[i].hora);
		printf("Informe o valor pago por hora: ");
		scanf("%f",&Empresa[i].valor_hora);
		Empresa[i].salario = pagamento(Empresa[i].hora,Empresa[i].valor_hora);
		cargo(pagamento(Empresa[i].valor_hora,Empresa[i].hora));
		printf("O funcionario %s recebe %f \n",Empresa[i].nome, Empresa[i].salario));
		
		
		if(pagamento(Empresa[i].valor_hora,Empresa[i].hora) >= 4500 && pagamento(Empresa[i].valor_hora,Empresa[i].hora) <= 5000){
			count++;
		}
		
	}
	
	printf("Na empresa tem  tem %d funcionários que recebem entre 4500 e 5000", count);
	
	return 0;
}