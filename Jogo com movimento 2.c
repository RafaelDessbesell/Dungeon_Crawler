#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	
	//obs: coordenadas [y], [x]
	
	//arquitetura da tela
	char coordenadas[26][26]= {{ ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
						       { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
							   
	
	//coordenadas iniciais do personagem
	int x=1; //coordenada x do personagem(o 0 e a coordenada inicial do personagem)
	int y=4; //coordenada y do personagem( o 4 e a coordenada incial do personagem)
	int i=0; //contador do y da tela
	int j=0; //contador do x da tela
	int n=50; //numero de monstros
	int vidas=3;//contador de vidas do personagem
	int arma=1;//vai ser a decisao de arma pelo jogador 1-(espada) 2-(arco e flexa) 3-(cajado)
	int fase=3; //fim do jogo, se =1
	int Xx[50]={2};//coordenada x do monstro X1;
	int Xy[50]={2};//coordenada y do monstro X1;
	int randomX1; // um numero aleatorio exclusivo para X1;
	int randomY1=0;//nao e algo randomizado, mas e para ser mais igual as variaveis
	int Yx[50]={2};//coordenada x do monstro Y1;
	int Yy[50]={2};//coordenada y do monstro Y1;
	int vidasY[50]={0};
	char respostaparaonpc;
	int vidasX[50]={0}; //vidas para o x1;
	int Zx[50]={2};
	int Zy[50]={2};
	int vidasZ[50]={10};
	int randomZ1=0;
	//i //se precionado, o personagem interage com o objeto a sua frente;
	//o se precionado, ataca
	int io=-1;//contador de localizacao para o dano calsado pelo personagem 
	int jo=1;//contador de localizacao para o dano calsado pelo personagem z
	int c; //contaodr
	char opcao;
	int renascer=0;//ultilizado para se perder uma vida, voltar ao inicia da fase
	int livro=0;
	int contadorvidas=3;
	int vitoria=0;
	
	contadorvidas=vidas;
	
	
	//coordenadas iniciais dos monstros
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 //N é o gato
	 
	 
	 
	srand(time(NULL));
	
	//O é o npc
	
	//menu
	
	do{
	system("cls");
	printf("===========Dungeon Crawler=============\n");
	printf("----0w0------Gato roubado------0W0-----\n");
	printf("''''''''''E uma vila perdida'''''''''''\n");
	printf("\n\n\n                N~MEOW\n\n");
	
	printf("1)	    <   Jogar    >\n");
	printf("2) 	    <  Tutorial  >\n");
	printf("3) 	    <  Creditos  >\n");





	printf("\n\n");
	printf(":");
	scanf(" %c",&opcao);
	
	//tutorial
	
	if(opcao =='2'){
		system("cls");
		printf("===========HISTORIA=============\n");
		printf("\n Voce esta de viajem por uma vila nova enquanto o seu gato estava andando pelo parque juntamente contigo, no entanto, quando voce virou o olho, ele sumiu.\n\n");
		system("pause");
		system("cls");
		printf("===========HISTORIA=============\n");
		printf("\nEm meio a isso, voce foi perguntando sobre ele com as pessoas em um bar proximo\n\n ");
		system("pause");
		system("cls");
		printf("===========HISTORIA=============\n");
		printf("\n Foi nisso, que um idoso chegou para voce e disse que viu um gato entrando em um velho e mortifero portal.\n\n");
		system("pause");
		system("cls");
		printf("===========HISTORIA=============\n");
		printf("\nDe acordo com as lendas, um heroi viria para remover a orbe maligna do mago do submundo e salvar a vila.\n\n");
		system("pause");
		system("cls");
		printf("===========HISTORIA=============\n");
		printf("\nEntao, decidido voce foi salvar o seu gato e impedir de que o pior aconteça\n\n");
		system("pause");
		system("cls");
		
		printf("===========TUTORIAL============\n");
		printf("\n'O'para atacar\n");
		printf("\n'i'para interagir\n");
		printf("\n'w','d','s','a' para se movimentar\n\n");
		system("pause");
		system("cls");
		printf("===========TUTORIAL============\n");
		printf("\n'X','Y','Z' inimigos\n");
		printf("\n'0' NPC\n");
		printf("\n'*' parede\n");
		printf("\n'#' espinho\n");
		printf("\n'k' caixas\n");
		printf("\n'O' botao\n");
		printf("\n'@' chave\n");
		printf("\n'D' porta fechada\n");
		printf("\n'=' porta aberta\n");
		printf("\n'L' escada\n\n");
		system("pause");
		system("cls");
		
		
		
		
		
		
		
		
		
		
		
		
	}//fim tutorial
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	if(opcao=='1'){
		
		if(fase==0){
			system("cls");
		//laço de repetição de turnos
		//vila
		n=0; //total de monstros
		char vila[25][25] ={   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' '},
							   { '*',' ',' ',' ','*',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
						       { '*',' ',' ','0','*',' ',' ','#',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
							   { '*',' ',' ',' ','*',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
							   { '*','>',' ',' ','*',' ',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
							   { '*',' ','*','*','*',' ',' ',' ','*','*','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
							   { '*',' ',' ',' ',' ',' ',' ',' ',' ','L','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
							   { '*',' ',' ',' ',' ',' ',' ',' ','*','*','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
							   { '*',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
							   { '*',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
							   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
							   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
							   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
							   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
							   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
							   
							   
							   
		for(j=0;j<25;j++){
			
			for(i=0;i<25;i++){
				coordenadas[j][i]=vila[j][i];
			}	
			
			
		}		   
							   
							   
							   
		
			//coordenadas iniciais dos monstros
	 Xx[0]=0;//coordenada x do monstro X1;
	 Xy[0]=0;//coordenada y do monstro X1;
	 
	 Yx[0]=0;//coordenada x do monstro Y1;
	 Yy[0]=0;//coordenada y do monstro Y1;
	 
	 Yx[1]=0;//coordenada x do monstro Y1;
	 Yy[1]=0;//coordenada y do monstro Y1;
	 
	 Xx[1]=0;//coordenada x do monstro X1;
	 Xy[1]=0;//coordenada y do monstro X1;
	 
	 
	 
	 //vidas dos monstros
	 vidasY[0]=0;
	 vidasX[0]=0;
	 vidasY[1]=0;
	 vidasX[1]=0;
		
		
		
		
	do{
		
		//vila
		
		if(renascer==1){
			
					char vila[25][25] ={   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' '},
										   { '*',' ',' ',' ','*',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
									       { '*',' ',' ','0','*',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*',' ',' ',' ','*',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*','>',' ',' ','*',' ',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*',' ','*','*','*',' ',' ',' ','*','*','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*',' ',' ',' ',' ',' ',' ',' ',' ','L','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*',' ',' ',' ',' ',' ',' ',' ','*','*','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
							   
							   
							   
		for(j=0;j<25;j++){
			
			for(i=0;i<25;i++){
				coordenadas[j][i]=vila[j][i];
			}	
			
			
		}		   
							   
							   
							   
		
			//coordenadas iniciais dos monstros
	 Xx[0]=0;//coordenada x do monstro X1;
	 Xy[0]=0;//coordenada y do monstro X1;
	 
	 Yx[0]=0;//coordenada x do monstro Y1;
	 Yy[0]=0;//coordenada y do monstro Y1;
	 
	 Yx[1]=0;//coordenada x do monstro Y1;
	 Yy[1]=0;//coordenada y do monstro Y1;
	 
	 Xx[1]=0;//coordenada x do monstro X1;
	 Xy[1]=0;//coordenada y do monstro X1;
	 
	 
	 
	 //vidas dos monstros
	 vidasY[0]=0;
	 vidasX[0]=0;
	 vidasY[1]=0;
	 vidasX[1]=0;
		
	//	redefinindo checkpoint do personagem
			x=1;
			y=4;
			
			
			
			renascer=0;// para o jogador nao renascer toda hora
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//vila
		//Tela do terminal
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		for(j=0;j<=10;j++){
			
			for(i=0;i<=10;i++){
				printf(" %c",coordenadas[j][i]);
			}	
			
			printf("\n");
		}
		if(livro==1){
				printf("\nLivro: Se movimente com as teclas ate chegar na escada\n para entrar na masmorra.\n\n");
		}
	
		
		printf("\nVidas: %i\n\n",vidas);
		
		printf("i - interagir	o - atacar\n\n");
		
		
		
		//botao de interacao do usuario com o jogo
		char teclado;
		teclado=' ';
		teclado=getch();
		
		
		//npc
		if((coordenadas[y-1][x]=='0'||coordenadas[y+1][x]=='0'||coordenadas[y][x-1]=='0'||coordenadas[y][x+1]=='0') && teclado=='i'){
			
			system("cls");
			printf("Velho: Voce precisa de uma arma para salvar o seu gato, heroi.\n\nQual arma voce quer?\n1-espada\n2-arco e flexa\n3-cajado\n4-Odeio armas\n\n");
			
			
			printf("Resposta:");
			scanf(" %c",&respostaparaonpc);
			
			system("cls");
			
			printf("Velho: pegue esse meu diario, ele vai te guiar...\n\n  ");
			system("pause");
			system("cls");
			
			livro=1;
			
			if(respostaparaonpc=='1'){
				arma=1;
				teclado=' ';
			}	
			else if(respostaparaonpc=='2'){
				arma=2;
				teclado=' ';
			}		
			else if(respostaparaonpc=='3'){
				arma=3;
				teclado=' ';
			}
			else{
				teclado=' ';
			}
			
			
			
		}
		
		//arma 
		
		//espada
		for(c=0;c<=n;c++){//contador de monstros
		
			if(arma==1&& teclado=='o'){
			
			if(coordenadas[y][x]=='^'){
				
				for(io=-1;io<=1;io++){
					
					for(jo=-1;jo>=-2;jo--){
							
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						}
								
							// quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							//dano ao y1
							
							
						}	
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}	

					}
						
					
				}
				
				
				
			}
			
			if(coordenadas[y][x]=='>'){
				
				for(io=1;io<=2;io++){
					
					for(jo=-1;jo<=1;jo++){
							
							
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}	
							
							
						//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
								vidasX[c]--;
								printf("acertouuuuuuuuuuu");
							}
						
						//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
						
						
						
						
						//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
						
					}
				
				}
			
			}
			
			
			
			if(coordenadas[y][x]=='<'){
			
				for(io=-1;io>=-2;io--){
					
					for(jo=-1;jo<=1;jo++){
						
						
						
						
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
						
							
						//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
								vidasX[c]--;
								printf("acertouuuuuuuuuuu");
							}
						
						//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
						
						
						
							//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
						
						
						
					}
				
				}
				
			}
			
			
			if(coordenadas[y][x]=='v'){
				
			
				for(io=-1;io<=1;io++){
					
					for(jo=1;jo<=2;jo++){
					
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
					
					
					
						//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
								vidasX[c]--;
								printf("acertouuuuuuuuuuu");
							}
					
					//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
					
					
						//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
					
					
					
					
					
					
					}
				
				}
			
			}
			
			
			
			
		
		
		
		}//fim espada
		else if(arma==2&& teclado=='o'){//arco e fecha
		
			
		
			if(coordenadas[y][x]=='^'){
				
				
					
					for(jo=-1;jo>=-4;jo--){
							
						io=0;//para que o programa nao bugue com lixo de memoria
						
						if(coordenadas[y+jo][x]=='*'||coordenadas[y+jo][x]=='#'){
							break;
						}
						
						
					
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
								
								//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}	
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
							
						
					
				
				
				
			}
			
			if(coordenadas[y][x]=='>'){
				
				
					
					for(io=1;io<=4;io++){
							
							jo=0;//para que o programa nao bugue com lixo de memoria
					
						if(coordenadas[y][x+io]=='*'||coordenadas[y][x+io]=='#'){
							break;
						}
						
							
						
								
							//para dar dano no X1
						if(y==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
								//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}

					}
						
					
				
				
				
				
			}
		
		
			if(coordenadas[y][x]=='<'){
				
				
					
					for(io=-1;io>=-4;io--){
							
							jo=0;//para que o programa nao bugue com lixo de memoria
					
						if(coordenadas[y][x+io]=='*'||coordenadas[y][x+io]=='#'){
							break;
						}
						
					
						
								
							//para dar dano no X1
						if(y==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
									//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
						
					
				
				
				
				
			}
		
			
			if(coordenadas[y][x]=='v'){
				
				
					
					for(jo=1;jo<=4;jo++){
							
						io=0;//para que o programa nao bugue com lixo de memoria
							
						if(coordenadas[y+jo][x]=='*'||coordenadas[y+jo][x]=='#'){
							break;
						}
						
					
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
								
								
								//dano nas caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
							
						
					
				
				
				
			}
			
			
			
			
			
		
		
		
		
		
		}//fim arco e fecha
		
		
		else if(arma==3&& teclado=='o'){//cajado
			
		
				
				for(io=-1;io<=1;io++){
					
					for(jo=-1;jo<=1;jo++){
							
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						}
								
									//dano nas caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}		
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
						
					
				}
			
				
				
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		}
		
		
		
		
		
		
		for(c=0;c<=n;c++){//laco de repeticao de numero de monstros
		
		
		
			//X1
				
				//X1 variavel principal
				randomX1= rand() % 4+1;
				
				
				
				
				
				if(vidasX[c]<=0){//fazer o monstro sumir ao final das vidas
					coordenadas[Xy[c]][Xx[c]]=' ';
				}
		
			if(vidasX[c]>0){//contador de vidas
				
				
				
				
				
				
				
				
				
					//paredes para o X1 && caixas
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='*'||randomX1==1&&coordenadas[Xy[c]][Xx[c]+1]=='k'||randomX1==1&&coordenadas[Xy[c]][Xx[c]+1]=='X'||randomX1==1&&coordenadas[Xy[c]][Xx[c]+1]=='Y'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='*'||randomX1==2&&coordenadas[Xy[c]][Xx[c]-1]=='k'||randomX1==1&&coordenadas[Xy[c]][Xx[c]-1]=='X'||randomX1==1&&coordenadas[Xy[c]][Xx[c]-1]=='Y'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='*'||randomX1==3&&coordenadas[Xy[c]-1][Xx[c]]=='k'||randomX1==1&&coordenadas[Xy[c]-1][Xx[c]]=='X'||randomX1==1&&coordenadas[Xy[c]-1][Xx[c]]=='Y'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='*'||randomX1==4&&coordenadas[Xy[c]+1][Xx[c]]=='k'||randomX1==1&&coordenadas[Xy[c]+1][Xx[c]]=='X'||randomX1==1&&coordenadas[Xy[c]+1][Xx[c]]=='Y'){
					
					randomX1=0;
				
				
				}
				
				//espinhos para o x1
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='#'){
					
					randomX1=0;
					vidasX[c]--;
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='#'){
					
					randomX1=0;
					vidasX[c]--;
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='#'){
					
					randomX1=0;
					vidasX[c]--;
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='#'){
					
					randomX1=0;
					vidasX[c]--;
				
				}
				
				
				
				
				
				//escadas
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='L'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='L'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='L'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='L'){
					
					randomX1=0;
				
				
				}
				
				
				
				
				
				
				
				//colisao do X1 com o personagem 
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
				
				}
				
				
				
				
				
				
				
				
				
				//inteligencia do X1
				
				
				
				
				if(randomX1==1){
					Xx[c]++;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]][Xx[c]-1]=' ';
				}
				
				if(randomX1==2){
					Xx[c]--;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]][Xx[c]+1]=' ';
				}
			
				if(randomX1==3){
					Xy[c]--;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]+1][Xx[c]]=' ';
				}
		    
				if(randomX1==4){
					Xy[c]++;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]-1][Xx[c]]=' ';
				}
				
				
				
				
				
				
			
			
			}//fim vidas x1
			
			
			
			
			
			
			
			//Y1
			
			if(vidasY[c]>0){
				
				
				for(j=0;j<10;j++){
				
					for(i=0;i<20;i++){
						
						
						
						
						//movimentação do Y1d
						
						
						
						//barramento de movimento
						//movimentoY1
						 
						
							
						
						
						//movimentoy do y1 do y1
							if(coordenadas[j][i]=='v'&&j!=Yy[c]||coordenadas[j][i]=='<'&&j!=Yy[c]||coordenadas[j][i]=='>'&&j!=Yy[c]||coordenadas[j][i]=='^'&&j!=Yy[c]){
									
								if(j<Yy[c]&&coordenadas[Yy[c]-1][Yx[c]]!='*'&&coordenadas[Yy[c]-1][Yx[c]]!='#'&&coordenadas[Yy[c]-1][Yx[c]]!='k'&&coordenadas[Yy[c]-1][Yx[c]]!='^'&&coordenadas[Yy[c]-1][Yx[c]]!='<'&&coordenadas[Yy[c]-1][Yx[c]]!='>'&&coordenadas[Yy[c]-1][Yx[c]]!='v'&&coordenadas[Yy[c]-1][Yx[c]]!='Y'&&coordenadas[Yy[c]-1][Yx[c]]!='X'){
									Yy[c]--;
									coordenadas[Yy[c]+1][Yx[c]]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
								
								
								if(j>Yy[c]&&coordenadas[Yy[c]+1][Yx[c]]!='*'&&coordenadas[Yy[c]+1][Yx[c]]!='#'&&coordenadas[Yy[c]+1][Yx[c]]!='k'&&coordenadas[Yy[c]+1][Yx[c]]!='^'&&coordenadas[Yy[c]+1][Yx[c]]!='<'&&coordenadas[Yy[c]+1][Yx[c]]!='>'&&coordenadas[Yy[c]+1][Yx[c]]!='v'&&coordenadas[Yy[c]+1][Yx[c]]!='Y'&&coordenadas[Yy[c]+1][Yx[c]]!='X'){
									Yy[c]++;
									coordenadas[Yy[c]-1][Yx[c]]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
									
							}//fim movimento y
							
								//movimento x do y1
							if(coordenadas[j][i]=='v'&&j==Yy[c]||coordenadas[j][i]=='<'&&j==Yy[c]||coordenadas[j][i]=='>'&&j==Yy[c]||coordenadas[j][i]=='^'&&j==Yy[c]){
								
								if(i<Yx[c]&&coordenadas[Yy[c]][Yx[c]-1]!='*'&&coordenadas[Yy[c]][Yx[c]-1]!='#'&&coordenadas[Yy[c]][Yx[c]-1]!='k'&&coordenadas[Yy[c]][Yx[c]-1]!='^'&&coordenadas[Yy[c]][Yx[c]-1]!='<'&&coordenadas[Yy[c]][Yx[c]-1]!='>'&&coordenadas[Yy[c]][Yx[c]-1]!='v'&&coordenadas[Yy[c]][Yx[c]-1]!='Y'&&coordenadas[Yy[c]][Yx[c]-1]!='X'){
									Yx[c]--;
									coordenadas[Yy[c]][Yx[c]+1]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
								if(i>Yx[c]&&coordenadas[Yy[c]][Yx[c]+1]!='*'&&coordenadas[Yy[c]][Yx[c]+1]!='k'&&coordenadas[Yy[c]][Yx[c]+1]!='#'&&coordenadas[Yy[c]][Yx[c]+1]!='^'&&coordenadas[Yy[c]][Yx[c]+1]!='<'&&coordenadas[Yy[c]][Yx[c]+1]!='>'&&coordenadas[Yy[c]][Yx[c]+1]!='v'&&coordenadas[Yy[c]][Yx[c]+1]!='Y'&&coordenadas[Yy[c]][Yx[c]+1]!='X'){
									Yx[c]++;
									coordenadas[Yy[c]][Yx[c]-1]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
								
								//dano de espinhos ao Y1
								
							}//fim movimento y do y1
										
										
										
										
									
								if(j<Yy[c]&&coordenadas[Yy[c]-1][Yx[c]]=='#'){
									vidasY[c]--;
										
								}
								
								
								if(j>Yy[c]&&coordenadas[Yy[c]+1][Yx[c]]=='#'){
									vidasY[c]--;
										
								}
								
								
								if(i<Yx[c]&&coordenadas[Yy[c]][Yx[c]-1]=='#'){
									vidasY[c]--;
										
								}
								
								
								if(i>Yx[c]&&coordenadas[Yy[c]][Yx[c]+1]=='#'){
									vidasY[c]--;
										
								}		
										
								//dano do monstro no personagem
								
								if(j<Yy[c]&&(coordenadas[Yy[c]-1][Yx[c]]=='^'||coordenadas[Yy[c]-1][Yx[c]]=='<'||coordenadas[Yy[c]-1][Yx[c]]=='>'||coordenadas[Yy[c]-1][Yx[c]]=='v')){
									vidas--;
										
								}	
										
								if(j>Yy[c]&&(coordenadas[Yy[c]+1][Yx[c]]=='^'||coordenadas[Yy[c]+1][Yx[c]]=='<'||coordenadas[Yy[c]+1][Yx[c]]=='>'||coordenadas[Yy[c]+1][Yx[c]]=='v')){
									vidas--;
										
								}		
								
								
								if(i<Yy[c]&&(coordenadas[Yy[c]][Yx[c]-1]=='^'||coordenadas[Yy[c]][Yx[c]-1]=='<'||coordenadas[Yy[c]][Yx[c]-1]=='>'||coordenadas[Yy[c]][Yx[c]-1]=='v')){
									vidas--;
										
								}	
								
								
								if(i>Yy[c]&&(coordenadas[Yy[c]][Yx[c]+1]=='^'||coordenadas[Yy[c]][Yx[c]+1]=='<'||coordenadas[Yy[c]][Yx[c]+1]=='>'||coordenadas[Yy[c]][Yx[c]+1]=='v')){
									vidas--;
										
								}	
								
								
								
								
								
								
								
								
								
								
								
								
									
										
					}//for2
				
				//morte Y1
				
				
							
						
				}//for1
				
				
				
			}//vidas y1
			
			
			if(vidasY[c]<=0){
					coordenadas[Yy[c]][Yx[c]]=' ';
					
					
					
					}
		
			
			
			//fim Y1
		}//for do contador
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//personagem
		
		
		
		
		//codigo de impedimento de movimento por paredes ou caixa do personagem
		if(teclado=='d'&& coordenadas[y][x+1]=='*'||teclado=='d'&& coordenadas[y][x+1]=='k'){
			
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='*'||teclado=='a'&& coordenadas[y][x-1]=='k'){
				
			coordenadas[y][x]='<';
			teclado=' ';
			
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='*'||teclado=='w'&& coordenadas[y-1][x]=='k'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='*'||teclado=='s'&& coordenadas[y+1][x]=='k'){
				
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		//espinhos (perca de vidas e impedimento'parede')
		if(teclado=='d'&& coordenadas[y][x+1]=='#'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='#'){
			
			coordenadas[y][x]='<';
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='#'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='#'){
		
			coordenadas[y][x]='v';
			teclado=' ';
			vidas--;
			
		}
		
		//impedimento de passagem pelo npc
		
		if(teclado=='d'&& coordenadas[y][x+1]=='0'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='0'){
				
			coordenadas[y][x]='<';
			teclado=' ';
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='0'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='0'){
			
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//Dano do personagem com X
		if(teclado=='d'&& coordenadas[y][x+1]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		
		
		
		//Dano do personagem com Y
		if(teclado=='d'&& coordenadas[y][x+1]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		
		
		
		
		//Escada
		
		if(teclado=='d'&& coordenadas[y][x+1]=='L'){
			
			fase++;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='L'){
			
			fase++;
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='L'){
			
			fase++;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='L'){
			
			fase++;
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//movimento do personagem
		if(teclado=='d'){
			x++;
			coordenadas[y][x]='>';
			coordenadas[y][x-1]=' ';
		}
		
		if(teclado=='a'){
			x--;
			coordenadas[y][x]='<';
			coordenadas[y][x+1]=' ';
		}
	
		if(teclado=='w'){
			y--;
			coordenadas[y][x]='^';
			coordenadas[y+1][x]=' ';
		}
    
		if(teclado=='s'){
			y++;
			coordenadas[y][x]='v';
			coordenadas[y-1][x]=' ';
		}
		
		
		
		
		
		
		
			
			
			
			
			
			
			
			
			
			
			
			
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		if(contadorvidas!=vidas){
			
			renascer=1;
			contadorvidas=vidas;
			
			
		}
		
		
		
		
	
		
	
		//limpando a tela
		system("cls");
		
		
		
		
	}while(fase==0&&vidas>0||renascer>0);
	
	
	
	
	
	
		}//if fase 0(vila)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//if fase 1 masmorra
		
		
		if(fase==1){
			system("cls");
		//laço de repetição de turnos
		//	redefinindo checkpoint do personagem
			x=1;
			y=4;
				n=0;//total de monstros
			char dungeon1[25][25]={        { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' '},
										   { '*','L',' ','D','k','k','@','*',' ','@','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
									       { '*',' ',' ','*','k','k','K','*',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*',' ',' ',' ','*','D','*','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*','>',' ',' ',' ',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*',' ',' ',' ',' ',' ',' ','k',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*',' ',' ',' ',' ',' ','k','k','k',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*',' ',' ',' ',' ','k','k','@','k','k','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*',' ','k','k','k',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*','@','D','D','D',' ',' ','k',' ','@','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
							   
							   
							   
		for(j=0;j<25;j++){
			
			for(i=0;i<25;i++){
				coordenadas[j][i]=dungeon1[j][i];
			}	
			
			
		}		   
							   
							   
							   
		
			//coordenadas iniciais dos monstros
	 Xx[0]=0;//coordenada x do monstro X1;
	 Xy[0]=0;//coordenada y do monstro X1;
	 
	 Yx[0]=0;//coordenada x do monstro Y1;
	 Yy[0]=0;//coordenada y do monstro Y1;
	 
	 Yx[1]=0;//coordenada x do monstro Y1;
	 Yy[1]=0;//coordenada y do monstro Y1;
	 
	 Xx[1]=0;//coordenada x do monstro X1;
	 Xy[1]=0;//coordenada y do monstro X1;
	 
	 
	 
	 //vidas dos monstros
	 vidasY[0]=0;
	 vidasX[0]=0;
	 vidasY[1]=0;
	 vidasX[1]=0;
		
		
		
		
	do{
		
		//vila
		
		if(renascer==1){
			
					char vila[25][25] ={   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' '},
										   { '*','L',' ','D','k','k','@','*',' ','@','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
									       { '*',' ',' ','*','k','k','K','*',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*',' ',' ',' ','*','D','*','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*','>',' ',' ',' ',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*',' ',' ',' ',' ',' ',' ','k',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*',' ',' ',' ',' ',' ','k','k','k',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*',' ',' ',' ',' ','k','k','@','k','k','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*',' ','k','k','k',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*','@','D','D','D',' ',' ','k',' ','@','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
										   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
										   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
							   
							   
							   
		for(j=0;j<25;j++){
			
			for(i=0;i<25;i++){
				coordenadas[j][i]=vila[j][i];
			}	
			
			
		}		   
							   
							   
							   
		
			//coordenadas iniciais dos monstros
	 Xx[0]=0;//coordenada x do monstro X1;
	 Xy[0]=0;//coordenada y do monstro X1;
	 
	 Yx[0]=0;//coordenada x do monstro Y1;
	 Yy[0]=0;//coordenada y do monstro Y1;
	 
	 Yx[1]=0;//coordenada x do monstro Y1;
	 Yy[1]=0;//coordenada y do monstro Y1;
	 
	 Xx[1]=0;//coordenada x do monstro X1;
	 Xy[1]=0;//coordenada y do monstro X1;
	 
	 
	 
	 //vidas dos monstros
	 vidasY[0]=0;
	 vidasX[0]=0;
	 vidasY[1]=0;
	 vidasX[1]=0;
		
	//	redefinindo checkpoint do personagem
			x=1;
			y=4;
			
			
			
			renascer=0;// para o jogador nao renascer toda hora
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//vila
		//Tela do terminal
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		for(j=0;j<=10;j++){
			
			for(i=0;i<=10;i++){
				printf(" %c",coordenadas[j][i]);
			}	
			
			printf("\n");
		}
		if(livro==1){
				printf("\nLivro: Quebre as caixas e pegue as chaves para chegar na escada.\n\n");
		}
	
		
		printf("\nVidas: %i\n\n",vidas);
		
		printf("i - interagir	o - atacar\n\n");
		
		
		
		//botao de interacao do usuario com o jogo
		char teclado;
		teclado=' ';
		teclado=getch();
		
		
		//chaves 1 especificas da fase 1
		if((y==7-1&&x==7||y==7+1&&x==7||y==7&&x==7-1||y==7&&x==7+1) && teclado=='i'&& coordenadas[7][7]=='@'){
			
			coordenadas[3][8]='=';
			coordenadas[7][7]=' ';
			
			
		}
		//chaves 2 especificas da fase 1
		if((y==1-1&&x==9||y==1+1&&x==9||y==1&&x==9-1||y==1&&x==9+1) && teclado=='i'&& coordenadas[1][9]=='@'){
			
			coordenadas[9][4]='=';
			coordenadas[1][9]=' ';
			
			
		}
		//chaves 3 especificas da fase 1
		if((y==9-1&&x==9||y==9+1&&x==9||y==9&&x==9-1||y==9&&x==9+1) && teclado=='i'&& coordenadas[9][9]=='@'){
			
			coordenadas[9][2]='=';
			coordenadas[9][9]=' ';
			
			
		}
		
		if((y==1-1&&x==6||y==1+1&&x==6||y==1&&x==6-1||y==1&&x==6+1) && teclado=='i'&& coordenadas[1][6]=='@'){
			
			coordenadas[9][3]='=';
			coordenadas[1][6]=' ';
			
			
		}
		
		if((y==9-1&&x==1||y==9+1&&x==1||y==9&&x==1-1||y==9&&x==1+1) && teclado=='i'&& coordenadas[9][1]=='@'){
			
			coordenadas[1][3]='=';
			coordenadas[9][1]=' ';
			
			
		}
		
		//arma 
		
		//espada
		for(c=0;c<=n;c++){//contador de monstros
		
			if(arma==1&& teclado=='o'){
			
			if(coordenadas[y][x]=='^'){
				
				for(io=-1;io<=1;io++){
					
					for(jo=-1;jo>=-2;jo--){
							
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						}
								
							// quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							//dano ao y1
							
							
						}	
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}	

					}
						
					
				}
				
				
				
			}
			
			if(coordenadas[y][x]=='>'){
				
				for(io=1;io<=2;io++){
					
					for(jo=-1;jo<=1;jo++){
							
							
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}	
							
							
						//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
								vidasX[c]--;
								printf("acertouuuuuuuuuuu");
							}
						
						//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
						
						
						
						
						//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
						
					}
				
				}
			
			}
			
			
			
			if(coordenadas[y][x]=='<'){
			
				for(io=-1;io>=-2;io--){
					
					for(jo=-1;jo<=1;jo++){
						
						
						
						
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
						
							
						//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
								vidasX[c]--;
								printf("acertouuuuuuuuuuu");
							}
						
						//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
						
						
						
							//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
						
						
						
					}
				
				}
				
			}
			
			
			if(coordenadas[y][x]=='v'){
				
			
				for(io=-1;io<=1;io++){
					
					for(jo=1;jo<=2;jo++){
					
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
					
					
					
						//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
								vidasX[c]--;
								printf("acertouuuuuuuuuuu");
							}
					
					//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
					
					
						//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
					
					
					
					
					
					
					}
				
				}
			
			}
			
			
			
			
		
		
		
		}//fim espada
		else if(arma==2&& teclado=='o'){//arco e fecha
		
			
		
			if(coordenadas[y][x]=='^'){
				
				
					
					for(jo=-1;jo>=-4;jo--){
							
						io=0;//para que o programa nao bugue com lixo de memoria
						
						if(coordenadas[y+jo][x]=='*'||coordenadas[y+jo][x]=='#'){
							break;
						}
						
						
					
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
								
								//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}	
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
							
						
					
				
				
				
			}
			
			if(coordenadas[y][x]=='>'){
				
				
					
					for(io=1;io<=4;io++){
							
							jo=0;//para que o programa nao bugue com lixo de memoria
					
						if(coordenadas[y][x+io]=='*'||coordenadas[y][x+io]=='#'){
							break;
						}
						
							
						
								
							//para dar dano no X1
						if(y==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
								//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}

					}
						
					
				
				
				
				
			}
		
		
			if(coordenadas[y][x]=='<'){
				
				
					
					for(io=-1;io>=-4;io--){
							
							jo=0;//para que o programa nao bugue com lixo de memoria
					
						if(coordenadas[y][x+io]=='*'||coordenadas[y][x+io]=='#'){
							break;
						}
						
					
						
								
							//para dar dano no X1
						if(y==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
									//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
						
					
				
				
				
				
			}
		
			
			if(coordenadas[y][x]=='v'){
				
				
					
					for(jo=1;jo<=4;jo++){
							
						io=0;//para que o programa nao bugue com lixo de memoria
							
						if(coordenadas[y+jo][x]=='*'||coordenadas[y+jo][x]=='#'){
							break;
						}
						
					
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
								
								
								//dano nas caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
							
						
					
				
				
				
			}
			
			
			
			
			
		
		
		
		
		
		}//fim arco e fecha
		
		
		else if(arma==3&& teclado=='o'){//cajado
			
		
				
				for(io=-1;io<=1;io++){
					
					for(jo=-1;jo<=1;jo++){
							
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						}
								
									//dano nas caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}		
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
						
					
				}
			
				
				
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		}
		
		
		
		
		
		
		for(c=0;c<=n;c++){//laco de repeticao de numero de monstros
		
		
		
			//X1
				
				//X1 variavel principal
				randomX1= rand() % 4+1;
				
				
				
				
				
				if(vidasX[c]<=0){//fazer o monstro sumir ao final das vidas
					coordenadas[Xy[c]][Xx[c]]=' ';
				}
		
			if(vidasX[c]>0){//contador de vidas
				
				
				
				
				
				
				
				
				
					//paredes para o X1 && caixas
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='*'||randomX1==1&&coordenadas[Xy[c]][Xx[c]+1]=='k'||randomX1==1&&coordenadas[Xy[c]][Xx[c]+1]=='X'||randomX1==1&&coordenadas[Xy[c]][Xx[c]+1]=='Y'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='*'||randomX1==2&&coordenadas[Xy[c]][Xx[c]-1]=='k'||randomX1==1&&coordenadas[Xy[c]][Xx[c]-1]=='X'||randomX1==1&&coordenadas[Xy[c]][Xx[c]-1]=='Y'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='*'||randomX1==3&&coordenadas[Xy[c]-1][Xx[c]]=='k'||randomX1==1&&coordenadas[Xy[c]-1][Xx[c]]=='X'||randomX1==1&&coordenadas[Xy[c]-1][Xx[c]]=='Y'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='*'||randomX1==4&&coordenadas[Xy[c]+1][Xx[c]]=='k'||randomX1==1&&coordenadas[Xy[c]+1][Xx[c]]=='X'||randomX1==1&&coordenadas[Xy[c]+1][Xx[c]]=='Y'){
					
					randomX1=0;
				
				
				}
				
				//espinhos para o x1
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='#'){
					
					randomX1=0;
					vidasX[c]--;
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='#'){
					
					randomX1=0;
					vidasX[c]--;
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='#'){
					
					randomX1=0;
					vidasX[c]--;
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='#'){
					
					randomX1=0;
					vidasX[c]--;
				
				}
				
				
				
				
				
				
				
				
				
				
				//colisao do X1 com o personagem 
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
				
				}
				
				
				
				
				
				
				
				
				
				//inteligencia do X1
				
				
				
				
				if(randomX1==1){
					Xx[c]++;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]][Xx[c]-1]=' ';
				}
				
				if(randomX1==2){
					Xx[c]--;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]][Xx[c]+1]=' ';
				}
			
				if(randomX1==3){
					Xy[c]--;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]+1][Xx[c]]=' ';
				}
		    
				if(randomX1==4){
					Xy[c]++;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]-1][Xx[c]]=' ';
				}
				
				
				
				
				
				
			
			
			}//fim vidas x1
			
			
			
			
			
			
			
			//Y1
			
			if(vidasY[c]>0){
				
				
				for(j=0;j<10;j++){
				
					for(i=0;i<20;i++){
						
						
						
						
						//movimentação do Y1d
						
						
						
						//barramento de movimento
						//movimentoY1
						 
						
							
						
						
						//movimentoy do y1 do y1
							if(coordenadas[j][i]=='v'&&j!=Yy[c]||coordenadas[j][i]=='<'&&j!=Yy[c]||coordenadas[j][i]=='>'&&j!=Yy[c]||coordenadas[j][i]=='^'&&j!=Yy[c]){
									
								if(j<Yy[c]&&coordenadas[Yy[c]-1][Yx[c]]!='*'&&coordenadas[Yy[c]-1][Yx[c]]!='#'&&coordenadas[Yy[c]-1][Yx[c]]!='k'&&coordenadas[Yy[c]-1][Yx[c]]!='^'&&coordenadas[Yy[c]-1][Yx[c]]!='<'&&coordenadas[Yy[c]-1][Yx[c]]!='>'&&coordenadas[Yy[c]-1][Yx[c]]!='v'&&coordenadas[Yy[c]-1][Yx[c]]!='Y'&&coordenadas[Yy[c]-1][Yx[c]]!='X'){
									Yy[c]--;
									coordenadas[Yy[c]+1][Yx[c]]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
								
								
								if(j>Yy[c]&&coordenadas[Yy[c]+1][Yx[c]]!='*'&&coordenadas[Yy[c]+1][Yx[c]]!='#'&&coordenadas[Yy[c]+1][Yx[c]]!='k'&&coordenadas[Yy[c]+1][Yx[c]]!='^'&&coordenadas[Yy[c]+1][Yx[c]]!='<'&&coordenadas[Yy[c]+1][Yx[c]]!='>'&&coordenadas[Yy[c]+1][Yx[c]]!='v'&&coordenadas[Yy[c]+1][Yx[c]]!='Y'&&coordenadas[Yy[c]+1][Yx[c]]!='X'){
									Yy[c]++;
									coordenadas[Yy[c]-1][Yx[c]]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
									
							}//fim movimento y
							
								//movimento x do y1
							if(coordenadas[j][i]=='v'&&j==Yy[c]||coordenadas[j][i]=='<'&&j==Yy[c]||coordenadas[j][i]=='>'&&j==Yy[c]||coordenadas[j][i]=='^'&&j==Yy[c]){
								
								if(i<Yx[c]&&coordenadas[Yy[c]][Yx[c]-1]!='*'&&coordenadas[Yy[c]][Yx[c]-1]!='#'&&coordenadas[Yy[c]][Yx[c]-1]!='k'&&coordenadas[Yy[c]][Yx[c]-1]!='^'&&coordenadas[Yy[c]][Yx[c]-1]!='<'&&coordenadas[Yy[c]][Yx[c]-1]!='>'&&coordenadas[Yy[c]][Yx[c]-1]!='v'&&coordenadas[Yy[c]][Yx[c]-1]!='Y'&&coordenadas[Yy[c]][Yx[c]-1]!='X'){
									Yx[c]--;
									coordenadas[Yy[c]][Yx[c]+1]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
								if(i>Yx[c]&&coordenadas[Yy[c]][Yx[c]+1]!='*'&&coordenadas[Yy[c]][Yx[c]+1]!='k'&&coordenadas[Yy[c]][Yx[c]+1]!='#'&&coordenadas[Yy[c]][Yx[c]+1]!='^'&&coordenadas[Yy[c]][Yx[c]+1]!='<'&&coordenadas[Yy[c]][Yx[c]+1]!='>'&&coordenadas[Yy[c]][Yx[c]+1]!='v'&&coordenadas[Yy[c]][Yx[c]+1]!='Y'&&coordenadas[Yy[c]][Yx[c]+1]!='X'){
									Yx[c]++;
									coordenadas[Yy[c]][Yx[c]-1]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
								
								//dano de espinhos ao Y1
								
							}//fim movimento y do y1
										
										
										
										
									
								if(j<Yy[c]&&coordenadas[Yy[c]-1][Yx[c]]=='#'){
									vidasY[c]--;
										
								}
								
								
								if(j>Yy[c]&&coordenadas[Yy[c]+1][Yx[c]]=='#'){
									vidasY[c]--;
										
								}
								
								
								if(i<Yx[c]&&coordenadas[Yy[c]][Yx[c]-1]=='#'){
									vidasY[c]--;
										
								}
								
								
								if(i>Yx[c]&&coordenadas[Yy[c]][Yx[c]+1]=='#'){
									vidasY[c]--;
										
								}		
										
								//dano do monstro no personagem
								
								if(j<Yy[c]&&(coordenadas[Yy[c]-1][Yx[c]]=='^'||coordenadas[Yy[c]-1][Yx[c]]=='<'||coordenadas[Yy[c]-1][Yx[c]]=='>'||coordenadas[Yy[c]-1][Yx[c]]=='v')){
									vidas--;
										
								}	
										
								if(j>Yy[c]&&(coordenadas[Yy[c]+1][Yx[c]]=='^'||coordenadas[Yy[c]+1][Yx[c]]=='<'||coordenadas[Yy[c]+1][Yx[c]]=='>'||coordenadas[Yy[c]+1][Yx[c]]=='v')){
									vidas--;
										
								}		
								
								
								if(i<Yy[c]&&(coordenadas[Yy[c]][Yx[c]-1]=='^'||coordenadas[Yy[c]][Yx[c]-1]=='<'||coordenadas[Yy[c]][Yx[c]-1]=='>'||coordenadas[Yy[c]][Yx[c]-1]=='v')){
									vidas--;
										
								}	
								
								
								if(i>Yy[c]&&(coordenadas[Yy[c]][Yx[c]+1]=='^'||coordenadas[Yy[c]][Yx[c]+1]=='<'||coordenadas[Yy[c]][Yx[c]+1]=='>'||coordenadas[Yy[c]][Yx[c]+1]=='v')){
									vidas--;
										
								}	
								
								
								
								
								
								
								
								
								
								
								
								
									
										
					}//for2
				
				//morte Y1
				
				
							
						
				}//for1
				
				
				
			}//vidas y1
			
			
			if(vidasY[c]<=0){
					coordenadas[Yy[c]][Yx[c]]=' ';
					
					
					
					}
		
			
			
			//fim Y1
		}//for do contador
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//personagem
		
		
		
		
		//codigo de impedimento de movimento por paredes ou caixa do personagem
		if(teclado=='d'&& coordenadas[y][x+1]=='*'||teclado=='d'&& coordenadas[y][x+1]=='k'){
			
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='*'||teclado=='a'&& coordenadas[y][x-1]=='k'){
				
			coordenadas[y][x]='<';
			teclado=' ';
			
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='*'||teclado=='w'&& coordenadas[y-1][x]=='k'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='*'||teclado=='s'&& coordenadas[y+1][x]=='k'){
				
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		//espinhos (perca de vidas e impedimento'parede')
		if(teclado=='d'&& coordenadas[y][x+1]=='#'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='#'){
			
			coordenadas[y][x]='<';
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='#'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='#'){
		
			coordenadas[y][x]='v';
			teclado=' ';
			vidas--;
			
		}
		
		//impedimento de passagem pelo npc e pela chave
		
		if(teclado=='d'&& coordenadas[y][x+1]=='0'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='0'){
				
			coordenadas[y][x]='<';
			teclado=' ';
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='0'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='0'){
			
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		
	//impedimento de passagem por portas fechadas
		if(teclado=='d'&& coordenadas[y][x+1]=='D'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='D'){
			
			coordenadas[y][x]='<';
			teclado=' ';
			
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='D'){
				
			coordenadas[y][x]='^';
			teclado=' ';
		
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='D'){
		
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		
		
		//chaves
		
	
		if(teclado=='d'&& coordenadas[y][x+1]=='@'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='@'){
			
			coordenadas[y][x]='<';
			teclado=' ';
			
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='@'){
				
			coordenadas[y][x]='^';
			teclado=' ';
		
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='@'){
		
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//Dano do personagem com X
		if(teclado=='d'&& coordenadas[y][x+1]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		
		
		
		//Dano do personagem com Y
		if(teclado=='d'&& coordenadas[y][x+1]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		
		
		
		
		//Escada
		
		if(teclado=='d'&& coordenadas[y][x+1]=='L'){
			
			fase++;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='L'){
			
			fase++;
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='L'){
			
			fase++;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='L'){
			
			fase++;
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//movimento do personagem
		if(teclado=='d'){
			x++;
			coordenadas[y][x]='>';
			coordenadas[y][x-1]=' ';
		}
		
		if(teclado=='a'){
			x--;
			coordenadas[y][x]='<';
			coordenadas[y][x+1]=' ';
		}
	
		if(teclado=='w'){
			y--;
			coordenadas[y][x]='^';
			coordenadas[y+1][x]=' ';
		}
    
		if(teclado=='s'){
			y++;
			coordenadas[y][x]='v';
			coordenadas[y-1][x]=' ';
		}
		
		
		
		
		
		
		
			
			
			
			
			
			
			
			
			
			
			
			
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		if(contadorvidas!=vidas){
			
			renascer=1;
			contadorvidas=vidas;
			
			
		}
		
		
		
		
	
		
	
		//limpando a tela
		system("cls");
		
		
		
		
	}while(fase==1&&vidas>0||renascer>0);
	
	
	
	
	
	
		}//if fase 1 masmorra
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//fase 2
		
		if(fase==2){
			system("cls");
		//laço de repetição de turnos
		//	redefinindo checkpoint do personagem
			x=1;
			y=4;
			n=13;//total de monstros
			char dungeon2[25][25]={    { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' '},
									   { '*',' ','*',' ','X',' ',' ','*',' ',' ',' ',' ',' ',' ','#','@','*',' ',' ','*',' ',' ',' ',' ',' '},
								       { '*',' ','*',' ',' ','X',' ','*',' ','#','#','#','#',' ','#','D','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','*','*','*','*','*','#',' ','#','@',' ','#',' ','#',' ','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*','>','#','k','k','k','k','#',' ','#','#',' ','#',' ',' ',' ','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','k','k','k','#',' ',' ',' ',' ','#','#','#','#','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','#','#','#','*','#','#','#','#','*','*','*','*','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','k','k','k','*','*','*','*','*','*',' ',' ',' ','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','k','k','k','*',' ',' ',' ',' ',' ','X','X','X','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','#','#','#','k','*',' ',' ','X',' ',' ','X',' ',' ','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','k','k','k','*',' ','X',' ',' ',' ','X',' ','@','*','*',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','k','K','#','*',' ',' ',' ','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','k','k','k','*',' ',' ',' ','*','X',' ',' ',' ','*','*',' ','*',' ',' ',' ',' ',' '},
									   { '*','O','#','k','k','X','k','*','*',' ','*','*',' ','L',' ',' ','*','*',' ','*',' ',' ',' ',' ',' '},
									   { '*','D','#','k','k','k','k','D',' ',' ',' ','D',' ',' ','X',' ','*',' ',' ',' ',' ',' ',' ',' ',' '},
									   { '*','O','#','@','k','k','k','*','#','#','#','*','X',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' '},
									   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
							   
							   
							   
		for(j=0;j<25;j++){
			
			for(i=0;i<25;i++){
				coordenadas[j][i]=dungeon2[j][i];
			}	
			
			
		}		   
							   
							   
							   
		
			//coordenadas iniciais dos monstros
	 Xx[0]=4;//coordenada x do monstro X1;
	 Xy[0]=1;//coordenada y do monstro X1;
	 Xx[1]=5;//coordenada x do monstro X1;
	 Xy[1]=2;//coordenada y do monstro X1;
	 Xx[2]=5;//coordenada x do monstro X1;
	 Xy[2]=13;//coordenada y do monstro X1;
	 Xx[3]=9;//coordenada x do monstro X1;
	 Xy[3]=10;//coordenada y do monstro X1;
	 Xx[4]=10;//coordenada x do monstro X1;
	 Xy[4]=9;//coordenada y do monstro X1;
	 Xx[5]=12;//coordenada x do monstro X1;
	 Xy[5]=12;//coordenada y do monstro X1;
	 Xx[6]=12;//coordenada x do monstro X1;
	 Xy[6]=15;//coordenada y do monstro X1;
	 Xx[7]=13;//coordenada x do monstro X1;
	 Xy[7]=8;//coordenada y do monstro X1;
	 Xx[8]=13;//coordenada x do monstro X1;
	 Xy[8]=9;//coordenada y do monstro X1;
	 Xx[9]=13;//coordenada x do monstro X1;
	 Xy[9]=10;//coordenada y do monstro X1;
	 Xx[10]=14;//coordenada x do monstro X1;
	 Xy[10]=8;//coordenada y do monstro X1;
	 Xx[11]=15;//coordenada x do monstro X1;
	 Xy[11]=8;//coordenada y do monstro X1;
	 Xx[12]=15;//coordenada x do monstro X1;
	 Xy[12]=14;//coordenada y do monstro X1;
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 //vidas dos monstros
	 
	 vidasX[0]=3;
	 vidasX[1]=3;
	 vidasX[2]=3;
	 vidasX[3]=3;
	 vidasX[4]=3;
	 vidasX[5]=3;
	 vidasX[6]=3;
	 vidasX[7]=3;
	 vidasX[8]=3;
	 vidasX[9]=3;
	 vidasX[10]=3;
	 vidasX[11]=3;
	 vidasX[12]=3;
	
		
		
		
	do{
		
		//vila
		
		if(renascer==1){
			
				char dungeon2[25][25]={{ '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' '},
									   { '*',' ','*',' ','X',' ',' ','*',' ',' ',' ',' ',' ',' ','#','@','*',' ',' ','*',' ',' ',' ',' ',' '},
								       { '*',' ','*',' ',' ','X',' ','*',' ','#','#','#','#',' ','#','D','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','*','*','*','*','*','#',' ','#','@',' ','#',' ','#',' ','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*','>','#','k','k','k','k','#',' ','#','#',' ','#',' ',' ',' ','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','k','k','k','#',' ',' ',' ',' ','#','#','#','#','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','#','#','#','*','#','#','#','#','*','*','*','*','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','k','k','k','*','*','*','*','*','*',' ',' ',' ','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','k','k','k','*',' ',' ',' ',' ',' ','X','X','X','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','#','#','#','k','*',' ',' ','X',' ',' ','X',' ',' ','*',' ',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','k','k','k','*',' ','X',' ',' ',' ','X',' ','@','*','*',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','k','K','#','*',' ',' ',' ','*','*','*','*','*','*','*',' ','*',' ',' ',' ',' ',' '},
									   { '*',' ','#','k','k','k','k','*',' ',' ',' ','*','X',' ',' ',' ','*','*',' ','*',' ',' ',' ',' ',' '},
									   { '*','O','#','k','k','X','k','*','*',' ','*','*',' ','L',' ',' ','*','*',' ','*',' ',' ',' ',' ',' '},
									   { '*','D','#','k','k','k','k','D',' ',' ',' ','D',' ',' ','X',' ','*',' ',' ',' ',' ',' ',' ',' ',' '},
									   { '*','O','#','@','k','k','k','*','#','#','#','*','X',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' '},
									   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									   { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
							   
							   
							   
		for(j=0;j<25;j++){
			
			for(i=0;i<25;i++){
				coordenadas[j][i]=dungeon2[j][i];
			}	
			
			
		}		   
							   
							   
						//coordenadas iniciais dos monstros
	 Xx[0]=4;//coordenada x do monstro X1;
	 Xy[0]=1;//coordenada y do monstro X1;
	 Xx[1]=5;//coordenada x do monstro X1;
	 Xy[1]=2;//coordenada y do monstro X1;
	 Xx[2]=5;//coordenada x do monstro X1;
	 Xy[2]=13;//coordenada y do monstro X1;
	 Xx[3]=9;//coordenada x do monstro X1;
	 Xy[3]=10;//coordenada y do monstro X1;
	 Xx[4]=10;//coordenada x do monstro X1;
	 Xy[4]=9;//coordenada y do monstro X1;
	 Xx[5]=12;//coordenada x do monstro X1;
	 Xy[5]=12;//coordenada y do monstro X1;
	 Xx[6]=12;//coordenada x do monstro X1;
	 Xy[6]=15;//coordenada y do monstro X1;
	 Xx[7]=13;//coordenada x do monstro X1;
	 Xy[7]=8;//coordenada y do monstro X1;
	 Xx[8]=13;//coordenada x do monstro X1;
	 Xy[8]=9;//coordenada y do monstro X1;
	 Xx[9]=13;//coordenada x do monstro X1;
	 Xy[9]=10;//coordenada y do monstro X1;
	 Xx[10]=14;//coordenada x do monstro X1;
	 Xy[10]=8;//coordenada y do monstro X1;
	 Xx[11]=15;//coordenada x do monstro X1;
	 Xy[11]=8;//coordenada y do monstro X1;
	 Xx[12]=15;//coordenada x do monstro X1;
	 Xy[12]=14;//coordenada y do monstro X1;
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 //vidas dos monstros
	 
	 vidasX[0]=3;
	 vidasX[1]=3;
	 vidasX[2]=3;
	 vidasX[3]=3;
	 vidasX[4]=3;
	 vidasX[5]=3;
	 vidasX[6]=3;
	 vidasX[7]=3;
	 vidasX[8]=3;
	 vidasX[9]=3;
	 vidasX[10]=3;
	 vidasX[11]=3;
	 vidasX[12]=3;			   
		
			//coordenadas iniciais dos monstros
	
		
	//	redefinindo checkpoint do personagem
			x=1;
			y=4;
			
			
			
			renascer=0;// para o jogador nao renascer toda hora
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//vila
		//Tela do terminal
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		for(j=0;j<=16;j++){
			
			for(i=0;i<=16;i++){
				printf(" %c",coordenadas[j][i]);
			}	
			
			printf("\n");
		}
		if(livro==1){
				printf("\nLivro: Aperte os botoes e desbloqueie novas areas.\n\n");
		}
	
		
		printf("\nVidas: %i\n\n",vidas);
		
		printf("i - interagir	o - atacar\n\n");
		
		
		
		//botao de interacao do usuario com o jogo
		char teclado;
		teclado=' ';
		teclado=getch();
		
		
		//chaves 1 especificas da fase 2
		if((y==13-1&&x==1||y==13+1&&x==1||y==13&&x==1-1||y==13&&x==1+1) && teclado=='i'&& coordenadas[13][1]=='O'){
			
			
			coordenadas[13][1]=' ';
			coordenadas[1][2]='k';
			coordenadas[2][2]='k';
			coordenadas[3][2]='k';
			coordenadas[3][3]='k';
			coordenadas[3][4]='k';
			coordenadas[3][5]='k';
			coordenadas[3][6]='k';
		}
		//chaves 2 especificas da fase 2
		if((y==15-1&&x==3||y==15+1&&x==3||y==15&&x==3-1||y==15&&x==3+1) && teclado=='i'&& coordenadas[15][3]=='@'){
			
			coordenadas[14][7]='=';
			coordenadas[15][3]=' ';
			
			
		}
		//chaves 3 especificas da fase 2
		if((y==10-1&&x==15||y==10+1&&x==15||y==10&&x==15-1||y==10&&x==15+1) && teclado=='i'&& coordenadas[10][15]=='@'){
			
			coordenadas[14][1]='=';
			coordenadas[10][15]=' ';
			
			
		}
		
		if((y==15-1&&x==1||y==15+1&&x==1||y==15&&x==1-1||y==15&&x==1+1) && teclado=='i'&& coordenadas[15][1]=='O'){
			
			coordenadas[1][7]='k';
			coordenadas[15][1]=' ';
				coordenadas[2][7]='k';
			
		}
		
		if((y==3-1&&x==10||y==3+1&&x==10||y==3&&x==10-1||y==3&&x==10+1) && teclado=='i'&& coordenadas[3][10]=='@'){
			
			coordenadas[2][15]='=';
			coordenadas[3][10]=' ';
			
			
		}
		
		
			if((y==1-1&&x==15||y==1+1&&x==15||y==1&&x==15-1||y==1&&x==15+1) && teclado=='i'&& coordenadas[1][15]=='@'){
			
			coordenadas[14][11]='=';
			coordenadas[1][15]=' ';
			
			
		}
		
		
		
		
		
		//arma 
		
		//espada
		for(c=0;c<=n;c++){//contador de monstros
		
			if(arma==1&& teclado=='o'){
			
			if(coordenadas[y][x]=='^'){
				
				for(io=-1;io<=1;io++){
					
					for(jo=-1;jo>=-2;jo--){
							
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						}
								
							// quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							//dano ao y1
							
							
						}	
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}	

					}
						
					
				}
				
				
				
			}
			
			if(coordenadas[y][x]=='>'){
				
				for(io=1;io<=2;io++){
					
					for(jo=-1;jo<=1;jo++){
							
							
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}	
							
							
						//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
								vidasX[c]--;
								printf("acertouuuuuuuuuuu");
							}
						
						//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
						
						
						
						
						//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
						
					}
				
				}
			
			}
			
			
			
			if(coordenadas[y][x]=='<'){
			
				for(io=-1;io>=-2;io--){
					
					for(jo=-1;jo<=1;jo++){
						
						
						
						
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
						
							
						//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
								vidasX[c]--;
								printf("acertouuuuuuuuuuu");
							}
						
						//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
						
						
						
							//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
						
						
						
					}
				
				}
				
			}
			
			
			if(coordenadas[y][x]=='v'){
				
			
				for(io=-1;io<=1;io++){
					
					for(jo=1;jo<=2;jo++){
					
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
					
					
					
						//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
								vidasX[c]--;
								printf("acertouuuuuuuuuuu");
							}
					
					//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
					
					
						//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
					
					
					
					
					
					
					}
				
				}
			
			}
			
			
			
			
		
		
		
		}//fim espada
		else if(arma==2&& teclado=='o'){//arco e fecha
		
			
		
			if(coordenadas[y][x]=='^'){
				
				
					
					for(jo=-1;jo>=-4;jo--){
							
						io=0;//para que o programa nao bugue com lixo de memoria
						
						if(coordenadas[y+jo][x]=='*'||coordenadas[y+jo][x]=='#'){
							break;
						}
						
						
					
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
								
								//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}	
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
							
						
					
				
				
				
			}
			
			if(coordenadas[y][x]=='>'){
				
				
					
					for(io=1;io<=4;io++){
							
							jo=0;//para que o programa nao bugue com lixo de memoria
					
						if(coordenadas[y][x+io]=='*'||coordenadas[y][x+io]=='#'){
							break;
						}
						
							
						
								
							//para dar dano no X1
						if(y==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
								//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}

					}
						
					
				
				
				
				
			}
		
		
			if(coordenadas[y][x]=='<'){
				
				
					
					for(io=-1;io>=-4;io--){
							
							jo=0;//para que o programa nao bugue com lixo de memoria
					
						if(coordenadas[y][x+io]=='*'||coordenadas[y][x+io]=='#'){
							break;
						}
						
					
						
								
							//para dar dano no X1
						if(y==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
									//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
						
					
				
				
				
				
			}
		
			
			if(coordenadas[y][x]=='v'){
				
				
					
					for(jo=1;jo<=4;jo++){
							
						io=0;//para que o programa nao bugue com lixo de memoria
							
						if(coordenadas[y+jo][x]=='*'||coordenadas[y+jo][x]=='#'){
							break;
						}
						
					
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
								
								
								//dano nas caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
							
						
					
				
				
				
			}
			
			
			
			
			
		
		
		
		
		
		}//fim arco e fecha
		
		
		else if(arma==3&& teclado=='o'){//cajado
			
		
				
				for(io=-1;io<=1;io++){
					
					for(jo=-1;jo<=1;jo++){
							
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						}
								
									//dano nas caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}		
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
						
					
				}
			
				
				
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		}
		
		
		
		
		
		
		for(c=0;c<=n;c++){//laco de repeticao de numero de monstros
		
		
		
			//X1
				
				//X1 variavel principal
				randomX1= rand() % 4+1;
				
				
				
				
				
				if(vidasX[c]<=0){//fazer o monstro sumir ao final das vidas
					coordenadas[Xy[c]][Xx[c]]=' ';
				}
		
			if(vidasX[c]>0){//contador de vidas
				
				
				
				
				
				
				
				
				
					//paredes para o X1 && caixas
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='*'||randomX1==1&&coordenadas[Xy[c]][Xx[c]+1]=='k'||randomX1==1&&coordenadas[Xy[c]][Xx[c]+1]=='X'||randomX1==1&&coordenadas[Xy[c]][Xx[c]+1]=='Y'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='*'||randomX1==2&&coordenadas[Xy[c]][Xx[c]-1]=='k'||randomX1==1&&coordenadas[Xy[c]][Xx[c]-1]=='X'||randomX1==1&&coordenadas[Xy[c]][Xx[c]-1]=='Y'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='*'||randomX1==3&&coordenadas[Xy[c]-1][Xx[c]]=='k'||randomX1==1&&coordenadas[Xy[c]-1][Xx[c]]=='X'||randomX1==1&&coordenadas[Xy[c]-1][Xx[c]]=='Y'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='*'||randomX1==4&&coordenadas[Xy[c]+1][Xx[c]]=='k'||randomX1==1&&coordenadas[Xy[c]+1][Xx[c]]=='X'||randomX1==1&&coordenadas[Xy[c]+1][Xx[c]]=='Y'){
					
					randomX1=0;
				
				
				}
				
				//espinhos para o x1
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='#'){
					
					randomX1=0;
					vidasX[c]--;
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='#'){
					
					randomX1=0;
					vidasX[c]--;
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='#'){
					
					randomX1=0;
					vidasX[c]--;
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='#'){
					
					randomX1=0;
					vidasX[c]--;
				
				}
				
				
				//escadas
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='L'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='L'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='L'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='L'){
					
					randomX1=0;
				
				
				}
				
				
					//chaves
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='@'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='@'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='@'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='@'){
					
					randomX1=0;
				
				
				}
				
				
					//escadas
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='O'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='O'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='O'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='O'){
					
					randomX1=0;
				
				
				}
				
				
					//escadas
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='D'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='D'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='D'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='D'){
					
					randomX1=0;
				
				
				}
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				//colisao do X1 com o personagem 
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
				
				}
				
				
				
				
				
				
				
				
				
				//inteligencia do X1
				
				
				
				
				if(randomX1==1){
					Xx[c]++;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]][Xx[c]-1]=' ';
				}
				
				if(randomX1==2){
					Xx[c]--;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]][Xx[c]+1]=' ';
				}
			
				if(randomX1==3){
					Xy[c]--;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]+1][Xx[c]]=' ';
				}
		    
				if(randomX1==4){
					Xy[c]++;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]-1][Xx[c]]=' ';
				}
				
				
				
				
				
				
			
			
			}//fim vidas x1
			
			
			
			
			
			
			
			//Y1
			
			if(vidasY[c]>0){
				
				
				for(j=0;j<10;j++){
				
					for(i=0;i<20;i++){
						
						
						
						
						//movimentação do Y1d
						
						
						
						//barramento de movimento
						//movimentoY1
						 
						
							
						
						
						//movimentoy do y1 do y1
							if(coordenadas[j][i]=='v'&&j!=Yy[c]||coordenadas[j][i]=='<'&&j!=Yy[c]||coordenadas[j][i]=='>'&&j!=Yy[c]||coordenadas[j][i]=='^'&&j!=Yy[c]){
									
								if(j<Yy[c]&&coordenadas[Yy[c]-1][Yx[c]]!='*'&&coordenadas[Yy[c]-1][Yx[c]]!='#'&&coordenadas[Yy[c]-1][Yx[c]]!='k'&&coordenadas[Yy[c]-1][Yx[c]]!='^'&&coordenadas[Yy[c]-1][Yx[c]]!='<'&&coordenadas[Yy[c]-1][Yx[c]]!='>'&&coordenadas[Yy[c]-1][Yx[c]]!='v'&&coordenadas[Yy[c]-1][Yx[c]]!='Y'&&coordenadas[Yy[c]-1][Yx[c]]!='X'){
									Yy[c]--;
									coordenadas[Yy[c]+1][Yx[c]]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
								
								
								if(j>Yy[c]&&coordenadas[Yy[c]+1][Yx[c]]!='*'&&coordenadas[Yy[c]+1][Yx[c]]!='#'&&coordenadas[Yy[c]+1][Yx[c]]!='k'&&coordenadas[Yy[c]+1][Yx[c]]!='^'&&coordenadas[Yy[c]+1][Yx[c]]!='<'&&coordenadas[Yy[c]+1][Yx[c]]!='>'&&coordenadas[Yy[c]+1][Yx[c]]!='v'&&coordenadas[Yy[c]+1][Yx[c]]!='Y'&&coordenadas[Yy[c]+1][Yx[c]]!='X'){
									Yy[c]++;
									coordenadas[Yy[c]-1][Yx[c]]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
									
							}//fim movimento y
							
								//movimento x do y1
							if(coordenadas[j][i]=='v'&&j==Yy[c]||coordenadas[j][i]=='<'&&j==Yy[c]||coordenadas[j][i]=='>'&&j==Yy[c]||coordenadas[j][i]=='^'&&j==Yy[c]){
								
								if(i<Yx[c]&&coordenadas[Yy[c]][Yx[c]-1]!='*'&&coordenadas[Yy[c]][Yx[c]-1]!='#'&&coordenadas[Yy[c]][Yx[c]-1]!='k'&&coordenadas[Yy[c]][Yx[c]-1]!='^'&&coordenadas[Yy[c]][Yx[c]-1]!='<'&&coordenadas[Yy[c]][Yx[c]-1]!='>'&&coordenadas[Yy[c]][Yx[c]-1]!='v'&&coordenadas[Yy[c]][Yx[c]-1]!='Y'&&coordenadas[Yy[c]][Yx[c]-1]!='X'){
									Yx[c]--;
									coordenadas[Yy[c]][Yx[c]+1]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
								if(i>Yx[c]&&coordenadas[Yy[c]][Yx[c]+1]!='*'&&coordenadas[Yy[c]][Yx[c]+1]!='k'&&coordenadas[Yy[c]][Yx[c]+1]!='#'&&coordenadas[Yy[c]][Yx[c]+1]!='^'&&coordenadas[Yy[c]][Yx[c]+1]!='<'&&coordenadas[Yy[c]][Yx[c]+1]!='>'&&coordenadas[Yy[c]][Yx[c]+1]!='v'&&coordenadas[Yy[c]][Yx[c]+1]!='Y'&&coordenadas[Yy[c]][Yx[c]+1]!='X'){
									Yx[c]++;
									coordenadas[Yy[c]][Yx[c]-1]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
								
								//dano de espinhos ao Y1
								
							}//fim movimento y do y1
										
										
										
										
									
								if(j<Yy[c]&&coordenadas[Yy[c]-1][Yx[c]]=='#'){
									vidasY[c]--;
										
								}
								
								
								if(j>Yy[c]&&coordenadas[Yy[c]+1][Yx[c]]=='#'){
									vidasY[c]--;
										
								}
								
								
								if(i<Yx[c]&&coordenadas[Yy[c]][Yx[c]-1]=='#'){
									vidasY[c]--;
										
								}
								
								
								if(i>Yx[c]&&coordenadas[Yy[c]][Yx[c]+1]=='#'){
									vidasY[c]--;
										
								}		
										
								//dano do monstro no personagem
								
								if(j<Yy[c]&&(coordenadas[Yy[c]-1][Yx[c]]=='^'||coordenadas[Yy[c]-1][Yx[c]]=='<'||coordenadas[Yy[c]-1][Yx[c]]=='>'||coordenadas[Yy[c]-1][Yx[c]]=='v')){
									vidas--;
										
								}	
										
								if(j>Yy[c]&&(coordenadas[Yy[c]+1][Yx[c]]=='^'||coordenadas[Yy[c]+1][Yx[c]]=='<'||coordenadas[Yy[c]+1][Yx[c]]=='>'||coordenadas[Yy[c]+1][Yx[c]]=='v')){
									vidas--;
										
								}		
								
								
								if(i<Yy[c]&&(coordenadas[Yy[c]][Yx[c]-1]=='^'||coordenadas[Yy[c]][Yx[c]-1]=='<'||coordenadas[Yy[c]][Yx[c]-1]=='>'||coordenadas[Yy[c]][Yx[c]-1]=='v')){
									vidas--;
										
								}	
								
								
								if(i>Yy[c]&&(coordenadas[Yy[c]][Yx[c]+1]=='^'||coordenadas[Yy[c]][Yx[c]+1]=='<'||coordenadas[Yy[c]][Yx[c]+1]=='>'||coordenadas[Yy[c]][Yx[c]+1]=='v')){
									vidas--;
										
								}	
								
								
								
								
								
								
								
								
								
								
								
								
									
										
					}//for2
				
				//morte Y1
				
				
							
						
				}//for1
				
				
				
			}//vidas y1
			
			
			if(vidasY[c]<=0){
					coordenadas[Yy[c]][Yx[c]]=' ';
					
					
					
					}
		
			
			
			//fim Y1
		}//for do contador
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//personagem
		
		
		
		
		//codigo de impedimento de movimento por paredes ou caixa do personagem
		if(teclado=='d'&& coordenadas[y][x+1]=='*'||teclado=='d'&& coordenadas[y][x+1]=='k'){
			
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='*'||teclado=='a'&& coordenadas[y][x-1]=='k'){
				
			coordenadas[y][x]='<';
			teclado=' ';
			
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='*'||teclado=='w'&& coordenadas[y-1][x]=='k'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='*'||teclado=='s'&& coordenadas[y+1][x]=='k'){
				
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		//espinhos (perca de vidas e impedimento'parede')
		if(teclado=='d'&& coordenadas[y][x+1]=='#'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='#'){
			
			coordenadas[y][x]='<';
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='#'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='#'){
		
			coordenadas[y][x]='v';
			teclado=' ';
			vidas--;
			
		}
		
		//impedimento de passagem pelo npc e pela chave
		
		if(teclado=='d'&& coordenadas[y][x+1]=='0'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='0'){
				
			coordenadas[y][x]='<';
			teclado=' ';
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='0'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='0'){
			
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		
	//impedimento de passagem por portas fechadas
		if(teclado=='d'&& coordenadas[y][x+1]=='D'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='D'){
			
			coordenadas[y][x]='<';
			teclado=' ';
			
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='D'){
				
			coordenadas[y][x]='^';
			teclado=' ';
		
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='D'){
		
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		
		
		//chaves
		
	
		if(teclado=='d'&& coordenadas[y][x+1]=='@'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='@'){
			
			coordenadas[y][x]='<';
			teclado=' ';
			
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='@'){
				
			coordenadas[y][x]='^';
			teclado=' ';
		
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='@'){
		
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//Dano do personagem com X
		if(teclado=='d'&& coordenadas[y][x+1]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		
		
		
		//Dano do personagem com Y
		if(teclado=='d'&& coordenadas[y][x+1]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		
		
		
		
		//Escada
		
		if(teclado=='d'&& coordenadas[y][x+1]=='L'){
			
			fase++;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='L'){
			
			fase++;
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='L'){
			
			fase++;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='L'){
			
			fase++;
			
		}
		
		
			
		//Botao
		
		if(teclado=='d'&& coordenadas[y][x+1]=='O'){
			
			teclado=' ';
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='O'){
			
			teclado=' ';
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='O'){
			teclado=' ';
		
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='O'){
			teclado=' ';
		
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//movimento do personagem
		if(teclado=='d'){
			x++;
			coordenadas[y][x]='>';
			coordenadas[y][x-1]=' ';
		}
		
		if(teclado=='a'){
			x--;
			coordenadas[y][x]='<';
			coordenadas[y][x+1]=' ';
		}
	
		if(teclado=='w'){
			y--;
			coordenadas[y][x]='^';
			coordenadas[y+1][x]=' ';
		}
    
		if(teclado=='s'){
			y++;
			coordenadas[y][x]='v';
			coordenadas[y-1][x]=' ';
		}
		
		
		
		
		
		
		
			
			
			
			
			
			
			
			
			
			
			
			
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		if(contadorvidas!=vidas){
			
			renascer=1;
			contadorvidas=vidas;
			
			
		}
		
		
		
		
	
		
	
		//limpando a tela
		system("cls");
		
		
		
		
	}while(fase==2&&vidas>0||renascer>0);
	
	
	
	
	
	
		}//if fase 2 masmorra
		

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//fase 3 da masmorra
		
		
		if(fase==3){
			system("cls");
		//laço de repetição de turnos
		//	redefinindo checkpoint do personagem
			x=1;
			y=4;
			n=13;//total de monstros
			char dungeon3[26][26]={    { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
									   { '*',' ','D','K',' ',' ',' ','K','K','@','*','N',' ','L','*',' ',' ',' ',' ',' ','O',' ',' ',' ',' ','*'},
								       { '*',' ','*','K','K',' ',' ',' ','K','K','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*','K',' ',' ',' ',' ',' ','K','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ','X',' ',' ',' ',' ','#','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','Y',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*','*','*','*','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ','#',' ','*',' ',' ',' ',' ',' ','Z',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*',' ','@',' ','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*','*','*','*','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','X',' ',' ',' ',' ','Y',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*','Y','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','*','*','*','*','*','D','*','*'},
									   { '*',' ','*',' ','Y',' ',' ',' ',' ',' ','X',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ','#','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D',' ','#',' ','#',' ','#',' ','#',' ','#','*'},
									   { '*','@','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','O','#',' ','#',' ',' ',' ','#',' ',' ',' ','#','*'},
									   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}};
							   
							   
							   
		for(j=0;j<26;j++){
			
			for(i=0;i<26;i++){
				coordenadas[j][i]=dungeon3[j][i];
			}	
			
			
		}		   
							   
							   
							   
		
			//coordenadas iniciais dos monstros
	 Xx[0]=5;//coordenada x do monstro X1;
	 Xy[0]=19;//coordenada y do monstro X1;
	 Xx[1]=6;//coordenada x do monstro X1;
	 Xy[1]=8;//coordenada y do monstro X1;
	 Xx[2]=10;//coordenada x do monstro X1;
	 Xy[2]=22;//coordenada y do monstro X1;
	 Yx[0]=1;//coordenada x do monstro X1;
	 Yy[0]=20;//coordenada y do monstro X1;
	 Yx[1]=4;//coordenada x do monstro X1;
	 Yy[1]=22;//coordenada y do monstro X1;
	 Yx[2]=11;//coordenada x do monstro X1;
	 Yy[2]=7;//coordenada y do monstro X1;
	 Yx[3]=10;//coordenada x do monstro X1;
	 Yy[3]=19;//coordenada y do monstro X1;
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 //vidas dos monstros
	 
	 vidasX[0]=3;
	 vidasX[1]=3;
	 vidasX[2]=3;
	 vidasY[0]=1;
	 vidasY[1]=1;
	 vidasY[2]=1;
	 vidasY[3]=1;
	
	do{
		
		//vila
		
		if(renascer==1){
			
				char dungeon3[26][26]={{ '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
									   { '*',' ','D','K',' ',' ',' ','K','K','@','*','N',' ','L','*',' ',' ',' ',' ',' ','O',' ',' ',' ',' ','*'},
								       { '*',' ','*','K','K',' ',' ',' ','K','K','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*','K',' ',' ',' ',' ',' ','K','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*','>','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ','X',' ',' ',' ',' ','#','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','Y',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*','*','*','*','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ','#',' ','*',' ',' ',' ',' ',' ','Z',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*',' ','@',' ','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','*','*','*','*','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ','X',' ',' ',' ',' ','Y',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*','Y','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','*','*','*','*','*','D','*','*'},
									   { '*',' ','*',' ','Y',' ',' ',' ',' ',' ','X',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ','#','*'},
									   { '*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D',' ','#',' ','#',' ','#',' ','#',' ','#','*'},
									   { '*','@','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','O','#',' ','#',' ',' ',' ','#',' ',' ',' ','#','*'},
									   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}};
							   
							   
							   
		for(j=0;j<26;j++){
			
			for(i=0;i<26;i++){
				coordenadas[j][i]=dungeon3[j][i];
			}	
			
			
		}		   
							   
							   
						//coordenadas iniciais dos monstros
			//coordenadas iniciais dos monstros
	 Xx[0]=5;//coordenada x do monstro X1;
	 Xy[0]=19;//coordenada y do monstro X1;
	 Xx[1]=6;//coordenada x do monstro X1;
	 Xy[1]=8;//coordenada y do monstro X1;
	 Xx[2]=10;//coordenada x do monstro X1;
	 Xy[2]=22;//coordenada y do monstro X1;
	 Yx[0]=1;//coordenada x do monstro X1;
	 Yy[0]=20;//coordenada y do monstro X1;
	 Yx[1]=4;//coordenada x do monstro X1;
	 Yy[1]=22;//coordenada y do monstro X1;
	 Yx[2]=11;//coordenada x do monstro X1;
	 Yy[2]=7;//coordenada y do monstro X1;
	 Yx[3]=10;//coordenada x do monstro X1;
	 Yy[3]=19;//coordenada y do monstro X1;
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 //vidas dos monstros
	 
	 vidasX[0]=3;
	 vidasX[1]=3;
	 vidasX[2]=3;
	 vidasY[0]=1;
	 vidasY[1]=1;
	 vidasY[2]=1;
	 vidasY[3]=1;
	
	
		
	//	redefinindo checkpoint do personagem
			x=1;
			y=4;
			
			
			
			renascer=0;// para o jogador nao renascer toda hora
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//vila
		//Tela do terminal
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		for(j=0;j<26;j++){
			
			for(i=0;i<26;i++){
				printf(" %c",coordenadas[j][i]);
			}	
			
			printf("\n");
		}
		if(livro==1){
				printf("\nLivro: Os mais poderosos ficam no ultimo andar...\n\n");
		}
	
		
		printf("\nVidas: %i\n\n",vidas);
		
		printf("i - interagir	o - atacar\n\n");
		
		
		
		//botao de interacao do usuario com o jogo
		char teclado;
		teclado=' ';
		teclado=getch();
		
		
		//chaves 1 especificas da fase 2
		if((y==25-1&&x==1||y==25+1&&x==1||y==25&&x==1-1||y==25&&x==1+1) && teclado=='i'&& coordenadas[25][1]=='@'){
			
			
			coordenadas[25][1]=' ';
			coordenadas[1][2]='=';
			
			
			
		}
		//chaves 2 especificas da fase 2
		if((y==25-1&&x==13||y==25+1&&x==13||y==25&&x==13-1||y==25&&x==13+1) && teclado=='i'&& coordenadas[25][13]=='O'){
			
			coordenadas[9][7]='k';
			coordenadas[25][13]=' ';
			
			
		}
		//chaves 3 especificas da fase 2
		if((y==12-1&&x==7||y==12+1&&x==7||y==12&&x==7-1||y==12&&x==7+1) && teclado=='i'&& coordenadas[12][7]=='@'){
			
			coordenadas[24][14]='=';
			coordenadas[12][7]=' ';
			
			
		}
		
		if((y==1-1&&x==9||y==1+1&&x==9||y==1&&x==9-1||y==1&&x==9+1) && teclado=='i'&& coordenadas[1][9]=='@'){
			
			coordenadas[21][24]='=';
			coordenadas[1][9]=' ';
			
			
		}
		
			if((y==1-1&&x==21||y==1+1&&x==21||y==1&&x==21-1||y==1&&x==21+1) && teclado=='i'&& coordenadas[1][21]=='O'){
			
			coordenadas[5][12]='k';
			coordenadas[1][21]=' ';
			
			
		}
		
		
		
		
		//arma 
		
		//espada
		for(c=0;c<=n;c++){//contador de monstros
		
			if(arma==1&& teclado=='o'){
			
			if(coordenadas[y][x]=='^'){
				
				for(io=-1;io<=1;io++){
					
					for(jo=-1;jo>=-2;jo--){
							
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						}
								
							// quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							//dano ao y1
							
							
						}	
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}	

					}
						
					
				}
				
				
				
			}
			
			if(coordenadas[y][x]=='>'){
				
				for(io=1;io<=2;io++){
					
					for(jo=-1;jo<=1;jo++){
							
							
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}	
							
							
						//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
								vidasX[c]--;
								printf("acertouuuuuuuuuuu");
							}
						
						//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
						
						
						
						
						//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
						
					}
				
				}
			
			}
			
			
			
			if(coordenadas[y][x]=='<'){
			
				for(io=-1;io>=-2;io--){
					
					for(jo=-1;jo<=1;jo++){
						
						
						
						
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
						
							
						//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
								vidasX[c]--;
								printf("acertouuuuuuuuuuu");
							}
						
						//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
						
						
						
							//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
						
						
						
					}
				
				}
				
			}
			
			
			if(coordenadas[y][x]=='v'){
				
			
				for(io=-1;io<=1;io++){
					
					for(jo=1;jo<=2;jo++){
					
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
					
					
					
						//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
								vidasX[c]--;
								printf("acertouuuuuuuuuuu");
							}
					
					//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
					
					
						//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
					
					
					
					
					
					
					}
				
				}
			
			}
			
			
			
			
		
		
		
		}//fim espada
		else if(arma==2&& teclado=='o'){//arco e fecha
		
			
		
			if(coordenadas[y][x]=='^'){
				
				
					
					for(jo=-1;jo>=-4;jo--){
							
						io=0;//para que o programa nao bugue com lixo de memoria
						
						if(coordenadas[y+jo][x]=='*'||coordenadas[y+jo][x]=='#'){
							break;
						}
						
						
					
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
								
								//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}	
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
							
						
					
				
				
				
			}
			
			if(coordenadas[y][x]=='>'){
				
				
					
					for(io=1;io<=4;io++){
							
							jo=0;//para que o programa nao bugue com lixo de memoria
					
						if(coordenadas[y][x+io]=='*'||coordenadas[y][x+io]=='#'){
							break;
						}
						
							
						
								
							//para dar dano no X1
						if(y==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
								//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}

					}
						
					
				
				
				
				
			}
		
		
			if(coordenadas[y][x]=='<'){
				
				
					
					for(io=-1;io>=-4;io--){
							
							jo=0;//para que o programa nao bugue com lixo de memoria
					
						if(coordenadas[y][x+io]=='*'||coordenadas[y][x+io]=='#'){
							break;
						}
						
					
						
								
							//para dar dano no X1
						if(y==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
									//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
						
					
				
				
				
				
			}
		
			
			if(coordenadas[y][x]=='v'){
				
				
					
					for(jo=1;jo<=4;jo++){
							
						io=0;//para que o programa nao bugue com lixo de memoria
							
						if(coordenadas[y+jo][x]=='*'||coordenadas[y+jo][x]=='#'){
							break;
						}
						
					
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						
						}
								
								
								//dano nas caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
							
						
					
				
				
				
			}
			
			
			
			
			
		
		
		
		
		
		}//fim arco e fecha
		
		
		else if(arma==3&& teclado=='o'){//cajado
			
		
				
				for(io=-1;io<=1;io++){
					
					for(jo=-1;jo<=1;jo++){
							
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
								
							//para dar dano no X1
						if(y+jo==Xy[c] && x+io==Xx[c]){
							vidasX[c]--;
							printf("acertouuuuuuuuuuu");
						}
								
									//dano nas caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}		
							
								//dano ao y1
						if(y+jo==Yy[c] && x+io==Yx[c]){
							vidasY[c]--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
						
					
				}
			
				
				
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		}
		
		
		
		
		
		
		for(c=0;c<=n;c++){//laco de repeticao de numero de monstros
		
		
		
			//X1
				
				//X1 variavel principal
				randomX1= rand() % 4+1;
				
				
				
				
				
				if(vidasX[c]<=0){//fazer o monstro sumir ao final das vidas
					coordenadas[Xy[c]][Xx[c]]=' ';
				}
		
			if(vidasX[c]>0){//contador de vidas
				
				
				
				
				
				
				
				
				
					//paredes para o X1 && caixas
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='*'||randomX1==1&&coordenadas[Xy[c]][Xx[c]+1]=='k'||randomX1==1&&coordenadas[Xy[c]][Xx[c]+1]=='X'||randomX1==1&&coordenadas[Xy[c]][Xx[c]+1]=='Y'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='*'||randomX1==2&&coordenadas[Xy[c]][Xx[c]-1]=='k'||randomX1==1&&coordenadas[Xy[c]][Xx[c]-1]=='X'||randomX1==1&&coordenadas[Xy[c]][Xx[c]-1]=='Y'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='*'||randomX1==3&&coordenadas[Xy[c]-1][Xx[c]]=='k'||randomX1==1&&coordenadas[Xy[c]-1][Xx[c]]=='X'||randomX1==1&&coordenadas[Xy[c]-1][Xx[c]]=='Y'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='*'||randomX1==4&&coordenadas[Xy[c]+1][Xx[c]]=='k'||randomX1==1&&coordenadas[Xy[c]+1][Xx[c]]=='X'||randomX1==1&&coordenadas[Xy[c]+1][Xx[c]]=='Y'){
					
					randomX1=0;
				
				
				}
				
				//espinhos para o x1
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='#'){
					
					randomX1=0;
					vidasX[c]--;
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='#'){
					
					randomX1=0;
					vidasX[c]--;
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='#'){
					
					randomX1=0;
					vidasX[c]--;
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='#'){
					
					randomX1=0;
					vidasX[c]--;
				
				}
				
				
				//escadas
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='L'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='L'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='L'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='L'){
					
					randomX1=0;
				
				
				}
				
				
					//chaves
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='@'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='@'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='@'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='@'){
					
					randomX1=0;
				
				
				}
				
				
					//escadas
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='O'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='O'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='O'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='O'){
					
					randomX1=0;
				
				
				}
				
				
					//escadas
				
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='D'){
					
					randomX1=0;
					
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='D'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='D'){
					
					randomX1=0;
				
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='D'){
					
					randomX1=0;
				
				
				}
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				//colisao do X1 com o personagem 
				if(randomX1==1&& coordenadas[Xy[c]][Xx[c]+1]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
					
				}
				else if(randomX1==2&& coordenadas[Xy[c]][Xx[c]-1]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
					
				}
				else if(randomX1==3&& coordenadas[Xy[c]-1][Xx[c]]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
					
				}
				else if(randomX1==4&& coordenadas[Xy[c]+1][Xx[c]]=='^'||coordenadas[Xy[c]][Xx[c]+1]=='>'||coordenadas[Xy[c]][Xx[c]+1]=='<'||coordenadas[Xy[c]][Xx[c]+1]=='v'){
					
					randomX1=0;
					vidas--;
				
				}
				
				
				
				
				
				
				
				
				
				//inteligencia do X1
				
				
				
				
				if(randomX1==1){
					Xx[c]++;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]][Xx[c]-1]=' ';
				}
				
				if(randomX1==2){
					Xx[c]--;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]][Xx[c]+1]=' ';
				}
			
				if(randomX1==3){
					Xy[c]--;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]+1][Xx[c]]=' ';
				}
		    
				if(randomX1==4){
					Xy[c]++;
					coordenadas[Xy[c]][Xx[c]]='X';
					coordenadas[Xy[c]-1][Xx[c]]=' ';
				}
				
				
				
				
				
				
			
			
			}//fim vidas x1
			
			
			
			
			
			
			
			//Y1
			
			if(vidasY[c]>0){
				
				
				for(j=0;j<10;j++){
				
					for(i=0;i<20;i++){
						
						
						
						
						//movimentação do Y1d
						
						
						
						//barramento de movimento
						//movimentoY1
						 
						
							
						
						
						//movimentoy do y1 do y1
							if(coordenadas[j][i]=='v'&&j!=Yy[c]||coordenadas[j][i]=='<'&&j!=Yy[c]||coordenadas[j][i]=='>'&&j!=Yy[c]||coordenadas[j][i]=='^'&&j!=Yy[c]){
									
								if(j<Yy[c]&&coordenadas[Yy[c]-1][Yx[c]]!='*'&&coordenadas[Yy[c]-1][Yx[c]]!='#'&&coordenadas[Yy[c]-1][Yx[c]]!='k'&&coordenadas[Yy[c]-1][Yx[c]]!='^'&&coordenadas[Yy[c]-1][Yx[c]]!='<'&&coordenadas[Yy[c]-1][Yx[c]]!='>'&&coordenadas[Yy[c]-1][Yx[c]]!='v'&&coordenadas[Yy[c]-1][Yx[c]]!='Y'&&coordenadas[Yy[c]-1][Yx[c]]!='X'){
									Yy[c]--;
									coordenadas[Yy[c]+1][Yx[c]]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
								
								
								if(j>Yy[c]&&coordenadas[Yy[c]+1][Yx[c]]!='*'&&coordenadas[Yy[c]+1][Yx[c]]!='#'&&coordenadas[Yy[c]+1][Yx[c]]!='k'&&coordenadas[Yy[c]+1][Yx[c]]!='^'&&coordenadas[Yy[c]+1][Yx[c]]!='<'&&coordenadas[Yy[c]+1][Yx[c]]!='>'&&coordenadas[Yy[c]+1][Yx[c]]!='v'&&coordenadas[Yy[c]+1][Yx[c]]!='Y'&&coordenadas[Yy[c]+1][Yx[c]]!='X'){
									Yy[c]++;
									coordenadas[Yy[c]-1][Yx[c]]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
									
							}//fim movimento y
							
								//movimento x do y1
							if(coordenadas[j][i]=='v'&&j==Yy[c]||coordenadas[j][i]=='<'&&j==Yy[c]||coordenadas[j][i]=='>'&&j==Yy[c]||coordenadas[j][i]=='^'&&j==Yy[c]){
								
								if(i<Yx[c]&&coordenadas[Yy[c]][Yx[c]-1]!='*'&&coordenadas[Yy[c]][Yx[c]-1]!='#'&&coordenadas[Yy[c]][Yx[c]-1]!='k'&&coordenadas[Yy[c]][Yx[c]-1]!='^'&&coordenadas[Yy[c]][Yx[c]-1]!='<'&&coordenadas[Yy[c]][Yx[c]-1]!='>'&&coordenadas[Yy[c]][Yx[c]-1]!='v'&&coordenadas[Yy[c]][Yx[c]-1]!='Y'&&coordenadas[Yy[c]][Yx[c]-1]!='X'){
									Yx[c]--;
									coordenadas[Yy[c]][Yx[c]+1]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
								if(i>Yx[c]&&coordenadas[Yy[c]][Yx[c]+1]!='*'&&coordenadas[Yy[c]][Yx[c]+1]!='k'&&coordenadas[Yy[c]][Yx[c]+1]!='#'&&coordenadas[Yy[c]][Yx[c]+1]!='^'&&coordenadas[Yy[c]][Yx[c]+1]!='<'&&coordenadas[Yy[c]][Yx[c]+1]!='>'&&coordenadas[Yy[c]][Yx[c]+1]!='v'&&coordenadas[Yy[c]][Yx[c]+1]!='Y'&&coordenadas[Yy[c]][Yx[c]+1]!='X'){
									Yx[c]++;
									coordenadas[Yy[c]][Yx[c]-1]=' ';
									coordenadas[Yy[c]][Yx[c]]='Y';
										
								}
								
								
								//dano de espinhos ao Y1
								
							}//fim movimento y do y1
										
										
										
										
									
								if(j<Yy[c]&&coordenadas[Yy[c]-1][Yx[c]]=='#'){
									vidasY[c]--;
										
								}
								
								
								if(j>Yy[c]&&coordenadas[Yy[c]+1][Yx[c]]=='#'){
									vidasY[c]--;
										
								}
								
								
								if(i<Yx[c]&&coordenadas[Yy[c]][Yx[c]-1]=='#'){
									vidasY[c]--;
										
								}
								
								
								if(i>Yx[c]&&coordenadas[Yy[c]][Yx[c]+1]=='#'){
									vidasY[c]--;
										
								}		
										
								//dano do monstro no personagem
								
								if(j<Yy[c]&&(coordenadas[Yy[c]-1][Yx[c]]=='^'||coordenadas[Yy[c]-1][Yx[c]]=='<'||coordenadas[Yy[c]-1][Yx[c]]=='>'||coordenadas[Yy[c]-1][Yx[c]]=='v')){
									vidas--;
										
								}	
										
								if(j>Yy[c]&&(coordenadas[Yy[c]+1][Yx[c]]=='^'||coordenadas[Yy[c]+1][Yx[c]]=='<'||coordenadas[Yy[c]+1][Yx[c]]=='>'||coordenadas[Yy[c]+1][Yx[c]]=='v')){
									vidas--;
										
								}		
								
								
								if(i<Yy[c]&&(coordenadas[Yy[c]][Yx[c]-1]=='^'||coordenadas[Yy[c]][Yx[c]-1]=='<'||coordenadas[Yy[c]][Yx[c]-1]=='>'||coordenadas[Yy[c]][Yx[c]-1]=='v')){
									vidas--;
										
								}	
								
								
								if(i>Yy[c]&&(coordenadas[Yy[c]][Yx[c]+1]=='^'||coordenadas[Yy[c]][Yx[c]+1]=='<'||coordenadas[Yy[c]][Yx[c]+1]=='>'||coordenadas[Yy[c]][Yx[c]+1]=='v')){
									vidas--;
										
								}	
								
								
								
								
								
								
								
								
								
								
								
								
									
										
					}//for2
				
				//morte Y1
				
				
							
						
				}//for1
				
				
				
			}//vidas y1
			
			
			
			
			
			
			
		
			if(vidasY[c]<=0){
					coordenadas[Yy[c]][Yx[c]]=' ';
					
					
					
					}
		
			
			
			//fim Y1
		}//for do contador
		
		
		
		
		//z boss
		
		
		
		for(c=0;c<=n;c++){//laco de repeticao de numero de monstros
		
		
		
			//X1
				
				//X1 variavel principal
				randomZ1= rand() % 4+1;
				
				
				
				
				
				if(vidasZ[c]<=0){//fazer o monstro sumir ao final das vidas
					coordenadas[Zy[c]][Zx[c]]=' ';
				}
		
			if(vidasZ[c]>0){//contador de vidas
				
				
				
				
				
				
				
				
				
					//paredes para o X1 && caixas
				
				if(randomZ1==1&& coordenadas[Zy[c]][Zx[c]+1]=='*'||randomZ1==1&&coordenadas[Zy[c]][Zx[c]+1]=='k'||randomZ1==1&&coordenadas[Zy[c]][Zx[c]+1]=='X'||randomZ1==1&&coordenadas[Zy[c]][Zx[c]+1]=='Y'){
					
					randomZ1=0;
					
					
				}
				else if(randomZ1==2&& coordenadas[Zy[c]][Zx[c]-1]=='*'||randomZ1==2&&coordenadas[Zy[c]][Zx[c]-1]=='k'||randomZ1==1&&coordenadas[Zy[c]][Zx[c]-1]=='X'||randomZ1==1&&coordenadas[Zy[c]][Zx[c]-1]=='Y'){
					
					randomZ1=0;
					
					
				}
				else if(randomZ1==3&& coordenadas[Zy[c]-1][Zx[c]]=='*'||randomZ1==3&&coordenadas[Zy[c]-1][Zx[c]]=='k'||randomZ1==1&&coordenadas[Zy[c]-1][Zx[c]]=='X'||randomZ1==1&&coordenadas[Zy[c]-1][Zx[c]]=='Y'){
					
					randomZ1=0;
					
					
				}
				else if(randomZ1==4&& coordenadas[Zy[c]+1][Zx[c]]=='*'||randomZ1==4&&coordenadas[Zy[c]+1][Zx[c]]=='k'||randomZ1==1&&coordenadas[Zy[c]+1][Zx[c]]=='X'||randomZ1==1&&coordenadas[Zy[c]+1][Zx[c]]=='Y'){
					
					randomZ1=0;
				
				
				}
				
				//espinhos para o x1
				if(randomZ1==1&& coordenadas[Zy[c]][Zx[c]+1]=='#'){
					
					randomZ1=0;
					vidasZ[c]--;
					
				}
				else if(randomZ1==2&& coordenadas[Zy[c]][Zx[c]-1]=='#'){
					
					randomZ1=0;
					vidasZ[c]--;
					
				}
				else if(randomZ1==3&& coordenadas[Zy[c]-1][Zx[c]]=='#'){
					
					randomZ1=0;
					vidasZ[c]--;
					
				}
				else if(randomZ1==4&& coordenadas[Zy[c]+1][Zx[c]]=='#'){
					
					randomZ1=0;
					vidasZ[c]--;
				
				}
				
				
				//escadas
				
				if(randomZ1==1&& coordenadas[Zy[c]][Zx[c]+1]=='L'){
					
					randomZ1=0;
					
					
				}
				else if(randomZ1==2&& coordenadas[Zy[c]][Zx[c]-1]=='L'){
					
					randomZ1=0;
				
					
				}
				else if(randomZ1==3&& coordenadas[Zy[c]-1][Zx[c]]=='L'){
					
					randomZ1=0;
				
					
				}
				else if(randomZ1==4&& coordenadas[Zy[c]+1][Zx[c]]=='L'){
					
					randomZ1=0;
				
				
				}
				
				
					//chaves
				
				if(randomZ1==1&& coordenadas[Zy[c]][Zx[c]+1]=='@'){
					
					randomZ1=0;
					
					
				}
				else if(randomZ1==2&& coordenadas[Zy[c]][Zx[c]-1]=='@'){
					
					randomZ1=0;
				
					
				}
				else if(randomZ1==3&& coordenadas[Zy[c]-1][Zx[c]]=='@'){
					
					randomZ1=0;
				
					
				}
				else if(randomZ1==4&& coordenadas[Zy[c]+1][Zx[c]]=='@'){
					
					randomZ1=0;
				
				
				}
				
				
					//escadas
				
				if(randomZ1==1&& coordenadas[Zy[c]][Zx[c]+1]=='O'){
					
					randomZ1=0;
					
					
				}
				else if(randomZ1==2&& coordenadas[Zy[c]][Zx[c]-1]=='O'){
					
					randomZ1=0;
				
					
				}
				else if(randomZ1==3&& coordenadas[Zy[c]-1][Zx[c]]=='O'){
					
					randomZ1=0;
				
					
				}
				else if(randomZ1==4&& coordenadas[Zy[c]+1][Zx[c]]=='O'){
					
					randomZ1=0;
				
				
				}
				
				
					//escadas
				
				if(randomZ1==1&& coordenadas[Zy[c]][Zx[c]+1]=='D'){
					
					randomZ1=0;
					
					
				}
				else if(randomZ1==2&& coordenadas[Zy[c]][Zx[c]-1]=='D'){
					
					randomZ1=0;
				
					
				}
				else if(randomZ1==3&& coordenadas[Zy[c]-1][Zx[c]]=='D'){
					
					randomZ1=0;
				
					
				}
				else if(randomZ1==4&& coordenadas[Zy[c]+1][Zx[c]]=='D'){
					
					randomZ1=0;
				
				
				}
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				//colisao do X1 com o personagem 
				if(randomZ1==1&& coordenadas[Zy[c]][Zx[c]+1]=='^'||coordenadas[Zy[c]][Zx[c]+1]=='>'||coordenadas[Zy[c]][Zx[c]+1]=='<'||coordenadas[Zy[c]][Zx[c]+1]=='v'){
					
					randomZ1=0;
					vidas--;
					
				}
				else if(randomZ1==2&& coordenadas[Zy[c]][Zx[c]-1]=='^'||coordenadas[Zy[c]][Zx[c]+1]=='>'||coordenadas[Zy[c]][Zx[c]+1]=='<'||coordenadas[Zy[c]][Zx[c]+1]=='v'){
					
					randomZ1=0;
					vidas--;
					
				}
				else if(randomZ1==3&& coordenadas[Zy[c]-1][Zx[c]]=='^'||coordenadas[Zy[c]][Zx[c]+1]=='>'||coordenadas[Zy[c]][Zx[c]+1]=='<'||coordenadas[Zy[c]][Zx[c]+1]=='v'){
					
					randomZ1=0;
					vidas--;
					
				}
				else if(randomZ1==4&& coordenadas[Zy[c]+1][Zx[c]]=='^'||coordenadas[Zy[c]][Zx[c]+1]=='>'||coordenadas[Zy[c]][Zx[c]+1]=='<'||coordenadas[Zy[c]][Zx[c]+1]=='v'){
					
					randomZ1=0;
					vidas--;
				
				}
				
				
				
				
				
				
				
				
				
				//inteligencia do X1
				
				
				
				
				if(randomZ1==1){
					Zx[c]++;
					coordenadas[Zy[c]][Zx[c]]='X';
					coordenadas[Zy[c]][Zx[c]-1]=' ';
				}
				
				if(randomZ1==2){
					Zx[c]--;
					coordenadas[Zy[c]][Zx[c]]='X';
					coordenadas[Zy[c]][Zx[c]+1]=' ';
				}
			
				if(randomZ1==3){
					Zy[c]--;
					coordenadas[Zy[c]][Zx[c]]='X';
					coordenadas[Zy[c]+1][Zx[c]]=' ';
				}
		    
				if(randomZ1==4){
					Zy[c]++;
					coordenadas[Zy[c]][Zx[c]]='X';
					coordenadas[Zy[c]-1][Zx[c]]=' ';
				}
				
				
				
				
				
				
			
			
			}//fim vidas x1
			
			
			
	}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//personagem
		
		
		
		
		//codigo de impedimento de movimento por paredes ou caixa do personagem
		if(teclado=='d'&& coordenadas[y][x+1]=='*'||teclado=='d'&& coordenadas[y][x+1]=='k'){
			
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='*'||teclado=='a'&& coordenadas[y][x-1]=='k'){
				
			coordenadas[y][x]='<';
			teclado=' ';
			
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='*'||teclado=='w'&& coordenadas[y-1][x]=='k'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='*'||teclado=='s'&& coordenadas[y+1][x]=='k'){
				
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		//espinhos (perca de vidas e impedimento'parede')
		if(teclado=='d'&& coordenadas[y][x+1]=='#'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='#'){
			
			coordenadas[y][x]='<';
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='#'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='#'){
		
			coordenadas[y][x]='v';
			teclado=' ';
			vidas--;
			
		}
		
		//impedimento de passagem pelo npc e pela chave
		
		if(teclado=='d'&& coordenadas[y][x+1]=='0'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='0'){
				
			coordenadas[y][x]='<';
			teclado=' ';
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='0'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='0'){
			
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		
	//impedimento de passagem por portas fechadas
		if(teclado=='d'&& coordenadas[y][x+1]=='D'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='D'){
			
			coordenadas[y][x]='<';
			teclado=' ';
			
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='D'){
				
			coordenadas[y][x]='^';
			teclado=' ';
		
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='D'){
		
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		
		
		//chaves
		
	
		if(teclado=='d'&& coordenadas[y][x+1]=='@'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='@'){
			
			coordenadas[y][x]='<';
			teclado=' ';
			
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='@'){
				
			coordenadas[y][x]='^';
			teclado=' ';
		
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='@'){
		
			coordenadas[y][x]='v';
			teclado=' ';
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//Dano do personagem com X
		if(teclado=='d'&& coordenadas[y][x+1]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='X'){
			
			teclado=' ';
			vidas--;
			
		}
		
		
		
		//Dano do personagem com Y
		if(teclado=='d'&& coordenadas[y][x+1]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='Y'){
			
			teclado=' ';
			vidas--;
			
		}
		
		
		
		
		//Escada
		
		if(teclado=='d'&& coordenadas[y][x+1]=='L'){
			
			fase++;
			vitoria=1;
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='L'){
			
			fase++;	vitoria=1;
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='L'){
			
			fase++;
				vitoria=1;
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='L'){
			
			fase++;
				vitoria=1;
		}
		
		
			
		//Botao
		
		if(teclado=='d'&& coordenadas[y][x+1]=='O'){
			
			teclado=' ';
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='O'){
			
			teclado=' ';
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='O'){
			teclado=' ';
		
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='O'){
			teclado=' ';
		
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//movimento do personagem
		if(teclado=='d'){
			x++;
			coordenadas[y][x]='>';
			coordenadas[y][x-1]=' ';
		}
		
		if(teclado=='a'){
			x--;
			coordenadas[y][x]='<';
			coordenadas[y][x+1]=' ';
		}
	
		if(teclado=='w'){
			y--;
			coordenadas[y][x]='^';
			coordenadas[y+1][x]=' ';
		}
    
		if(teclado=='s'){
			y++;
			coordenadas[y][x]='v';
			coordenadas[y-1][x]=' ';
		}
		
		
		
		
		
		
		
			
			
			
			
			
			
			
			
			
			
			
			
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		if(contadorvidas!=vidas){
			
			renascer=1;
			contadorvidas=vidas;
			
			
		}
		
		
		
		
	
		
	
		//limpando a tela
		system("cls");
		
		
		
		
	}while(fase==3&&vidas>0||renascer>0);
	
	
	
	
	
	
		}//if fase 3 masmorra
		

		
		
		if(vitoria==1){
			
			
			system("cls");
			printf("\n\nPARABENSSSSSSSS :)\n");
			printf("VOCE RECUPEROU O SEU GATO E SALVOU A VILA DERROTANDO O MAGO MALDOSO INFERNAL\n\n\n");
			printf("Voce e seu gato viveram felizes para sempre :)\n\n\n");
			printf("fim");
			
			
			system("pause");
			system("cls");
			
			
			
		}
		
			
			
			
			
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//depois de todas as fazes
		
		
		if(vidas<=0){
			
				//tela de game over
			
			
			
			system("cls");
			printf("Game over");
			printf("\n\n\n");
			system("pause");
		    vidas=3;
		
		}
	
		
		
		
		
	}//if opcao 1
	
	
	}while(opcao!='3');//menu
	
	
	
	
	return 0;
}