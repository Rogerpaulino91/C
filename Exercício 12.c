// Uma locadora de filmes tem a seguinte regra para aluguel de fitas. //
// As segundas, terças e quintas (2, 3 e 5): um desconto de 40% em cima do preço normal//
// As quartas, sextas, sábados e domingos (4, 6, 7 e 1): preço normal //
// Aluguel de fitas comuns: preço normal e aluguel de lançamentos: acréscimo de 15% em cima do preço normal // 

#include<stdio.h>
#include<math.h>
#include<string.h>

	int main()	
{
	float preconormal, descontopromo, precototal;
	char dia[15], categoria[15];
 
scanf("%f",&preconormal);
scanf("%s",dia);
scanf("%s",categoria);
 
if (strcmp(dia,"SEGUNDA") ==0 || strcmp(dia,"TERCA") ==0 || strcmp(dia,"QUINTA") == 0){
descontopromo = preconormal - (0.4 * preconormal) ;
}
 
else if (strcmp(dia,"QUARTA") == 0|| strcmp(dia,"SEXTA") == 0|| strcmp(dia,"SABADO") ==0|| strcmp(dia,"DOMINGO")==0){
descontopromo = 0;
}
 
if (strcmp(categoria,"LANCAMENTO") == 0){
preconormal = (preconormal * 0.15);	
}
 
else if (strcmp(categoria,"COMUM") == 0){
preconormal = preconormal;	
}
 
precototal = descontopromo + preconormal;
printf("PRECO FINAL = %.2f\n",precototal);
 
return 0;	
 
}