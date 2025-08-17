#include<stdio.h>
 int main () {
 	
 	
 	float salario, valordahoraextra, salariototal,horasextras;
 	
 	
	printf("insira o valor do salario :");
 	scanf("%f", &salario);
 	
 	printf("insira o valor da hora extra:");
 	scanf("%f", &valordahoraextra);
 	
 	printf("insira a quantidade de horas extras trabalhadas:");
 	scanf("%f", &horasextras);
 	
 	salariototal= salario + valordahoraextra * horasextras;
 	
 	printf("o valor total a ser recebido pelo funcionario e: R$ %f\n", salariototal);
 	
	 return 0;
 }
 	
