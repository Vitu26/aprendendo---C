#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int matriz [3][3];
//	matriz[0][0] = 300;
//	matriz[0][1] = 4;
//	matriz[0][2] = 12;
//	matriz[1][0] = 5;
//	matriz[1][1] = 10;
//	matriz[1][2] = 2;
//	matriz[2][0] = 3;
//	matriz[2][1] = 337;
//	matriz[2][2] = 5;

//	printf("%d - %d - %d\n",matriz[0][0],matriz[0][1],matriz[0][2]);
//	printf("%d - %d - %d\n",matriz[1][0],matriz[1][1],matriz[1][2]);
//	printf("%d - %d - %d\n",matriz[2][0],matriz[2][1],matriz[2][2]);
//	



//	int matriz[3][3];
//	int l,c = 0;
//	
//	for(l=0;l<3;l++){
//		for(c=0;c<3;c++){
//			printf("Informe os indices da matriz: \n");
//			scanf("%d",&matriz[l][c]);
//		}
//	}
//	for(l=0;l<3;l++){
//		for(c=0;c<3;c++){
//			printf("%d \t",matriz[l][c]);
//		}
//	}

	int l = 0;
	int c = 0;
	int soma = 0;
	int matriz[2][2];
	for(l=0;l<2;l++){
		for(c=0;c<2;c++){
			printf("Informe o valor de um indice: \n");
			scanf("%d",&matriz[l][c]);
		}
	}
	for(l=0;l<2;l++){
		for(c=0;c<2;c++){
			soma += matriz[l][c];
			printf("%d\n",matriz[l][c]);
		}
	}
	
	printf("A soma total das matrizes é: %d",soma);
	


	return 0;
}