// Escreva um algoritmo para calcular o consumo médio de um automóvel (medido em Km/l) //
 // dado que são conhecidos a distância total percorrida e o volume de combustível consumido para percorrê-la (medido em litros).//

 #include<stdio.h>
 #include<math.h>

 int main()

{ 
	float distancia, volumelitros, media; 

	scanf("%f",&distancia);
	scanf("%f",&volumelitros);

	media = distancia / volumelitros;

	print ("O CONSUMO MEDIO = %.2fKM/L\n",media);
	
	return 0;

	}