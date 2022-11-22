#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
	int x;
	int y;
} t_ponto;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	t_ponto meuPonto;
	struct ponto meuPonto2;
	
	meuPonto.x = 2;
	meuPonto2.y = 3;
	
	printf("O x é: %d\n",meuPonto.x);
	
	printf("Digite um valor para y: \n");
	scanf("%d",&meuPonto.y);
	printf("O y é: %d\n",meuPonto.y);
	return 0;
}