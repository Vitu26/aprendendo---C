#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma(int x, int y){
	int res = 0;
	res = x + y;
	return res;
}
int sub(int x, int y){
	int res = 0;
	res = x - y;
	return res;
}
int mult(int x, int y){
	int res = 0;
	res = x * y;
	return res;
}
float divi(int x, float y){
	float res = 0;
	res = x / y;
	return res;
}
void par_impar(int x){
	if(x %2 == 0){
		printf("Par");
	}else{
		printf("Impar");
	}
	
}
int quadrado(int x){
	int res = 0;
	res = x * x;
	return res;
}
float media(float x, float y, float w){
	float res = 0;
	res = (x + y + w)/3;
	return res;
}

int main(int argc, char *argv[]) {
	
	int num1 = 0;
	int num2 = 0;
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	
	printf("Digite um numero: ");
	scanf("%d",&num1);
	printf("Digite outro numero: ");
	scanf("%d",&num2);
	
	//resultado = soma(num1, num2);
	
	printf("A soma e: %d\n",soma(num1,num2));//printf("A soma é: %d",soma(num1,num2));
	printf("A soma e: %d\n",sub(num1,num2));
	printf("A soma e: %d\n",mult(num1,num2));
	printf("A soma e: %f\n",divi(num1,num2));
	printf("O quadrado de %d e: %d\n",num1,quadrado(num1));
	
	par_impar(num1);
	printf("\n");
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	printf("Digite a terceira nota: ");
	scanf("%f",&nota3);
	
	printf("Media: %0.2f\n",media(nota1,nota2,nota3));
	
	
	return 0;
}