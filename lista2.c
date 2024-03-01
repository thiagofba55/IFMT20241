/*
EXERCÍCIOS DO CAPÍTULO 2
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//1. Faça um programa que leia dois valores numéricos inteiros e efetue a adição, 
//caso o resultado seja maior que 10, apresentá-lo.
void questao01() {
int a, b, c;

printf("Digite dois valores:\n");
scanf("%d""%d", &a, &b);

c=a+b;

if 
	(c>10)
printf("A soma é maior que 10\n");
if 
	(c<10)
printf("A soma é menor que 10\n");
}

//2. Faça um programa que leia dois valores inteiros e efetue a adição. 
//Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, 
//caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
void questao02() {
int a, b, c;

printf("Digite dois numeros:\n");
scanf("%d""%d", &a, &b);

c=a+b;

if (c>20)
printf("O valor é %d + 8 = %d ",c, c+8);

if (c<20)
printf("O valor é %d - 5 = %d ", c, c-5);
}

//3. Faça um programa que leia um número e imprima uma das duas mensagens: 
//"É múltiplo de 3"ou "Não é múltiplo de 3".
void questao03() {
int a;

printf("Insira um numero\n");
scanf("%d", &a);

if (a % 3 == 0)
	printf("O numero %d é divisivel por 3\n", a);
else
	printf("O numero %d não é divisivel por 3\n", a);

}

//4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.
void questao04() {

int a;

printf("Digite um numero:\n");
scanf("%d", &a);

if (a % 5 == 0)
	printf("O numero é divisivel por 5\n");
else
	printf("O numero não é divisivel por 5\n");
}

//5. Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.
void questao05() {

int a;

printf("Digite um numero:\n");
scanf("%d", &a);

if (a % 3 == 0 && a % 7 == 0)
	printf("O numero %d é divisivel por 3 e por 7\n", a);
else
	printf("O numero %d não é divisivel por 3 e por 7\n", a);
}

//6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
//estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
//bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
//valor da prestação e informar se o empréstimo pode ou não ser concedido.
void questao06() {

float sal, val, valp;

printf("Digite o valor do salário\n");
scanf("%f", &sal);
printf("Digite o valor de prestação desejado\n");
scanf("%f", &valp);

if (valp>sal*0.3)
printf("O emprestimo não podera ser concedido\n");

if (valp<=sal*0.3)
printf("O emprestimo podera ser concedido\n");
}

//7. Faça um programa que leia um número e indique se o número está compreendido
//entre 20 e 50 ou não.
void questao07() {

float a;

printf("Digite um numero:\n");
scanf("%f", &a);

if (a>=20 && a<=50)
	printf("O numero %.2f esta entre 20 e 50\n", a);
else
	printf("O numero %.2f não esta entre 20 e 50\n", a);
}

//8. Faça um programa que leia um número e imprima uma das mensagens: 
//"Maior do que 20", "Igual a 20"ou "Menor do que 20".
void questao08() {

float a;

printf("Digite um numero:\n");
scanf("%f", &a);

if (a>20)
	printf("O numero %f é maior que 20 \n", a);
if (a<20)
	printf("O numero %f é menor que 20 \n", a);
if (a==20)
	printf("O numero é igual a %f \n", a);
}

//9. Faça um programa que permita entrar com o ano de nascimento da pessoa e com o ano
//atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o
//ano de nascimento informado é válido.
void questao09() {

int ano1, ano2;

printf("Digite o ano seu ano de nascimento\n");
scanf("%d", &ano1);
printf("Digite o ano atual\n");
scanf("%d", &ano2);

if (ano1>ano2)
	printf("Impossivel\n");

if (ano1<=1900)
	printf("Voce é um vampiro??");

if (ano1>1900 && ano1<=ano2)
	printf("A sua idade atual é de %d anos\n", ano2-ano1);
}

//10. Faça um programa que leia três números inteiros e imprima os três em ordem
//crescente.
void questao10() {

int a, b, c;

printf("Digite 3 numeros:\n");
scanf("%d""%d""%d", &a, &b, &c);

if (a<=b && b<=c)
	printf("%d %d %d", a, b, c);
else if(a<=c && c<=b)
	printf("%d %d %d", a, c, b);
else if(b<=a && a<=c)
	printf("%d %d %d", b, a, c);
else if(b<=c && c<=a)
	printf("%d %d %d", b, c, a);
else if(c<=a && a<=b)
	printf("%d %d %d", c, a, b);
else if(c<=b && b<=a)
	printf("%d %d %d", c, b, a);

}

//11. Faça um programa que leia 3 números e imprima o maior deles.
void questao11() {

int a, b, c;

printf("Digite 3 numeros:\n");
scanf("%d""%d""%d", &a, &b, &c);

if (a>=b && a>=c)
	printf("%d é o maior numero", a);
else if (b>=a && b>=c)
	printf("%d é o maior numero", b);
else if (c>=b && c>=a)
	printf("%d é o maior numero", c);
	
}

//12. Faça um programa que leia a idade de uma pessoa e informe:
//• Se é maior de idade
//• Se é menor de idade
//• Se é maior de 65 anos
void questao12() {

int idade;

printf("Informe sua idade:\n");
scanf("%d", &idade);

if (idade<18)
printf("Menor de idade\n");
else if (idade>=18 && idade<=65)
printf("Maior de idade\n");
else if (idade>65)
printf("Maior de 65\n");
	
}

//13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
//prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, 
//a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou "em Prova Final"
//(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).
void questao13() {

float p1, p2, media;
char nome [40];

printf("Digite o nome do Aluno:\n");
scanf(" %40[^\n]", &nome);

printf("Insira a primeira nota:\n");
scanf("%f", &p1);

printf("Insira a segunda nota:\n");
scanf("%f", &p2);

media = (p1+p2)/2;

if (media<3)
	printf("Reprovado sem choro %s, nem falo sua nota ( %.2f )\n",nome, media);
else if (media>=3 && media <7)
	printf("Prova final %s, tirou %.2f\n",nome, media);
else if (media>=7)
	printf("Aprovaaado %s, com media %.2f vai curtir\n",nome, media);	
}

//14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
//desconto do INSS segundo a tabela seguir:
//Salário Faixa de Desconto
//Menor ou igual à R$600,00 Isento
//Maior que R$600,00 e menor ou igual a R$1200,00 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 25%
//Maior que R$2000,00 30%
void questao14() {

float salario, desconto;

printf("Digite seu salario:\n");
scanf("%f", &salario);

if (salario<=600)
	printf("Isento");
else if (salario>600 && salario<=1200)
	printf("Sera descontado R$ %.2f do seu salario", salario*0.2);
else if (salario>1200 && salario<=2000)
	printf("Sera descontado R$ %.2f do seu salario", salario*0.25);
else if (salario>2000)
	printf("Sera descontado R$ %.2f do seu salario", salario*0.3);
	
}

//15. Um comerciante comprou um produto e quer vendê-lo com umlucro de 45% se o valor
//da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa que 
//leia o valor do produto e imprima o valor da venda.
void questao15() {

float produto, lucro;

printf("Informe o valor da venda do produto:\n");
scanf("%f", &produto);

if (produto<20)
printf("O lucro sera de R$%.2f e o valor da venda sera R$%.2f", produto*0.45, (produto*0.45)+produto);
else 
printf("O lucro sera de R$%.2f e o valor da venda sera R$%.2f", produto*0.30, (produto*0.30)+produto);
	
}

//16. A confederação brasileira de natação irá promover eliminatórias para o próximo
//mundial. Faça um programa que receba a idade de um nadador e imprima a sua categoria segundo a 
//tabela a seguir:
//Categoria Idade
//Infantil A 5 - 7 anos
//Infantil B 8 - 10 anos
//Juvenil A 11 - 13 anos
//Juvenil B 14 - 17 anos
//Sênior maiores de 18 anos
void questao16() {

int idade;

printf("Insira a idade do atleta:\n");
scanf("%d", &idade);

if (idade<5)
	printf("Sem categoria\n");
else if (idade>=5 && idade<=7)
	printf("Categoria Infantil A\n");
else if (idade>=8 && idade<=10)
	printf("Categoria Infantil B\n");
else if (idade>=11 && idade<=13)
	printf("Categoria Juvenil A\n");
else if (idade>=14 && idade<=17)
	printf("Categoria Juvenil B\n");
else if (idade>=18)
	printf("Categoria Senior\n");

}

//17. Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram 
//a fazer pesquisas para descobrir um bom plano, não muito caro. 
//Um vendedor de um plano de saúde apresentou a tabela a seguir. 
//Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o 
//valor que ela deverá pagar.
//Idade Valor
//Até 10 anos R$30,00
//Acima de 10 até 29 anos R$60,00
//Acima de 29 até 45 anos R$120,00
//Acima de 45 até 59 anos R$150,00
//Acima de 59 até 65 anos R$250,00
//Maior que 65 anos R$400,00
void questao17() {

int idade, valor;
char nome [40];

printf("Digite o nome:\n");
scanf(" %40[^\n]", &nome);

printf("Digite a idade:\n");
scanf("%d", &idade);

if (idade<=10)
	printf("O valor cobrado do %s sera de R$%d ", nome, 30);

else if (idade>10 && idade<=29)
	printf("O valor cobrado do %s sera de R$%d ", nome, 60);

else if (idade>29 && idade<=45)
	printf("O valor cobrado do %s sera de R$%d ", nome, 120);

else if (idade>45 && idade<=59)
	printf("O valor cobrado do %s sera de R$%d ", nome, 150);

else if (idade>59 && idade<=65)
	printf("O valor cobrado do %s sera de R$ %d", nome, 250);

else if (idade>65)
	printf("O valor cobrado do %s sera de R$ %d", nome, 400);

}

//18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. 
//Caso o usuário digite umnúmero fora desse intervalo, deverá aparecer uma mensagem informando 
//que não existe mês com este número. Utilize o switch para este problema.
void questao18() {
	
int num;

printf("Digite um numero entre 1 e 12:\n\n");
scanf("%d", &num);

switch (num) {

case 1:
printf("\nJaneiro\n");
break;

case 2:
printf("\nFevereiro\n");
break;

case 3:
printf("\nMarço\n");
break;

case 4:
printf("\nAbril\n");
break;

case 5:
printf("\nMaio\n");
break;

case 6:
printf("\nJunho\n");
break;

case 7:
printf("\nJulho\n");
break;

case 8:
printf("\nAgosto\n");
break;

case 9:
printf("\nSetembro\n");
break;

case 10:
printf("\nOutubro\n");
break;

case 11:
printf("\nNovembro\n");
break;

case 12:
printf("\nDezembro\n");
break;

default:
	printf("\nOpção inválida!\n");

}

}

//19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado.
//Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um 
//programa que informe se uma equipe foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso 
//contrário, imprimir a mensagem "Equipe desclassificada".
void questao19() {
 float p1, p2, p3, media;
 char nome [10];

 printf("Digite o nome da equipe\n");
 scanf(" %10[^\n]", &nome);

 printf("Digite as pontuações dos jogadores:\n");
 scanf("%f""%f""%f", &p1, &p2, &p3);

 media=(p1+p2+p3)/3;

if (p1>=p2 && p1>=p3 && p2>=p3 && media>100)
printf("A equipe %s teve as seguintes pontuações %.2f %.2f %.2f e obteve uma media de %f pontos", nome,p1,p2,p3,media);
else if (p1>=p2 && p1>=p3 && p2>=p3 && media<100)
printf("A equipe %s teve as seguintes pontuações %.2f %.2f %.2f e foi desclassificada", nome,p1,p2,p3);
else if (p1>=p2 && p1>=p3 && p3>=p2 && media>100)
printf("A equipe %s teve as seguintes pontuações %.2f %.2f %.2f e obteve uma media de %f pontos", nome,p1,p3,p2,media);
else if (p1>=p2 && p1>=p3 && p3>=p2 && media>100)
printf("A equipe %s teve as seguintes pontuações %.2f %.2f %.2f e foi desclassificada", nome,p1,p3,p2);

else if (p2>=p1 && p2>=p3 && p1>=p3 && media>100)
printf("A equipe %s teve as seguintes pontuações %.2f %.2f %.2f e obteve uma media de %f pontos", nome,p2,p1,p3,media);
else if (p2>=p1 && p2>=p3 && p1>=p3 && media<100)
printf("A equipe %s teve as seguintes pontuações %.2f %.2f %.2f e foi desclassificada", nome,p2,p1,p3);
else if (p2>=p1 && p2>=p3 && p3>=p1 && media>100)
printf("A equipe %s teve as seguintes pontuações %.2f %.2f %.2f e obteve uma media de %f pontos", nome,p2,p3,p1,media);
else if (p2>=p1 && p2>=p3 && p3>=p1 && media<100)
printf("A equipe %s teve as seguintes pontuações %.2f %.2f %.2f e foi desclassificada", nome,p2,p3,p1);

else if (p3>=p1 && p3>=p2 && p1>=p2 && media>100)
printf("A equipe %s teve as seguintes pontuações %.2f %.2f %.2f e obteve uma media de %f pontos", nome,p3,p1,p2,media);
else if (p3>=p1 && p3>=p2 && p1>=p2 && media<100)
printf("A equipe %s teve as seguintes pontuações %.2f %.2f %.2f e foi desclassificada", nome,p3,p1,p2);
else if (p3>=p1 && p3>=p2 && p2>=p1 && media>100)
printf("A equipe %s teve as seguintes pontuações %.2f %.2f %.2f e obteve uma media de %f pontos", nome,p3,p2,p1,media);
else if (p3>=p1 && p3>=p2 && p2>=p1 && media<100)
printf("A equipe %s teve as seguintes pontuações %.2f %.2f %.2f e foi desclassificada", nome,p3,p2,p1);

}
//20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o 
//saldomédio no último ano. Faça um programa que leia o saldo médio de um cliente e calcule o valor 
//do crédito de acordo com a tabela a seguir. O programa deve imprimir uma mensagem informando o 
//saldo médio e o valor de crédito.
//Saldo Médio Percentual
//de 0 a 500 nenhum crédito
//de 501 a 1000 30% do valor do saldo médio
//de 1001 a 3000 40% do valor do saldo médio
//acima de 3001 50% do valor do saldo médio
void questao20() {

float saldo, valor;

printf("Digite seu saldo médio\n");
scanf("%f", &saldo);

if (saldo<=500)
printf("Com saldo de R$%.2f não havera credito\n", saldo);
else if(saldo>=501 && saldo<=1000)	
printf("Com saldo de R$%.2f havera um credito de R$%.2f\n", saldo, (saldo*0.3));
else if(saldo>=1001 && saldo<=3000)	
printf("Com saldo de R$%.2f havera um credito de R$%.2f\n", saldo, (saldo*0.4));
else if(saldo>=3001)	
printf("Com saldo de R$%.2f havera um credito de R$%.2f\n", saldo, (saldo*0.5));
}

//21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será 
//emprestado, o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado 
//a seguir. Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.
//• Nome do livro:
//• Tipo de usuário:
//• Total de dias:
void questao21() {

int usuario;
char nome [50];

printf("Digite o nome do Livro\n");
scanf(" %50[^\n]", &nome);

printf("Usuario, digite 1 pra professor e 2 para aluno\n");
scanf("%d", &usuario);

switch (usuario){

case 1:
	printf("Entregue o livro %s em 10 dias\n", nome);
	break;
case 2:
	printf("Entregue o livro %s em 3 dias\n", nome);
	break;
default:
	printf("\nOpçao Invalida\n");
}


}

//22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo 
//estimado de combustível, sabendo-se que umcarro tipo A faz 12 kmcom umlitro de gasolina, um tipo 
//B faz 9 kme o tipo C, 8 kmpor litro.
void questao22() {

int tipo;
float km;

printf("Digite a quilometragem\n");
scanf("%f", &km);
printf("Escolha seu tipo de carro\n");
printf("1-Carro A; 2-Carro B; 3-Carro C\n");
scanf("%d", &tipo);

switch (tipo){

case 1:
	printf("Voce rodara %.2f km e o consumo sera de %.2fl\n", km, km/12);
	break;
case 2:
	printf("Voce rodara %.2f km e o consumo sera de %.2fl\n", km, km/9);
	break;
case 3:
	printf("Voce rodara %.2f km e o consumo sera de %.2fl\n", km, km/8);
	break;
default:
	printf("\nInvalido\n");
}
}

//23. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da 
//escolha do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.
//Prato Sobremesa Bebida
//Vegetariano 180cal Abacaxi 75cal Chá 20cal
//Peixe 230cal Sorvete diet 110cal Suco de laranja 70cal
//Frango 250cal Mousse diet 170cal Suco de melão 100cal
//Carne 350cal Mousse chocolate 200cal Refrigerante diet 65cal
void questao23() {
int prat,sobrem, beb;
float op1, op2, op3, cal;

printf("Escolha a opçao de prato\n");
printf("1-Vegetariano;2-Peixe;3-Frango;4-Carne\n");
scanf("%d", &prat);

switch (prat){
case 1:
	op1=180;
	break;
case 2:
	op1=230;
	break;
case 3:
	op1=250;
	break;
case 4:
	op1=350;
	break;
default:
	printf("\nInvalido\n");

}
printf("escolha a opção de sobremesa\n");
printf("1-Abacaxi;2-Sorvete diet;3-Mousse diet;4-Mousse chocolate\n");
scanf("%d", &sobrem);

switch (sobrem){
case 1:
	op2=75;
	break;
case 2:
	op2=110;
	break;
case 3:
	op2=170;
	break;
case 4:
	op2=200;
	break;
default:
	printf("\nInvalido\n");
}
printf("Escolha a opçao de Bebida\n");
printf("1-Chá;2-Suco de Laranja;3-Suco de melão;4-Refrigerante diet\n");
scanf("%d", &beb);

switch (beb){
case 1:
	op3=20;
	break;
case 2:
	op3=70;
	break;
case 3:
	op3=100;
	break;
case 4:
	op3=65;
	break;
default:
	printf("\nInvalido\n");

}
cal=(op1+op2+op3);

printf("O total de calorias corresponde a %.2f cal", cal);

}

//24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dos 
//motoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é 
//determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da 
//placa do carro, informe omês em que o emplacamento deve ser renovado.
void questao24() {

char placa [7];

printf("Informe o numero da placa:\n");
scanf("%s", &placa);

switch (placa[6]) {

case '1':
	printf("A placa %s devera ser renovada no mes de Janeiro\n", placa);
	break;
case '2':
	printf("A placa %s devera ser renovada no mes de Fevereiro\n", placa);
	break;
case '3':
	printf("A placa %s devera ser renovada no mes de Março\n", placa);
	break;
case '4':
	printf("A placa %s devera ser renovada no mes de Abril\n", placa);
	break;
case '5':
	printf("A placa %s devera ser renovada no mes de Maio\n", placa);
	break;
case '6':
	printf("A placa %s devera ser renovada no mes de Junho\n", placa);
	break;
case '7':
	printf("A placa %s devera ser renovada no mes de Julho\n", placa);
	break;
case '8':
	printf("A placa %s devera ser renovada no mes de Agosto\n", placa);
	break;
case '9':
	printf("A placa %s devera ser renovada no mes de Setembro\n", placa);
	break;
case '0':
	printf("A placa %s devera ser renovada no mes de Outubro\n", placa);
	break;
default:
	printf("\nInvalido\n");

}
 
}

//25. A prefeitura contratou uma firma especializada para manter os níveis de poluição considerados 
//ideais para umpaís do 1º mundo. As indústrias, maiores responsáveis pela poluição, foram 
//classificadas em três grupos. Sabendo-se que a escala utilizada varia de 0,05 e que o índice de 
//poluição aceitável é até 0,25, fazer um programa que possa imprimir intimações de acordo com o 
//índice e a tabela a seguir:
//Índice Indústrias que receberão intimação
//0,3 1º gurpo
//0,4 1º e 2º grupos
//0,5 1º, 2º e 3º grupos
void questao25() {

float indice;

printf("Digite o indice de poluição\n(VALORES ENTRE 0 E 1);\n");
scanf("%f", &indice);

if (indice<0.05)
	printf("Incalculavel");
else if (indice>=0.05 && indice<=0.25)
	printf("indice de poluição aceitavel");
else if (indice>=0.3 && indice<0.4)
	printf("o 1º grupo sera intimado");
else if (indice>=0.4 && indice<0.5)
	printf("o 1º e o 2° grupo serao intimados");
else if (indice>=0.5)
	printf("o 1º, o 2° e o 3° grupo serao intimados");
	
}

int main() {
	const char menu[1000] = "\n================================\n            PROGRAMAS\n================================\n[1]  - Adição\n[2]  - Adição 2\n[3]  - Múltiplo\n[4]  - Múltiplo 2\n[5]  - Múltiplo 3\n[6]  - Crédito\n[7]  - Intervalo\n[8]  - Menor/Maior\n[9]  - Idade\n[10] - Crescente\n[11] - Maior\n[12] - Idade 2\n[13] - Situação Aluno\n[14] - INSS\n[15] - Valor de Venda\n[16] - Natação\n[17] - Plano de Saúde\n[18] - Mês do Ano\n[19] - Arco e Flecha\n[20] - Crédito Especial\n[21] - Biblioteca\n[22] - Consumo Combustível\n[23] - Calorias\n[24] - Emplacamento\n[25] - Intimação\n================================\n";
	printf("%s",menu);
	int opcao;
	printf("Digite a questão a ser executada: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1:
			questao01();
			break;
		case 2:
			questao02();
			break;
		case 3:
			questao03();
			break;			
		case 4:
			questao04();
			break;
		case 5:
			questao05();
			break;
		case 6:
			questao06();
			break;
		case 7:
			questao07();
			break;			
		case 8:
			questao08();
			break;
		case 9:
			questao09();
			break;
		case 10:
			questao10();
			break;
		case 11:
			questao11();
			break;			
		case 12:
			questao12();
			break;
		case 13:
			questao13();
			break;
		case 14:
			questao14();
			break;
		case 15:
			questao15();
			break;			
		case 16:
			questao16();
			break;
		case 17:
			questao17();
			break;
		case 18:
			questao18();
			break;
		case 19:
			questao19();
			break;			
		case 20:
			questao20();
			break;
		case 21:
			questao21();
			break;
		case 22:
			questao22();
			break;
		case 23:
			questao23();
			break;			
		case 24:
			questao24();
			break;
		case 25:
			questao25();
			break;
		default:
			printf("Opção inválida!");
	}
	
	return EXIT_SUCCESS;
}
