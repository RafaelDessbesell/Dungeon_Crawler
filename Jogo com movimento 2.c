#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	
	//obs: coordenadas [y], [x]
	
	//arquitetura da tela
	char coordenadas[10][20]= {{ '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
							   { '*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
						       { '*',' ',' ','O','*',' ',' ',' ',' ',' ',' ','Y',' ',' ',' ',' ',' ',' ',' ','*'},
							   { '*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
							   { '*','>',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','*'},
							   { '*',' ','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
							   { '*','k','k','k',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ','*'},
							   { '*','k','k','k',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
							   { '*','k','k','k',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
							   { '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}};
	
	//coordenadas iniciais do personagem
	int x=1; //coordenada x do personagem(o 0 e a coordenada inicial do personagem)
	int y=4; //coordenada y do personagem( o 4 e a coordenada incial do personagem)
	int i=0; //contador do y da tela
	int j=0; //contador do x da tela
	int X=1;//quandidade de monstros X
	int Y=1; //quandtidade de montros Y
	int vidas=1;//contador de vidas do personagem
	int arma=0;//vai ser a decisao de arma pelo jogador 1-(espada) 2-(arco e flexa) 3-(cajado)
	int fim=0; //fim do jogo, se =1
	int X1x=14;//coordenada x do monstro X1;
	int X1y=6;//coordenada y do monstro X1;
	int randomX1; // um numero aleatorio exclusivo para X1;
	int randomY1=0;//nao e algo randomizado, mas e para ser mais igual as variaveis
	int Y1x=11;//coordenada x do monstro Y1;
	int Y1y=2;//coordenada y do monstro Y1;
	int vidasY1=1;
	char respostaparaonpc;
	int vidasX1=3; //vidas para o x1;
	//i //se precionado, o personagem interage com o objeto a sua frente;
	//o se precionado, ataca
	int io=-1;//contador de localizacao para o dano calsado pelo personagem 
	int jo=1;//contador de localizacao para o dano calsado pelo personagem 
	
	
	
	
	
	
	
	
	//coordenadas iniciais dos monstros
//	 X1x[0]=14;//coordenada x do monstro X1;
	// X1y[0]=6;//coordenada y do monstro X1;
	 
	 //Y1x[0]=11;//coordenada x do monstro Y1;
	 //Y1y[0]=2;//coordenada y do monstro Y1;
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	srand(time(NULL));
	
	//O é o npc
	
	
	
	
	
	//laço de repetição de turnos
	do{
		
		
		//Tela do terminal
		for(j=0;j<10;j++){
			
			for(i=0;i<20;i++){
				printf(" %c",coordenadas[j][i]);
			}	
			
			printf("\n");
		}
		
		printf("\nVidas: %i\n\n",vidas);
		
		
		
		
		
		//botao de interacao do usuario com o jogo
		char teclado;
		teclado=' ';
		teclado=getch();
		
		
		//npc
		if((coordenadas[y-1][x]=='O'||coordenadas[y+1][x]=='O'||coordenadas[y][x-1]=='O'||coordenadas[y][x+1]=='O') && teclado=='i'){
			
			system("cls");
			printf("Qual arma voce quer?\n1-espada\n2-arco e flexa\n3-cajado\n4-Odeio armas\n\n");
			
			
			printf("Resposta:");
			scanf(" %c",&respostaparaonpc);
			
			
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
		
		
		if(arma==1&& teclado=='o'){
			
			if(coordenadas[y][x]=='^'){
				
				for(io=-1;io<=1;io++){
					
					for(jo=-1;jo>=-2;jo--){
							
					
						if(coordenadas[y+jo][x+io]=='*'||coordenadas[y+jo][x+io]=='#'){
							break;
						}
								
							//para dar dano no X1
						if(y+jo==X1y && x+io==X1x){
							vidasX1--;
							printf("acertouuuuuuuuuuu");
						}
								
							// quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							//dano ao y1
							
							
						}	
								//dano ao y1
						if(y+jo==Y1y && x+io==Y1x){
							vidasY1--;
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
						if(y+jo==X1y && x+io==X1x){
								vidasX1--;
								printf("acertouuuuuuuuuuu");
							}
						
						//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
						
						
						
						
						//dano ao y1
						if(y+jo==Y1y && x+io==Y1x){
							vidasY1--;
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
						if(y+jo==X1y && x+io==X1x){
								vidasX1--;
								printf("acertouuuuuuuuuuu");
							}
						
						//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
						
						
						
							//dano ao y1
						if(y+jo==Y1y && x+io==Y1x){
							vidasY1--;
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
						if(y+jo==X1y && x+io==X1x){
								vidasX1--;
								printf("acertouuuuuuuuuuu");
							}
					
					//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}
					
					
						//dano ao y1
						if(y+jo==Y1y && x+io==Y1x){
							vidasY1--;
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
						if(y+jo==X1y && x==X1x){
							vidasX1--;
							printf("acertouuuuuuuuuuu");
						
						}
								
								//dano prar as caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}	
							
								//dano ao y1
						if(y+jo==Y1y && x+io==Y1x){
							vidasY1--;
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
						if(y==X1y && x+io==X1x){
							vidasX1--;
							printf("acertouuuuuuuuuuu");
						
						}
								//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
							
								//dano ao y1
						if(y+jo==Y1y && x+io==Y1x){
							vidasY1--;
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
						if(y==X1y && x+io==X1x){
							vidasX1--;
							printf("acertouuuuuuuuuuu");
						
						}
									//quebrar caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
								//dano ao y1
						if(y+jo==Y1y && x+io==Y1x){
							vidasY1--;
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
						if(y+jo==X1y && x==X1x){
							vidasX1--;
							printf("acertouuuuuuuuuuu");
						
						}
								
								
								//dano nas caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}			
							
								//dano ao y1
						if(y+jo==Y1y && x+io==Y1x){
							vidasY1--;
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
						if(y+jo==X1y && x+io==X1x){
							vidasX1--;
							printf("acertouuuuuuuuuuu");
						}
								
									//dano nas caixas
						if(coordenadas[y+jo][x+io]=='k'){
							
							coordenadas[y+jo][x+io]=' ';
							
							
							
							
							
						}		
							
								//dano ao y1
						if(y+jo==Y1y && x+io==Y1x){
							vidasY1--;
							printf("acertouuuuuuuuuuu");
						}
							

					}
						
					
				}
			
				
				
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//X1
		
		//X1 variavel principal
			randomX1= rand() % 4+1;
			
			
			
			
			
			if(vidasX1<=0){//fazer o monstro sumir ao final das vidas
				coordenadas[X1y][X1x]=' ';
			}
	
		if(vidasX1>0){//contador de vidas
			
			
			
			
			
			
			
			
			
				//paredes para o X1 && caixas
			
			if(randomX1==1&& coordenadas[X1y][X1x+1]=='*'||randomX1==1&&coordenadas[X1y][X1x+1]=='k'){
				
				randomX1=0;
				
				
			}
			else if(randomX1==2&& coordenadas[X1y][X1x-1]=='*'||randomX1==2&&coordenadas[X1y][X1x-1]=='k'){
				
				randomX1=0;
				
				
			}
			else if(randomX1==3&& coordenadas[X1y-1][X1x]=='*'||randomX1==3&&coordenadas[X1y-1][X1x]=='k'){
				
				randomX1=0;
				
				
			}
			else if(randomX1==4&& coordenadas[X1y+1][X1x]=='*'||randomX1==4&&coordenadas[X1y+1][X1x]=='k'){
				
				randomX1=0;
			
			
			}
			
			//espinhos para o x1
			if(randomX1==1&& coordenadas[X1y][X1x+1]=='#'){
				
				randomX1=0;
				vidasX1--;
				
			}
			else if(randomX1==2&& coordenadas[X1y][X1x-1]=='#'){
				
				randomX1=0;
				vidasX1--;
				
			}
			else if(randomX1==3&& coordenadas[X1y-1][X1x]=='#'){
				
				randomX1=0;
				vidasX1--;
				
			}
			else if(randomX1==4&& coordenadas[X1y+1][X1x]=='#'){
				
				randomX1=0;
				vidasX1--;
			
			}
			
			
			
			
			
			
			
			
			
			
			//colisao do X1 com o personagem 
			if(randomX1==1&& coordenadas[X1y][X1x+1]=='^'||coordenadas[X1y][X1x+1]=='>'||coordenadas[X1y][X1x+1]=='<'||coordenadas[X1y][X1x+1]=='v'){
				
				randomX1=0;
				vidas--;
				
			}
			else if(randomX1==2&& coordenadas[X1y][X1x-1]=='^'||coordenadas[X1y][X1x+1]=='>'||coordenadas[X1y][X1x+1]=='<'||coordenadas[X1y][X1x+1]=='v'){
				
				randomX1=0;
				vidas--;
				
			}
			else if(randomX1==3&& coordenadas[X1y-1][X1x]=='^'||coordenadas[X1y][X1x+1]=='>'||coordenadas[X1y][X1x+1]=='<'||coordenadas[X1y][X1x+1]=='v'){
				
				randomX1=0;
				vidas--;
				
			}
			else if(randomX1==4&& coordenadas[X1y+1][X1x]=='^'||coordenadas[X1y][X1x+1]=='>'||coordenadas[X1y][X1x+1]=='<'||coordenadas[X1y][X1x+1]=='v'){
				
				randomX1=0;
				vidas--;
			
			}
			
			
			
			
			
			
			
			
			
			//inteligencia do X1
			
			
			
			
			if(randomX1==1){
				X1x++;
				coordenadas[X1y][X1x]='X';
				coordenadas[X1y][X1x-1]=' ';
			}
			
			if(randomX1==2){
				X1x--;
				coordenadas[X1y][X1x]='X';
				coordenadas[X1y][X1x+1]=' ';
			}
		
			if(randomX1==3){
				X1y--;
				coordenadas[X1y][X1x]='X';
				coordenadas[X1y+1][X1x]=' ';
			}
	    
			if(randomX1==4){
				X1y++;
				coordenadas[X1y][X1x]='X';
				coordenadas[X1y-1][X1x]=' ';
			}
			
			
			
			
			
			
		
		
		}//fim vidas x1
		
		
		
		
		
		
		
		//Y1
		
		if(vidasY1>0){
			
			
			for(j=0;j<10;j++){
			
				for(i=0;i<20;i++){
					
					
					
					
					//movimentação do Y1d
					
					
					
					//barramento de movimento
					//movimentoY1
					 
					
						
					
					
					//movimentoy do y1 do y1
						if(coordenadas[j][i]=='v'&&j!=Y1y||coordenadas[j][i]=='<'&&j!=Y1y||coordenadas[j][i]=='>'&&j!=Y1y||coordenadas[j][i]=='^'&&j!=Y1y){
								
							if(j<Y1y&&coordenadas[Y1y-1][Y1x]!='*'&&coordenadas[Y1y-1][Y1x]!='#'&&coordenadas[Y1y-1][Y1x]!='k'&&coordenadas[Y1y-1][Y1x]!='^'&&coordenadas[Y1y-1][Y1x]!='<'&&coordenadas[Y1y-1][Y1x]!='>'&&coordenadas[Y1y-1][Y1x]!='v'){
								Y1y--;
								coordenadas[Y1y+1][Y1x]=' ';
								coordenadas[Y1y][Y1x]='Y';
									
							}
							
							
							
							if(j>Y1y&&coordenadas[Y1y+1][Y1x]!='*'&&coordenadas[Y1y+1][Y1x]!='#'&&coordenadas[Y1y+1][Y1x]!='k'&&coordenadas[Y1y+1][Y1x]!='^'&&coordenadas[Y1y+1][Y1x]!='<'&&coordenadas[Y1y+1][Y1x]!='>'&&coordenadas[Y1y+1][Y1x]!='v'){
								Y1y++;
								coordenadas[Y1y-1][Y1x]=' ';
								coordenadas[Y1y][Y1x]='Y';
									
							}
							
								
						}//fim movimento y
						
							//movimento x do y1
						if(coordenadas[j][i]=='v'&&j==Y1y||coordenadas[j][i]=='<'&&j==Y1y||coordenadas[j][i]=='>'&&j==Y1y||coordenadas[j][i]=='^'&&j==Y1y){
							
							if(i<Y1x&&coordenadas[Y1y][Y1x-1]!='*'&&coordenadas[Y1y][Y1x-1]!='#'&&coordenadas[Y1y][Y1x-1]!='k'&&coordenadas[Y1y][Y1x-1]!='^'&&coordenadas[Y1y][Y1x-1]!='<'&&coordenadas[Y1y][Y1x-1]!='>'&&coordenadas[Y1y][Y1x-1]!='v'){
								Y1x--;
								coordenadas[Y1y][Y1x+1]=' ';
								coordenadas[Y1y][Y1x]='Y';
									
							}
							
							if(i>Y1x&&coordenadas[Y1y][Y1x+1]!='*'&&coordenadas[Y1y][Y1x+1]!='k'&&coordenadas[Y1y][Y1x+1]!='#'&&coordenadas[Y1y][Y1x+1]!='^'&&coordenadas[Y1y][Y1x+1]!='<'&&coordenadas[Y1y][Y1x+1]!='>'&&coordenadas[Y1y][Y1x+1]!='v'){
								Y1x++;
								coordenadas[Y1y][Y1x-1]=' ';
								coordenadas[Y1y][Y1x]='Y';
									
							}
							
							
							//dano de espinhos ao Y1
							
						}//fim movimento y do y1
									
									
									
									
								
							if(j<Y1y&&coordenadas[Y1y-1][Y1x]=='#'){
								vidasY1--;
									
							}
							
							
							if(j>Y1y&&coordenadas[Y1y+1][Y1x]=='#'){
								vidasY1--;
									
							}
							
							
							if(i<Y1x&&coordenadas[Y1y][Y1x-1]=='#'){
								vidasY1--;
									
							}
							
							
							if(i>Y1x&&coordenadas[Y1y][Y1x+1]=='#'){
								vidasY1--;
									
							}		
									
							//dano do monstro no personagem
							
							if(j<Y1y&&(coordenadas[Y1y-1][Y1x]=='^'||coordenadas[Y1y-1][Y1x]=='<'||coordenadas[Y1y-1][Y1x]=='>'||coordenadas[Y1y-1][Y1x]=='v')){
								vidas--;
									
							}	
									
							if(j>Y1y&&(coordenadas[Y1y+1][Y1x]=='^'||coordenadas[Y1y+1][Y1x]=='<'||coordenadas[Y1y+1][Y1x]=='>'||coordenadas[Y1y+1][Y1x]=='v')){
								vidas--;
									
							}		
							
							
							if(i<Y1y&&(coordenadas[Y1y][Y1x-1]=='^'||coordenadas[Y1y][Y1x-1]=='<'||coordenadas[Y1y][Y1x-1]=='>'||coordenadas[Y1y][Y1x-1]=='v')){
								vidas--;
									
							}	
							
							
							if(i>Y1y&&(coordenadas[Y1y][Y1x+1]=='^'||coordenadas[Y1y][Y1x+1]=='<'||coordenadas[Y1y][Y1x+1]=='>'||coordenadas[Y1y][Y1x+1]=='v')){
								vidas--;
									
							}	
							
							
							
							
							
							
							
							
							
							
							
							
								
									
				}//for2
			
			//morte Y1
			
			
						
					
			}//for1
			
			
			
		}//vidas y1
		
		
		if(vidasY1<=0){
				coordenadas[Y1y][Y1x]=' ';
				
				
				
				}
	
		
		
		//fim Y1
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
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
		
		if(teclado=='d'&& coordenadas[y][x+1]=='O'){
		
			coordenadas[y][x]='>';
			teclado=' ';
			
			
		}
		else if(teclado=='a'&& coordenadas[y][x-1]=='O'){
				
			coordenadas[y][x]='<';
			teclado=' ';
			
		}
		else if(teclado=='w'&& coordenadas[y-1][x]=='O'){
				
			coordenadas[y][x]='^';
			teclado=' ';
			
			
		}
		else if(teclado=='s'&& coordenadas[y+1][x]=='O'){
			
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
		
		
		
		
		
		
		
			
			
			
			
			
			
			
			
			
			
			
			
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
		//fim de jogo por falta de vidas
		if(vidas<=0){
			
			
			fim=1;
		}
	
		//limpando a tela
		system("cls");
		
		
		
		
	}while(fim==0);
	
	
	
	
	//tela de game over
	system("cls");
	printf("Game over");
	printf("\n\n\n");
	system("pause");
	
	
	
	
	
	
	return 0;
}