

// Projeto Arduino sinal de trânsito

int verde1 = 6; //pino 6 do arduino 
int amarelo1 =7; // pino 7 do arduino
int vermelho1 =8; 
int verde2 = 9;
int amarelo2 = 10;
int vermelho2 = 11;
int verde_pedestre = 12;
int vermelho_pedestre = 13;
int contador_pisca = 0; // contador de quantas vezes o sinal verde pisca antes de desligar 
int botao = 2; // apenas as portas 2 e 3 são passiveis de interrupções no arduino UNO
int count = 6; // contador de tempo para o sinal fechar e para o led
int contadorVolta = 0; // contador para voltar de onde parou na interrupçãao

int A = 0;
int B = 1;
int C = 4;
int D = 5;


void setup() 
{          
    
  
  pinMode(A, OUTPUT);   
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(verde1,OUTPUT); //comanda a informação de saida ou entrada do pino
  pinMode(amarelo1,OUTPUT);
  pinMode(vermelho1,OUTPUT);
  pinMode(verde2,OUTPUT);
  pinMode(amarelo2,OUTPUT);
  pinMode(vermelho2,OUTPUT);
  pinMode(verde_pedestre,OUTPUT);
  pinMode(vermelho_pedestre,OUTPUT);
  pinMode(botao, INPUT); // entrada para o botão
 
  
  attachInterrupt(digitalPinToInterrupt(botao), botaoAcionado, RISING);
  
  }




void loop() 
{
	controlaSemaforo();
}









void desligaDisplay()
{     
  digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH); 
}

void conversor() 
{
  
  
    if (count == 0) 
    { 
      
      digitalWrite(A, LOW);  
      digitalWrite(B, LOW); // coloca 0 na entrada B, que é a porta 1 do arduino
      digitalWrite(C, LOW); // coloca 0 na entrada C, que é a porta 2 do arduino
      digitalWrite(D, LOW); // coloca 0 na entrada D, que é a porta 3 do arduino
    }
     
    if (count == 1) 
    {
      digitalWrite(A, HIGH);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
    }
     
    if (count == 2) 
    {
      digitalWrite(A, LOW);
      digitalWrite(B, HIGH);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
    }
     
    if (count == 3) 
    {
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
    }
     
    if (count == 4) 
    {
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
    }
     
    if (count == 5) 
    {
      digitalWrite(A, HIGH);
      digitalWrite(B, LOW);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
    }
     
    if (count == 6) 
    {
      digitalWrite(A, LOW);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
    }
     
    if (count == 7) 
    {
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
    }
     
    if (count == 8) 
    {
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, HIGH);
    }
     
    if (count == 9) 
    {
      digitalWrite(A, HIGH);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, HIGH);
    }
	
}




void controlaSemaforo()
{	
   
	digitalWrite(vermelho_pedestre,HIGH);
  	digitalWrite(vermelho2,HIGH); // liga o led vermelho do segundo sinal
 	digitalWrite(verde1,HIGH); // liga o led verde do primeiro sinal
        
    
    while(count>=0){ // função para mostrar o tempo no display
          delay(1000);
          conversor();
        count --;
      contadorVolta++; // contador que aumenta pra poder voltar de onde parou antes da interrupção
        }
   desligaDisplay(); 
  count = 6; // contador para usar o display novamente
  
   	while (contador_pisca<3) // faz o led verde1 piscar antes de desligar
    {	  digitalWrite(verde1,LOW); // desliga o verde do primeiro sinal
          delay(500);
          digitalWrite(verde1,HIGH);
     	  delay(300);
     	  contador_pisca ++;
         
    }
  	contador_pisca = 0;
  	digitalWrite(verde1, LOW);
    digitalWrite(amarelo1,HIGH); // liga o amarelo do primeiro sinal
    delay(2000); // espera 2 seg
    digitalWrite(vermelho2,LOW); // desliga o vermelho do segundo sinal
    digitalWrite(amarelo1,LOW); // desliga o amarelo do primeiro sinal
    digitalWrite(vermelho1,HIGH); // liga o vermelho do primeiro sinal
    digitalWrite(verde2,HIGH); // liga o verde do primeiro sinal
    
   while(count>=0){
          delay(1000);
          conversor();
        count --;
     contadorVolta++;
        }
    
    desligaDisplay();

   count = 6;
    

    while (contador_pisca<3) // faz o led verde2 piscar antes de desligar
    {	  digitalWrite(verde2,LOW); // desliga o verde do primeiro sinal
          delay(500);
          digitalWrite(verde2,HIGH);
     	  delay(300);
     	  contador_pisca ++;         
    }
	contador_pisca = 0;
    
    
  	digitalWrite(verde2, LOW);
    digitalWrite(amarelo2,HIGH); // liga o amarelo do segundo sinal
    delay(2000); // espera 2 seg 
    digitalWrite(amarelo2,LOW); // desliga o amarelo do segundo sinal
  	digitalWrite(vermelho2,HIGH);
  	digitalWrite(vermelho_pedestre, LOW);
	digitalWrite(verde_pedestre,HIGH);
    
     while(count>=0){
          delay(1000);
          conversor();
        count --;
       contadorVolta++;
        }
    desligaDisplay();
  
   count = 6;
    
    
  	while (contador_pisca<3) // faz o led verde de pedestre piscar antes de desligar
    {	  digitalWrite(verde_pedestre,LOW); // desliga o verde de pedestres
     	  delay(500);
          digitalWrite(verde_pedestre,HIGH);
     	  delay(300);
     	  contador_pisca ++;         
    }
  	digitalWrite(verde_pedestre,LOW);
  	digitalWrite(vermelho1,LOW); // desliga o vermelho do primeiro sinal
  	digitalWrite(vermelho2,LOW); // desliga o vermelho do segundo sinal
}




void botaoAcionado() {
  
bool botaopressionado = LOW;
  
	 PORTD = B00000000; // faz com que as portas de 0 a 7 inciem no low
     PORTB = B00000000;	 // faz com que as portas de 8 a 13 inciem no low
  	desligaDisplay();
  	while (botaopressionado == LOW)
      {
       digitalWrite(amarelo1,HIGH);
       digitalWrite(amarelo2,HIGH);   
       delay(700);
       digitalWrite(amarelo1, LOW);
       digitalWrite(amarelo2, LOW);
       delay(300);
        botaopressionado = digitalRead(botao);
      }
 	
  if(contadorVolta >0 && contadorVolta<=6) //caso o contador esteja entre 0 e 6 foi porque o botao foi apertado nos primeiros sinais
  {	conversor();
    digitalWrite(verde1, HIGH);
   	digitalWrite(vermelho2, HIGH);
    digitalWrite(vermelho_pedestre, HIGH);
  }
  if(contadorVolta >6 && contadorVolta<=12)
  {	conversor();
    digitalWrite(verde2, HIGH);
   	digitalWrite(vermelho1, HIGH);
    digitalWrite(vermelho_pedestre, HIGH);
  }
  if(contadorVolta >12 && contadorVolta <=18)
  {	conversor();
    digitalWrite(verde_pedestre, HIGH);
   	digitalWrite(vermelho2, HIGH);
    digitalWrite(vermelho1, HIGH);
  }
}
    
