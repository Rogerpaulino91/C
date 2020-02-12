// Fazer um algoritmo executando as  conversões: //
// Ler uma temperatura em Fahrenheit e imprimir o equivalente em Celsius C=(5F-160)/9. //
// Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros (1 polegada = 25,4 mm). //

#include<stdio.h>
#include<math.h>
#define milimetro_pol 25.4

int main () 

{ 

	float celsius,fahrenheit,chuvapolegada,chuvamilimetro;

	scanf("%f",&fahrenheit);
	scanf("%f",&chuvapolegada;

	celsius=(5*fahrenheit - 160)/9;
	chuvamilimetro=chuvapolegada * milimetro_pol;

	printf("O VALOR EM CELSIUS = %.2f\n",chuvamilimetro);
	printf("A QUANTIDADE DE CHUVA E = %.2f\n",chuvamilimetro);
	return 0;


	}
