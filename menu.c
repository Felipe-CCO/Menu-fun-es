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
// Esse é o Menu que o usuario irá Visualizar quando executar o programa	
		printf ("\n==================== MENU ======================\n\n"
		"Escolha uma Opção\n"
		"Opção - 1. Para saber se o numero é PAR ou não. \n"
		"Opção - 2. Para calcular uma potência. \n"
		"Opção - 3. Para calcular uma raiz. \n"
		"Opção - 4. Para saber se o ano é bissexto. \n"
		"Opção - 5. Para calcular a média ponderada das 3 notas. \n"
		"Opção - 6. Para calcular a médias das notas e saber se são válidas. \n"
		"Opção - 7. Para calcular o fatorial de um numero.\n"
		"Opção - 8. Para verificar se um numero sendo primo ou não.\n"
		"Opção - 9. Para imprimir a sequencia de fibo até um numero.\n"
		"Opção - 10. Informe seu nome e sua matricula. \n\n"
		"         DIGITE 0 PARA SAIR \n"                 );
				
		printf("\nOpção:");
		scanf("%d",&opcao);
		
		switch(opcao)
		{
//Quando o usuario digitar o numero 0 fecha o programa	
			case 0:{
				printf("Saiu!\n\n");
				break;
			}
//Caso o usuario escolha a opção 1 esse programa executará
			case 1:{
				par();
				break;
			}
//Caso escolha a opção 2 esse executará
			case 2:{
				potencia();
				break;
			}
//Caso escolha a opção 3 esse executará
			case 3:{
				raiz();
				break;
			}
//Caso escolha a opção 4 esse executará
			case 4:{
				ano();
				break;
			}
//Caso escolha a opção 5 esse executará
			case 5:{
				media();
				break;
			}
//Caso escolha a opção 6 esse executará
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
//Caso escolha uma opção que não esteja entre 1 e 9, exibirá este mensagem
			default:
				printf("Opção Invalido!\n\n");
				break;	
		}
//Enquanto o usuário não digitar 0 para sair, o MENU continua sendo exibido
	}while (opcao != 0);
}

int par(){
	int num1;
//Entrada		
		printf("Digite um numero: ");
		scanf("%d", &num1);
//Processamento
		if(num1 % 2 == 0){
//Saída
			printf("%d é PAR\n", num1);
		}else{	
			printf("%d não é PAR\n", num1);
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
//Saída	
	printf ("Valor da potência: %.3f\n", resultado);
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
//Saída
	printf ("Resultado da Raiz: %.3e\n", resultado);
}
int ano(){
	int ano,bissexto;
//Entrada		
	printf("Digite um ano para saber se ele é bissexto: ");
	scanf ("%d", &ano);
//Processamneto	
	bissexto = ano%4;
//Saída	
	if (bissexto == 0){
		printf ("\nAno Bissexto\n");
	}else{
		printf ("\nNão é Bissexto\n");
	}
}
int media(){
	float n1, n2, n3, media;
//Entrada		
	printf ("Digite as 3 notas: \n");
	scanf ("%f %f %f",&n1, &n2, &n3);
//Processamento		
	media = (n1+n2+n3*2)/4;
//Saída		
	if(media >= 6){
		printf("Você passou com %0.2f de média\n", media);
	}else{
		printf("Voce foi reprovado com %0.2f de média", media);
	}
}
int medias(){
	float n1, n2,media;
//Entrada		
	printf ("Digite as 2 notas: ");
	scanf ("%f %f",&n1, &n2);
//Processamento
//Os printf serão as saídas	
	if ((n1 >= 0) && (n1 <= 10) && (n2 >= 0) && (n2 <= 10)){
		media = (n1 + n2)/ 2;
		printf ("É válida! E a média é %0.2f\n", media);
	}else{
		printf ("Não é válida\n");
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
//Processamento/Saída		
	printf ("Oi %s sua matricula em Hexadecimal é: %2X\n", nome, mtc);
}

