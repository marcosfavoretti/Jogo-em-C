/* TODO (#1#):*passar para funçao algumas coisas(ja fiz para o tabuleiro)
               *arrumar o contador
               *botar mais espaço no tabuleiro
			    */



#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void spawn(void);

int main()
{
system("color 2e");
system("")






int tecla,coluna,linha,pacy ,manx,quanto,nx, ny, sup = 1, sup2,mov, ptx, pty,  cont, cont2 ;	

int tabuleiro [10][10];
int player [10] [10];	
/*	do{
		_sleep(500);
		printf("\t\t\tSTART THE GAME!!!");
		printf("\t\t\t\npara comecar aperte space");
		_sleep(250);
		system("cls");
		sup = getch();
		_sleep(250);
	if ( sup == 32)
	{
		sup++;
	}
	}while(sup=1);*///tentativa de menu...voltar em breve
//tabuleiro junto com o spwan do pac man e pontos
spawn();
//comandos para andar o piao
do{
fflush(stdin);
mov = getch();

if(mov== 72)//para cima
{
	system("cls");
	nx --;
	cont2++;
		if (tabuleiro [nx][ny] == tabuleiro[ptx][pty] )
{
	srand(time(NULL)) ;
	srand(time(NULL)) ;
	pty = rand() %10;
	ptx = rand() %10;
	cont++;
	
}
printf("contador de pontos: %d", cont);
printf("\tcontador de jogadas: %d", cont2 );
for(coluna=0;coluna<10;coluna++)
	
{
		printf("\n");
		printf("\t");
			
		for(linha=0;linha<10;linha++)
{
		
		tabuleiro[coluna][linha] = 1;
		tabuleiro [nx][ny]= 2;//posiçao do piao
		tabuleiro[ptx][pty] = 3;//posicao do ponto
	if (tabuleiro[coluna][linha] == 1)
{
	printf("\333");
}
	else if (tabuleiro[coluna][linha] == 2)
{
		printf("\x01");
}
	
	else if(tabuleiro[coluna][linha] == 3)
{
		printf("0");
}
}	
}
}


 if(mov== 77)//direita	
{
	system("cls");
	ny ++;
	cont2++;
	if (tabuleiro [nx][ny] == tabuleiro[ptx][pty] )
{
srand(time(NULL)) ;
	srand(time(NULL)) ;
	pty = rand() %10;
	ptx = rand() %10;
	cont++;

}
printf("contador de pontos: %d", cont);
printf("\tcontador de jogadas: %d", cont2 );
for(coluna=0;coluna<10;coluna++)
	{
		printf("\n");
		printf("\t");
			
		for(linha=0;linha<10;linha++)
{
		
		tabuleiro[coluna][linha] = 1;
		tabuleiro [nx][ny]= 2;//posiçao do piao
		tabuleiro[ptx][pty] = 3;
	if (tabuleiro[coluna][linha] == 1)
{
	printf("\333");
}
	else if (tabuleiro[coluna][linha] == 2)
{
		printf("\x01");
}	
	else if(tabuleiro[coluna][linha] == 3)
{
		printf("0");
}
}
}
}

if(mov== 75)//esquerda
{
	system("cls");
	ny --;
	cont2++;
		if (tabuleiro [nx][ny] == tabuleiro[ptx][pty] )
{
srand(time(NULL)) ;
	srand(time(NULL)) ;
	pty = rand() %10;
	ptx = rand() %10;
	cont++;
	
}
printf("contador de pontos: %d", cont);
printf("\tcontador de jogadas: %d", cont2 );
for(coluna=0;coluna<10;coluna++)
{
		printf("\n");
		printf("\t");
			
		for(linha=0;linha<10;linha++)
{
		
		tabuleiro[coluna][linha] = 1;
		tabuleiro [nx][ny]= 2;//posiçao do piao
		tabuleiro[ptx][pty] = 3;
		if (tabuleiro[coluna][linha] == 1)
{
	printf("\333");
}
	else if (tabuleiro[coluna][linha] == 2)
{
		printf("\x01");
}
	
	else if(tabuleiro[coluna][linha] == 3)
{
		printf("0");
}
}
}
}

 if(mov== 80)//para baixo
{
	system("cls");
	nx ++;
	cont2++;
		if (tabuleiro [nx][ny] == tabuleiro[ptx][pty] )
{
	srand(time(NULL)) ;
	srand(time(NULL)) ;
	pty = rand() %10;
	ptx = rand() %10;
	cont++;

}
printf("contador de pontos: %d", cont);
printf("\tcontador de jogadas: %d", cont2 );
for(coluna=0;coluna<10;coluna++)
{
		printf("\n");
		printf("\t");
			
		for(linha=0;linha<10;linha++)
{
		
		tabuleiro[coluna][linha] = 1;
		tabuleiro [nx][ny]= 2;//posiçao do piao
		tabuleiro[ptx][pty] = 3;
		if (tabuleiro[coluna][linha] == 1)
{
	printf("\333");
}
	else if (tabuleiro[coluna][linha] == 2)
{
		printf("\x01");
}
	
	else if(tabuleiro[coluna][linha] == 3)
{
		printf("0");
}
}	
}
}

}while(sup=1);

	return 0;
}//main

void spawn(void)//funçao de tabuleiro e player
{
	int ptx, pty, ny, nx, linha, coluna;
	int tabuleiro [100][100];
	int player [100] [100];
	pty = rand() %100;
	ptx = rand() %100;
	ny = rand() %100;
	nx =  rand() %100;
	tabuleiro [nx][ny]= 2;//inciando os locais do player
	tabuleiro [ptx][pty]=3;//inciando os locais dos pontos
	for(coluna=0;coluna<100;coluna++)
	{
		printf("\n");
		printf("\t");
			
		for(linha=0;linha<100;linha++)
	{
		
		tabuleiro[coluna][linha] = 1;
		tabuleiro [nx][ny]= 2;
		tabuleiro[ptx][pty] = 3;
		
	if (tabuleiro[coluna][linha] == 1)
	{
		printf("\333");
	}
	else if (tabuleiro[coluna][linha] == 2)
	{
		printf("\x01");
	}
	
	else if(tabuleiro[coluna][linha] == 3)
	{
		printf("0");
	}
	return;
	}
}
}



