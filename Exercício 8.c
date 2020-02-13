// Em uma padaria, o padeiro quer saber qual o custo de fabricação do pão francês de forma a saber por quanto terá que vender o pão// 
// tendo um lucro de 30%. Sabendo-se que a receita do pão leva farinha, água e fermento // 
// escreva um algoritmo que lê a quantidade de quilos de farinha, o valor do quilo de farinha, a quantidade de litros de água, o valor do litro de água //
// a quantidade de quilowatts de hora de luz, o valor do quilowatts hora e o percentual do imposto que o padeiro para pelo pão // 
// calcular e imprimir o preço de custo e de venda.//

#include<stdio.h>
#include<math.h>

int  main()

{ 
	float quilofarinha, v_quilofarinha, qnt_litroagua, v_litroagua, qnt_watshoraluz, v_qntwatshora, precocusto, precovenda, lucro, imposto;


	scanf("%f",quilofarinha);
	scanf("%f",v_quilofarinha);
	scanf("%f",qnt_litroagua);
	scanf("%f",v_litroagua);
	scanf("%f",qnt_watshoraluz);
	scanf("%f",v_qntwatshora);
	scanf("%f",imposto);

	precocusto = (quilofarinha * v_quilofarinha) + ( qnt_litroagua * v_litroagua) + ( qnt_watshoraluz 8 v_qntwatshora);
	precocusto = ( precocusto * (imposto/100)) + precocusto; 
	lucro = precocusto * 0.3;
	precovenda = (precocusto + lucro);
	// precovenda = ((imposto/100) * precovenda) + precovenda;


	printf("PRECO DE CUSTO = %.2f\n",precodecusto); 
	printf("PRECO DE VENDA =  %.2f\n",precovenda);
	

	return 0;
}