// // Escreva um algoritmo para calcular o consumo médio de um automóvel (medido em Km/l) //
 // o número de filhos com idade menor que 14 anos e o valor do salário família (pago por filho com menos de 14 anos).//
//Calcular o salário total deste funcionário e escrever o seu número e o seu salário total.

 
 #include<stdio.h>
#include<math.h>

int main()

{
	int numfunc,horas,numfilhos;
	float valorhora,valor familia,saldototal;

	scanf("%d",&numfunc);
	scanf("%d",&horas);
	scanf("%f",&valorhora);
	scanf("%f",&numfilhos);
	scanf("%f",&valorfamilia);

	saldototal = ( horas * valorhora ) + (numfilhos * valorfamilia);

	printf("NUMERO DO FUNCIONARIO = %d\n",numfunc);
	printf("SALARIO TOTAL = %.2f\n"saldototal);

	return 0;

}}