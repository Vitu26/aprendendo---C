#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
//	int n1 = 0;
//	int n2 = 0;
//	char teste = 0;
//	printf("Informe o primeiro número: \n");
//	scanf("%d",&n1);
//	printf("Informe o segundo número: \n");
//	scanf("%d",&n2);
//	printf("Quer continuar? S - Sim ou N - Não");
//	scanf("%s",&teste);
//	switch(teste){
//		case 'S':
//			printf("Informe o primeiro número: \n");
//			scanf("%d",&n1);
//			printf("Informe o segundo número: \n");
//			scanf("%d",&n2);
//			printf("Quer continuar? S - Sim ou N - Não\n");
//			scanf("%c",&teste);
//			break;
//		case 's':
//			printf("Informe o primeiro número: \n");
//			scanf("%d",&n1);
//			printf("Informe o segundo número: \n");
//			scanf("%d",&n2);
//			printf("Quer continuar? S - Sim ou N - Não\n");
//			scanf("%c",&teste);
//		default:
//			printf("Finalizando o programa");
//	}

	int lado = 0;
	printf("Informe o tamho do lado do quadrado que vc quer que seja desenhado: \n");
	scanf("%d",&lado);
	
	
	int matriz[lado][lado], l, c;
		for(l=0;l<lado;l++){
			for(c=0;c<lado;l++){
			rintf("X");
		}
		printf("\n")
	}
	
	   printf("Tamanho do Quadrado? ");

   int lado; scanf("%d",&lado);

   int sqr[lado][lado], i, j;

       for (i=0;i<lado;i++){

           for(j=0;j<lado;j++){

               printf("X ");

           }

           printf("\n");

       }
		
	return 0;
}