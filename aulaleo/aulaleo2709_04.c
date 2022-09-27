#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vt[10];
	int i, media,soma =0;
	for(i=0;i<10;i++){
		printf("Informe as idades dos participantes: \n");
		scanf("%d",&vt[i]);
		soma += vt[i];
	}
	media = soma/10;
	printf("A media de todas as idades é %d",media);
	return 0;
}