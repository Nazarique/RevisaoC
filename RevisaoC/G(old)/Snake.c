#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<process.h>
unsigned long _beginthread (void (*)(void *), unsigned, void *);
int main(void);
int pontos=0;
void recorde(){
system("color F0");
char jogador[20],jogadores[20],cha,printar;//cha l� uma letra digitada
int i,j;
FILE *ponteiro;
ponteiro=fopen("recorde.txt","a+");
getch();
system("cls");//Limpa a tela.
printf("Digite seu Nome\n");
scanf(" %s" ,&jogador);//O nome vai ser dividido em letras para um vetor.
for(j=0;jogador[j]!='\0';j++){
jogadores[0]=jogador[0];//Pega a primeira letra do vetor, transforma em mai�scula e faz uma c�pia.
if(jogador[j-1]==' '){//Caso o usu�rio digite um espa�o o vetor retira uma casa.
jogadores[j]=jogador[j];
jogadores[j-1]=jogador[j-1];
}
else
jogadores[j]=jogador[j];
}
jogadores[j]='\0';
fprintf(ponteiro,"Nome do Jogador---> %s\n", jogadores);//Salva o nome do jogador.
fprintf(ponteiro,"Pontuacao---> %d\n",pontos);
time_t mytime;
mytime = time(NULL);
fprintf(ponteiro,"Data da Jogatina---> %s", ctime(&mytime));//Pega a data da jogatina do usu�rio.
for(i=0;i<=30;i++)
fprintf(ponteiro,"%c",4);
fprintf(ponteiro,"\n");
fclose(ponteiro);
printf("Digite 'h' para ver os recordes\n");
cha=getch();
system("cls");//Limpa a tela.
if(cha=='h'){
ponteiro=fopen("recorde.txt","r");
do{
putchar(printar=getc(ponteiro));
}
while(printar!=-1);
}
fclose(ponteiro);
while(!kbhit()){
}
}
int sair(){
system("cls");//Limpa a tela.
printf("Encerrando o jogo. Obrigado por Jogar!");
Sleep(3000);
system("cls");//Limpa a tela.
printf("Jogo criado por: \n\nTheodor Wulff Poloni \nHenrique Nazario \nJoao Pedro de Melo Silva\n\n");
while(!kbhit()){
}
exit(0);
}
int errou(){
system("cls");//Limpa a tela.
printf("Opcao invalida, digite uma opcao valida.\nVoce perdeu suas vidas e pontos e o jogo foi reiniciado.\n");
Sleep(2000);
pontos=0;
system("cls");//Limpa a tela.
for(;;){
main();
}
}
void gotocoordenadas(int x,int y){
COORD p = {(short)x,(short)y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}
int morreu(){
printf("Voce perdeu todas as suas vidas.\n");
Sleep(2000);
system("cls");//Limpa a tela.
}
int divs(float a, float b){ //M�sica engloba as fun��es divs e musiquinha.
int c = a/b;
return c;
}
void musiquinha(void *nada){
int n = 1;
while(n <= 2){
Beep(293,250);
Beep(293,250);
Beep(220,250);
Beep(220,250);
Beep(293,250);
Beep(293,250);
Beep(330,250);
Beep(330,250);
Beep(349,250);
Beep(349,250);
Beep(330,250);
Beep(330,250);
Beep(293,250);
Beep(293,250);
Beep(330,250);
Beep(293,250);
Beep(262,250);
Beep(262,250);
Beep(196,250);
Beep(196,250);
Beep(262,250);
Beep(262,250);
Beep(293,250);
Beep(293,250);
Beep(330,250);
Beep(330,250);
Beep(293,250);
Beep(293,250);
Beep(262,250);
Beep(262,250);
Beep(330,250);
Beep(262,250);
n++;
}
Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(220 , 1.33),250);
Beep(divs(220 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(349 , 1.33),250);
Beep(divs(349 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(262 , 1.33),250);
Beep(divs(262 , 1.33),250);
Beep(divs(196 , 1.33),250);
Beep(divs(196 , 1.33),250);
Beep(divs(262 , 1.33),250);
Beep(divs(262 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(262 , 1.33),250);
Beep(divs(262 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(262 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(220 , 1.33),250);
Beep(divs(220 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(349 , 1.33),250);
Beep(divs(349 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(175,250);
Beep(175,250);
Beep(131,250);
Beep(131,250);
Beep(175,250);
Beep(175,250);
Beep(196,250);
Beep(196,250);
Beep(220,250);
Beep(220,250);
Beep(196,250);
Beep(196,250);
Beep(175,250);
Beep(175,250);
Beep(220,500);
Beep(175,500);
}
int jogo(){
_beginthread(musiquinha, 0, NULL );//Toca a m�sica
int x, g, dificuldade, d = 2, coordenadax[300] = {1,2}, coordenaday[300] = {7,7}, t = 1, comidax, comiday, multiplicador;
/** A vari�vel x ir� mexer com o espa�o do jogo.
As vari�veis coordenadax e coordenaday armazenam os valores das coordenadas do ponto no jogo.
As variaveis comidax e comiday armazenam os valores das coordenadas onde a comida ir� aparecer
**/
char tecla = 'a';
//system("MODE con cols=50 lines=20"); //Esse comando faz a tela ter o tamanho das paredes. Para ignor�-lo e deixar a tela maior, � s� transformar essa linha num coment�rio.
system("cls");//Limpa a tela.
printf("Bem-vindo ao jogo Snake!\nAperte uma tecla para iniciar o jogo!\n");
while(!kbhit())//espera o usu�rio apertar algo.
{
}
system("cls");//Limpa a tela.
printf("Escolha a dificuldade!\n\n1 - Noob\n2 - Facil\n3 - Medio\n4 - Dificil\n5 - Inferno\n6 - Campos de Arroz\n7 - Eu nem sei um nome pra isso\n0 - Sair do Jogo\n");
scanf("%d", &dificuldade);
switch(dificuldade){
case 1://Para cada dificuldade,
g=300;//a fun��o ter� um valor na fun��o Sleep, mudando a velocidade.
multiplicador=1;//Tamb�m ser� alterada a quantidade de pontos ganhos por dificuldade, logo voc� ganha mais jogando em dificuldades maiores.
printf("\nEssa 'dificuldade' tem graca?");//Mensagem informativa para o usu�rio antes de iniciar o jogo.
Sleep(2000);//Pausa de 2 segundos para o usu�rio ler a mensagem informativa.
system("cls");//Ent�o, a limpar� a tela,
break;
case 2:
g=250;
multiplicador=2;
printf("\nAinda esta muito devagar, pega algo mais rapido...");
Sleep(2000);
system("cls");//Limpa a tela.
break;
case 3:
g=150;
multiplicador=3;
printf("\nEsta ficando interessante...");
Sleep(2000);
system("cls");//Limpa a tela.
break;
case 4:
g=75;
multiplicador=4;
printf("\nEsse jogo vai te testar.");
Sleep(2000);
system("cls");//Limpa a tela.
break;
case 5:
g=25;
multiplicador=5;
printf("\nVoce tem coragem, jogador(a)!");
Sleep(2000);
system("cls");//Limpa a tela.
break;
case 6:
g=15;
multiplicador=10;
printf("\nBem-vindo aos Campos de Arroz!");
Sleep(2000);
system("cls");//Limpa a tela.
break;
case 7:
g=10;
multiplicador=100;
printf("\nSe conseguir fizer um ponto, voce e uma lenda!");
Sleep(2000);
system("cls");//Limpa a tela.
break;
case 0:
sair();
break;
default:
errou();
break;
}
system("MODE con cols=75 lines=35");//Limitar� o tamanho da janela para ter 20 linhas e 50 colunas.
for(x = 0; x<32; x++){
gotocoordenadas(0,x);
system("color 06"); //ESTES 4 FORs
printf("%c",219);
}
for(x=0; x<40; x++){
gotocoordenadas(x,0); //IR�O GERAR
system("color 0F");
printf("%c",219);
}
for(x=0; x<32; x++){
gotocoordenadas(40,x); //AS DUAS LINHAS E COLUNAS
system("color 01");
printf("%c",219);
}
for(x=0; x<41; x++){
gotocoordenadas(x,32); //QUE COMP�EM O CEN�RIO DO JOGO
system("color 04");
printf("%c",219);
}
switch(dificuldade){//E definir� uma cor para o fundo da tela e os caracteres.
case 1:
system("color 0D");
break;
case 2:
system("color 7F");
break;
case 3:
system("color F1");
break;
case 4:
system("color 56");
break;
case 5:
break;
case 6:
system("color F0");
break;
case 7:
system("color 7F");
break;
default:
break;
}
srand(time(NULL));
comidax = (rand()%39) + 1;//A comida ser� colocada
comiday = (rand()%31) + 1;//Em posi��es aleat�rias nas coordenadas x e y
while(tecla!='s'){
while(tecla!='s' && !(tecla = kbhit())){
for(x=t; x>0; x--){
coordenadax[x] = coordenadax[x-1];//Garante que as partes seguintes da cobra
coordenaday[x] = coordenaday[x-1];//Seguem o trajeto por onde a "cabe�a" passou
}
if(d==0){
if(dificuldade==5){/**Na dificuldade "Inferno", ao movimentar a cobra...**/
system("color 64");
}
coordenadax[0]--; //Quando d==0, a cobra se mover� para a esquerda, reduzindo em uma unidade a coordenada x.
}
if(d==1){
if(dificuldade==5){/**...as cores do cen�rio e dos caracteres ser�o constantemente trocadas...**/
system("color 46");
}
coordenaday[0]--; //Quando d==1, a cobra se mover� para cima, reduzindo em uma unidade a coordenada y.
}
if(d==2){
if(dificuldade==5){/**...entre cen�rio vermelho e caracteres amarelos...**/
system("color 64");
}
coordenadax[0]++; //Quando d==2, a cobra se mover� para a direita, aumentando em uma unidade a coordenada x.
}
if(d==3){
if(dificuldade==5){/**...e cen�rio amarelo e caracteres vermelhos.**/
system("color 46");
}
coordenaday[0]++; //Quando d==3, a cobra se mover� para baixo, reduzindo em uma unidade a coordenada y.
}
gotocoordenadas(coordenadax[t], coordenaday[t]);
printf(" ");//Apaga o lugar por onde a cobra passou e n�o est� mais.
if(comidax == coordenadax[0] && comiday == coordenaday[0]){//Se a cabe�a da cobra estiver no mesmo lugar que a comida,
t++; //Aumenta o tamanho da cobra,
pontos=pontos+multiplicador; //Os pontos s�o adicionados � pontua��o total,
comidax = (rand()%39)+1; //E a comida � adicionada novamente
comiday = (rand()%31)+1; //Nas coordenadas x e y.
}
gotocoordenadas(coordenadax[0], coordenaday[0]);
printf("%c",'*');//A cobra ter� como corpo o caracter * (asterisco).
gotocoordenadas(comidax, comiday);
printf("%c",4);//A comida ter� como corpo um losango.
gotocoordenadas(43,5);
printf("Pontos: %d", pontos);//Os pontos ser�o mostrados em tempo real durante a jogatina.
gotocoordenadas(43,4);
printf("Dificuldade: %d", dificuldade);//A dificuldade ser� mostrada em tempo real durante a jogatina.
Sleep(g);//Fun��o indica de quanto em quanto tempo a cobra se move (g indica o tempo em milissegundos).
for(x=1;x<t;x++){
if(coordenadax[0] == coordenadax[x] && coordenaday[0] == coordenaday[x]){//Se as coordenadas da cabe�a da cobra forem iguais �s coordenadas do pr�prio corpo da cobra,
tecla='s';//Encerre a jogatina.
system("cls");//Limpa a tela.
system("color 08");//Retorna � cor original.
printf("Voce morreu!\n");//Mensagem informativa.
}
}
if(coordenaday[0] == 0 || coordenaday[0] == 32 || coordenadax[0] == 0 || coordenadax[0] == 40){
tecla='s';
system("cls");//Limpa a tela.
system("color 08");
}
}
if(tecla!='s'){//Se a tecla for diferente de s, n�o ir� sair do jogo e seguir� prosseguindo.
tecla=getch();
}
if(tecla=='K'){/**Essas teclas definem que teclas ser�o atribu�das...**/
d=0;
}
if(tecla=='H'){/**...aos valores de "d"...**/
d=1;
}
if(tecla=='M'){/**...onde cada valor de "d"...**/
d=2;
}
if(tecla=='P'){/**corresponde � uma dire��o diferente, como definimos acima.**/
d=3;
}
if(coordenaday[0] == 0 || coordenaday[0] == 32 || coordenadax[0] == 0 || coordenadax[0] == 40){//Se as coordenadas da cabe�a da cobra forem iguais �s da parede,
tecla='s';//Encerre a jogatina.
system("cls");//Limpa a tela.
system("color 08");//Retorna � cor original.
printf("Voce morreu!\n");//Mensagem informativa.
while(!kbhit()){//Espera o usu�rio apertar uma tecla.
}
}
}
getch();
return 0;
}
int main(){
int vidas, continua, tentar;
for(;continua=3;){
for(vidas=3; vidas!=0; vidas--){
jogo();
system("color 08");
printf("Voce tem %d vidas restantes.", vidas-1);
Sleep(3000);
system("cls");//Limpa a tela.
}
morreu();
printf("O que deseja fazer?\n\n1 - Salvar Score\n2 - Encerrar Jogo\n3 - Tentar novamente\n");
scanf("%d", &continua);
switch(continua){
case 1:
recorde();
printf("Deseja tentar novamente?\n1 - Sim (comecando a partir do score anterior)\n2 - Sim (comecando do zero)\n3 - Nao\n");
scanf("%d", &tentar);
switch(tentar){
case 1:
system("cls");//Limpa a tela.
break;
case 2:
system("cls");//Limpa a tela.
pontos=0;
system("cobracomsource.exe");
break;
case 3:
system("cls");//Limpa a tela.
sair();
break;
}
break;
case 2:
sair();
break;
case 3:
system("cls");//Limpa a tela.
pontos=0;
main();
break;
}
}
}
