// Desenvolver um algoritmo que determine o imposto de renda cobrado de um funcionário pelo governo.  // 
// O programa deverá ler o valor do salário mínimo, o n° de dependentes, o salário do funcionário e o taxa de imposto normal que já foi paga pelo funcionário // 
// E o Valor do imposto bruto // 

// 20% do salário do funcionário se o funcionário ganha mais de 12 salários mínimos // 
// 8% do salário do funcionário se o funcionário ganha mais de 5 salários mínimos e Quem ganha menos ou igual de 5 salários mínimos não é cobrado o imposto de renda.//
// Obs.: Sabe-se que o governo cobra 4% de taxa adicional sobre o IMPOSTO BRUTO //

#include<stdio.h> 
#include<math.h> 

int main() 

{ 
	int numerodependentes;
	float salariominimo, salariofunc, taxaimposto, taxaimpostosalario, impostorenda, impostobruto, impostoliquido, salariomaximo12, salariomaximo5, calcdependentes;

	scanf("%f",&salariominimo);
	scanf("%f",&numerodependentes);
	scanf("%f",&salariofunc);
	scanf("%f",&taxaimposto);

	salariomaximo12 = salariominimo * 12;
	salariomaximo5 = salariominimo * 5;
	calcdependentes = numerodependentes * 300.00;
	taxaimpostosalario = (taxaimposto / 100) * salariofunc;

	if ( salariofunc > salariomaximo12) { 
	impostobruto = 0.2 * salariofunc; 
	impostobruto = 0.04 * impostobruto + impostobruto; 	
	}

	else if (salariofunc > salariomaximo5){ 
	impostobruto = 0.08 * salariofunc;
	impostobruto = 0.04 * impostobruto + impostobruto;
	}

	else if (salariofunc <= salariomaximo5){
	impostobruto = 0;
	}

	impostoliquido = impostobruto - calcdependentes;
	impostorenda = impostoliquido - taxaimpostosalario;

	if (impostoderenda == 0){
	printf("IMPOSTO BRUTO = %.2f\n",impostobruto );
	printf("IMPOSTO LIQUIDO =%.2f\n",impostoliquido );
	printf("RESULTADO = %.2f\n",impostoderenda );
	printf("IMPOSTO QUITADO\n");
	
	}

	else if (impostoderenda < 0){
	printf("IMPOSTO BRUTO = %.2f\n",impostobruto);
	printf("IMPOSTO LIQUIDO = %.2f\n",impostoliquido);
	printf("RESULTADO = %.2f\n",impostoderenda);
	printf("IMPOSTO A RECEBER\n");
}
 
	else if (impostoderenda > 0){
	printf("IMPOSTO BRUTO = %.2f\n",impostobruto);
	printf("IMPOSTO LIQUIDO = %.2f\n",impostoliquido);
	printf("RESULTADO = %.2f\n",impostoderenda);
	printf("IMPOSTO A PAGAR\n");
	}
 
	return 0;
	}
	}