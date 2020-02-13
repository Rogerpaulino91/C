// Um hotel com 42 apartamentos resolveu fazer promoções para os fins de semana fora da alta temporada // 
// isto é, nos meses de abril, maio, junho, agosto, setembro, outubro e novembro. A taxa da promoção é de 22% da diária normal// 
// A ocupação média do hotel sem promoção é de 40% // 
// a taxa de ocupação subindo para 70% escrever um algoritmo que lê a diária normal e calcula //
// O valor da diária no período da promoção. //
// O valor médio arrecadado sem a promoção, durante um mês (apenas finais de semana). //
// O valor médio arrecadado com a promoção, durante um mês (apenas finais de semana). //
// O lucro ou prejuízo mensal com a promoção. // 


#include<stdio.h>
#include<math.h>

int  main()

{ 
	float diariapromo, mediapromo, mediasempromo, diarianormal, lucroouprej; 

	scanf("%f",&diarianormal);

	diariapromo = 0.22 *diarianormal;
	mediasempromo = (42 * 0.4) * 8 * diarianormal; 
	mediapromo = (42*0.7) * 8 * diariapromo;
	lucroouprej = mediapromo - mediasempromo;

	printf("O VALOR DA DIARIA NO PERIODO DA PROMOCAO = %.2f\n",diariapromo); 
	printf("O VALOR MEDIO ARRECADADO SEM A PROMOCAO =  %.2f\n",mediasempromo);
	printf("O VALOR MEDIO ARRECADADO COM A PROMOCAO =  %.2f\n",mediapromo);
	printf("O LUCRO OU PREJUIZO = %.2f\n",lucroouprej);


	return 0;
}