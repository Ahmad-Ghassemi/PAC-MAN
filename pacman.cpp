#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<unistd.h>
#include<ctime>
#include<time.h>
#include<cstdlib>
int main()
{
	system(" color B4");
	char graphic[10][33] = 
	{
	{219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219},
	{219,'@','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',219},
	{219,'*','*','*','*','*','*','*','*','*','*','*','*','*','*','G','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',219},
	{219,'*','*',219,219,219,219,219,219,219,219,219,219,'*','*','*','*','*','*',219,219,219,219,219,219,219,219,219,219,219,'*','*',219},
	{219,'*','*',219,'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',219,'*','*',219},
	{219,'*','*',219,'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',219,'*','*',219},
	{219,'*','*',219,219,219,219,219,219,219,219,219,219,'*','*','*','*','*','*',219,219,219,219,219,219,219,219,219,219,219,'*','*',219},
	{219,'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','G','*',219},
	{219,'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',219},
	{219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219},
	};
	/////////G MEANS GHOST////////////////////////
		printf("****play with 'wsad' keys****\n");
		printf("****make your language english**** \n");
		sleep(1);
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<33;j++)
		{
			printf("%c",graphic[i][j]);
		}
		printf("\n");
	}
	int pacx = 1 , pacy = 1;
	int g1x = 7 , g1y = 30;
	int g2x= 2 , g2y = 15;
	int chk = 0;
	while(1)
	{
		int move;
	char key,f=219;
	if(kbhit())
	{
	key = getch();
	}
	move=key;
	///////////////////////////////////////////////////////
	switch(move)
	{
		case 119 :
			{
				if(graphic[pacx-1][pacy]==f)
				{
					break;
				}
				else if(graphic[pacx-1][pacy]=='G')
				{
					chk=1;
					break;
				}
				else
				{
					graphic[pacx][pacy]=' ';
					graphic[pacx-1][pacy] = '@';
					pacx--;
				}
				break;
			}
			
		case 115 :
			{
				if(graphic[pacx+1][pacy]==f)
				{
					break;
				}
				else if(graphic[pacx+1][pacy]=='G')
				{
					chk=1;
					break;
				}
				else
				{
					graphic[pacx][pacy]=' ';
					graphic[pacx+1][pacy] = '@';
					pacx++;
				}
				break;
			}
			
		case 97:
		{
			if(graphic[pacx][pacy-1]==f)
				{
					break;
				}
				else if(graphic[pacx][pacy-1]=='G')
				{
					chk=1;
					break;
				}
				else
				{
					graphic[pacx][pacy]=' ';
					graphic[pacx][pacy-1] = '@';
					pacy--;
				}
				break;
		}
		
		case 100:
		{
			if(graphic[pacx][pacy+1]==f)
				{
					break;
				}
				else if(graphic[pacx][pacy+1]=='G')
				{
					chk=1;
					break;
				}
				else
				{
					graphic[pacx][pacy]=' ';
					graphic[pacx][pacy+1] = '@';
					pacy++;
				}
				break;
		}		
	}
	/////////////////////////////////////////////////////////////////////
	int random;
	int chk3=0;
	srand(time(0));
	random = rand()%4 +1;
	switch(random)
	{
		case 1 : 
		{
			if(graphic[g1x+1][g1y]=='*')
			{
				graphic[g1x+1][g1y]='G';
				graphic[g1x][g1y]='*';
				g1x++;
				break;
			}
			else if(graphic[g1x+1][g1y]==' ')
			{
				graphic[g1x+1][g1y]='G';
				graphic[g1x][g1y]=' ';
				g1x++;
				break;
			}
			else if(graphic[g1x+1][g1y]=='@')
			{
				chk3=1;
				break;
			}
			else if(graphic[g1x+1][g1y]==f)
			{
				break;
			}
			else if(graphic[g1x+1][g1y]=='G')
			{
				break;
			}
			break;
		}
		
		case 2:
		{
			if(graphic[g1x-1][g1y]=='*')
			{
				graphic[g1x-1][g1y]='G';
				graphic[g1x][g1y]='*';
				g1x--;
				break;
			}
			else if(graphic[g1x-1][g1y]==' ')
			{
				graphic[g1x-1][g1y]='G';
				graphic[g1x][g1y]=' ';
				g1x--;
				break;
			}
			else if(graphic[g1x-1][g1y]=='@')
			{
				chk3=1;
				break;
			}
			else if(graphic[g1x-1][g1y]==f)
			{
				break;
			}
			else if(graphic[g1x-1][g1y]=='G')
			{
				break;
			}
			break;
		}
		
		case 3 : 
		{
			if(graphic[g1x][g1y-1]=='*')
			{
				graphic[g1x][g1y-1]='G';
				graphic[g1x][g1y]='*';
				g1y--;
				break;
			}
			else if(graphic[g1x][g1y-1]==' ')
			{
				graphic[g1x][g1y-1]='G';
				graphic[g1x][g1y]=' ';
				g1y--;
				break;
			}
			else if(graphic[g1x][g1y-1]=='@')
			{
				chk3=1;
				break;
			}
			else if(graphic[g1x][g1y-1]==f)
			{
				break;
			}
			else if(graphic[g1x][g1y-1]=='G')
			{
				break;
			}
			break;
		}
		
		case 4 :
			{
				if(graphic[g1x][g1y+1]=='*')
			{
				graphic[g1x][g1y+1]='G';
				graphic[g1x][g1y]='*';
				g1y++;
				break;
			}
			else if(graphic[g1x][g1y+1]==' ')
			{
				graphic[g1x][g1y+1]='G';
				graphic[g1x][g1y]=' ';
				g1y++;
				break;
			}
			else if(graphic[g1x][g1y+1]=='@')
			{
				chk3=1;
				break;
			}
			else if(graphic[g1x][g1y+1]==f)
			{
				break;
			}
			else if(graphic[g1x][g1y+1]=='G')
			{
				break;
			}
			break;
			}
			
	}
///////////////////////////////////////////////////
int rnd;
	srand(time(0));
	rnd = rand()%4 +1;
	switch(rnd)
	{
		case 1 : 
		{
			if(graphic[g2x+1][g2y]=='*')
			{
				graphic[g2x+1][g2y]='G';
				graphic[g2x][g2y]='*';
				g2x++;
				break;
			}
			else if(graphic[g2x+1][g2y]==' ')
			{
				graphic[g2x+1][g2y]='G';
				graphic[g2x][g2y]=' ';
				g2x++;
				break;
			}
			else if(graphic[g2x+1][g2y]=='@')
			{
				chk3=1;
				break;
			}
			else if(graphic[g2x+1][g2y]==f)
			{
				break;
			}
			else if(graphic[g2x+1][g2y]=='G')
			{
				break;
			}
			break;
		}
		
		case 2:
		{
			if(graphic[g2x-1][g2y]=='*')
			{
				graphic[g2x-1][g2y]='G';
				graphic[g2x][g2y]='*';
				g2x--;
				break;
			}
			else if(graphic[g2x-1][g2y]==' ')
			{
				graphic[g2x-1][g2y]='G';
				graphic[g2x][g2y]=' ';
				g2x--;
				break;
			}
			else if(graphic[g2x-1][g2y]=='@')
			{
				chk3=1;
				break;
			}
			else if(graphic[g2x-1][g2y]==f)
			{
				break;
			}
			else if(graphic[g2x-1][g2y]=='G')
			{
				break;
			}
			break;
		}
		
		case 3 : 
		{
			if(graphic[g2x][g2y-1]=='*')
			{
				graphic[g2x][g2y-1]='G';
				graphic[g2x][g2y]='*';
				g2y--;
				break;
			}
			else if(graphic[g2x][g2y-1]==' ')
			{
				graphic[g2x][g2y-1]='G';
				graphic[g2x][g2y]=' ';
				g2y--;
				break;
			}
			else if(graphic[g2x][g2y-1]=='@')
			{
				chk3=1;
				break;
			}
			else if(graphic[g2x][g2y-1]==f)
			{
				break;
			}
			else if(graphic[g2x][g2y-1]=='G')
			{
				break;
			}
			break;
		}
		
		case 4 :
			{
				if(graphic[g2x][g2y+1]=='*')
			{
				graphic[g2x][g2y+1]='G';
				graphic[g2x][g2y]='*';
				g2y++;
				break;
			}
			else if(graphic[g2x][g2y+1]==' ')
			{
				graphic[g2x][g2y+1]='G';
				graphic[g2x][g2y]=' ';
				g2y++;
				break;
			}
			else if(graphic[g2x][g2y+1]=='@')
			{
				chk3=1;
				break;
			}
			else if(graphic[g2x][g2y+1]==f)
			{
				break;
			}
			else if(graphic[g2x][g2y+1]=='G')
			{
				break;
			}
			break;
			}
			
	}
///////////////////////////////////////////////////	
	if(chk3==1)
	{
		printf(" GAME OVER ");
		break;
	}
	if(chk==1)/////dar soorate barkhord ba ghost
	{
		printf("\n\n GAME OVER\n");
		break;
	}
	_sleep(500);
	system("cls");
	for(i=0;i<10;i++)
	{
		for(j=0;j<33;j++)
		{
			printf("%c",graphic[i][j]);
		}
		printf("\n");
	}
	
	int chk2=0;////dar soorate tamam shodan noghat-barande shodan
	for(i=0;i<10;i++)
	{
		for(j=0;j<33;j++)
		{
			if(graphic[i][j]=='*')
			{
				chk2=1;
				break;
			}
		}
		printf("\n");
	}
	if(chk2==0)
	{
		printf(" you win ");
		break;
	}
	}
}
