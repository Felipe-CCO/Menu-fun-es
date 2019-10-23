#include <stdio.h>
#include <locale.h>
#include <math.h>

int par();
int potencia();
int raiz();
int ano();
int media();
int medias();
int fatorial();
int primo();
int fibo();
int matricula();

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int opcao;
	do{
// Esse � o Menu que o usuario ir� Visualizar quando executar o programa	
		printf ("\n==================== MENU ======================\n\n"
		"Escolha uma Op��o\n"
		"Op��o - 1. Para saber se o numero � PAR ou n�o. \n"
		"Op��o - 2. Para calcular uma pot�ncia. \n"
		"Op��o - 3. Para calcular uma raiz. \n"
		"Op��o - 4. Para saber se o ano � bissexto. \n"
		"Op��o - 5. Para calcular a m�dia ponderada das 3 notas. \n"
		"Op��o - 6. Para calcular a m�dias das notas e saber se s�o v�lidas. \n"
		"Op��o - 7. Para calcular o fatorial de um numero.\n"
		"Op��o - 8. Para verificar se um numero sendo primo ou n�o.\n"
		"Op��o - 9. Para imprimir a sequencia de fibo at� um numero.\n"
		"Op��o - 10. Informe seu nome e sua matricula. \n\n"
		"         DIGITE 0 PARA SAIR \n"                 );
				
		printf("\nOp��o:");
		scanf("%d",&opcao);
		
		switch(opcao)
		{
//Quando o usuario digitar o numero 0 fecha o programa	
			case 0:{
				printf("Saiu!\n\n");
				break;
			}
//Caso o usuario escolha a op��o 1 esse programa executar�
			case 1:{
				par();
				break;
			}
//Caso escolha a op��o 2 esse executar�
			case 2:{
				potencia();
				break;
			}
//Caso escolha a op��o 3 esse executar�
			case 3:{
				raiz();
				break;
			}
//Caso escolha a op��o 4 esse executar�
			case 4:{
				ano();
				break;
			}
//Caso escolha a op��o 5 esse executar�
			case 5:{
				media();
				break;
			}
//Caso escolha a op��o 6 esse executar�
			case 6:{
				medias();
				break;
			}
			case 7:{
				fatorial();
				break;
				}
//verificar o numero sendo primo ou nao 
			case 8:{
				primo();
				break;
				}
//imprimir a sequencia de fibo ate um numero
			case 9:{
				fibo();
				break;
				}
//Imprimir o nome e matricula sendo a matricula em hexadecimal
			case 10:{
				matricula();
				break;
			}
//Caso escolha uma op��o que n�o esteja entre 1 e 9, exibir� este mensagem
			default:
				printf("Op��o Invalido!\n\n");
				break;	
		}
//Enquanto o usu�rio n�o digitar 0 para sair, o MENU continua sendo exibido
	}while (opcao != 0);
}

int par(){
	int num1;
//Entrada		
		printf("Digite um numero: ");
		scanf("%d", &num1);
//Processamento
		if(num1 % 2 == 0){
//Sa�da
			printf("%d � PAR\n", num1);
		}else{	
			printf("%d n�o � PAR\n", num1);
		}
}
int potencia(){
	float A, resultado;
	int B;
//Entrada		
	printf ("Digite um numero Flutuante: ");
	scanf ("%f", &A);
				
	printf ("\nDigite um numero Inteiro: ");
	scanf ("%d", &B);
//Processamento	
	resultado = pow (A, B);
//Sa�da	
	printf ("Valor da pot�ncia: %.3f\n", resultado);
}
int raiz(){
	float A, resultado;
	int B;
//Entrada		
	printf ("Digite um numero Flutuante: ");
	scanf ("%f", &A);
				
	printf ("Digite um numero Inteiro: ");
	scanf ("%d", &B);
//Processamento
	resultado = pow(A, 1./B);
//Sa�da
	printf ("Resultado da Raiz: %.3e\n", resultado);
}
int ano(){
	int ano,bissexto;
//Entrada		
	printf("Digite um ano para saber se ele � bissexto: ");
	scanf ("%d", &ano);
//Processamneto	
	bissexto = ano%4;
//Sa�da	
	if (bissexto == 0){
		printf ("\nAno Bissexto\n");
	}else{
		printf ("\nN�o � Bissexto\n");
	}
}
int media(){
	float n1, n2, n3, media;
//Entrada		
	printf ("Digite as 3 notas: \n");
	scanf ("%f %f %f",&n1, &n2, &n3);
//Processamento		
	media = (n1+n2+n3*2)/4;
//Sa�da		
	if(media >= 6){
		printf("Voc� passou com %0.2f de m�dia\n", media);
	}else{
		printf("Voce foi reprovado com %0.2f de m�dia", media);
	}
}
int medias(){
	float n1, n2,media;
//Entrada		
	printf ("Digite as 2 notas: ");
	scanf ("%f %f",&n1, &n2);
//Processamento
//Os printf ser�o as sa�das	
	if ((n1 >= 0) && (n1 <= 10) && (n2 >= 0) && (n2 <= 10)){
		media = (n1 + n2)/ 2;
		printf ("� v�lida! E a m�dia � %0.2f\n", media);
	}else{
		printf ("N�o � v�lida\n");
	}
}
int fatorial(){
	int numero;
	int fatorial = 1;
	int menos = 0;
	int i=0;
				
	printf("\n\nDigite um numero para calcular sua fatorial:  ");
	scanf("%d", &numero);
				
	int limite = numero;
				
	for( i=1; i < limite; i++){
		menos = i - 1;
		fatorial *= (numero - menos);
	}
	printf("\nA fracional do numero tem um valor de: %d\n\n", fatorial);
}
int primo(){
	int numero;
	int resultado;
	int i;
				
	printf("\n\nDigite um numero para verificar o mesmo sendo primo ou nao:  ");
	scanf("%d", &numero);
				
	for( i=1; i <= numero; i++){
					
		if(numero % i == 0){
			resultado++;
		}
	}
	if(resultado < 3){
		printf("\nNumero: %d\nResultado: primo\n\n", numero);
	}else{
		printf("\nNumero: %d\nResultado: nao primo\n\n", numero);
	}
}
int fibo(){
	int numero;
	int i;
	int fi1=1;
	int fi2=1;
	int soma;
				
	printf("\n\nDigite um numero para imprimir a sequencia de fibo ate ele: ");
	scanf("%d", &numero);
				
	for(i=1; i<=numero; i++){
		if(i == 1|| i == 2){
			printf("%d \n", fi1 );
		}else{
			soma=fi1+fi2;
			fi1=fi2;
			fi2=soma;
			printf("%d \n", soma);
		}
	}
	printf("\n\n");
}
int matricula(){
	char nome[61];
	int mtc;
//Entrada				
	printf ("Digite seu nome: ");
	scanf ("%s", &nome);
				
	printf ("Digite sua matricula: ");
	scanf ("%d", &mtc);
//Processamento/Sa�da		
	printf ("Oi %s sua matricula em Hexadecimal �: %2X\n", nome, mtc);
}

