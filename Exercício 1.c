// O coração humano bate em média uma vez por segundo. //
// Desenvolver um algoritmo para calcular e escrever quantas vezes o coração de uma pessoa baterá se viver X anos. //

#include<studio.h>
#include<math.h>
#define batidaano 365.25
#define batidadia 24
#define batidahora 60
#define batidaminuto 60 

int main () 

{
		int idade; 
		float batotal; 
		scanf("%d",idade);
		battotal = batidaano * batidadia* batidahora * batidaminuto * idade;
		printf("O CORACAO BATEU %.2f VEZES\n",batidatotal);
		return 0;
		
}
