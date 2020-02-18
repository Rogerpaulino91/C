// Tendo como dados de entrada a altura e o sexo de uma pessoa //
// construir um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas //
//  Para Homens: (72.7 *h) – 58; Para Mulheres: (62.1 * h) – 44.7 // 

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
float altura, pesomasc, pesofem;
char sexo[10];
 
scanf("%f",&altura);
scanf("%s",sexo);
 
if (strcmp(sexo,"MASCULINO") == 0){
pesomasc = (72.7 * altura) - 58;
printf("PESO = %.2f\n",pesomasc);
}
 
else if (strcmp(sexo,"FEMININO") == 0) {
pesofem = (62.1 * altura) - 44.7;
printf("PESO = %.2f\n",pesofem);
}
 
return 0;	
 
}