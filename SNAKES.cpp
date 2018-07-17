using namespace :: std;
# include <iostream>
# include <stdlib.h>
# include <time.h>
# include <ctime>
# include <conio.h>
# include <windows.h>

char boardH[50];
char boardC[50];
int positionH=1,positionC=1,newpositionH=0,newpositionC=0;
int play=0;
char player[2]={'H','C'};
char again='Y';
//DRAWS THE BOARD SHOWING THE POSITIONS OF SNAKES AND LADDERS
void draw_board(char boardH[],char boardC[])
{
	cout<<endl;
	cout<<endl;
	cout<<"vHomev"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<"|"<<"50"<<"\t"<<"   "<<"\t"<<"|"<<"49"<<"\t"<<"   "<<"\t"<<"|"<<"48"<<"\t"<<"   "<<"\t"<<"|"<<"47"<<"\t"<<"   "<<"\t"<<"|"<<"46"<<"\t"<<"   "<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<boardH[49]<<"  "<<boardC[49]<<"\t"<<"|"<<"\t"<<boardH[48]<<"  "<<boardC[48]<<"\t"<<"|"<<"\t"<<boardH[47]<<"  "<<boardC[47]<<"\t"<<"|"<<"\t"<<boardH[46]<<"  "<<boardC[46]<<"\t"<<"|"<<"\t"<<boardH[45]<<"  "<<boardC[45]<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"     "<<"S5*"<<"|"<<"\t"<<"   "<<"\t"<<"|"<<"\t"<<"     "<<"S4*"<<"|"<<"\t"<<"\t"<<"|"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<"|"<<"41"<<"\t"<<"   "<<"\t"<<"|"<<"42"<<"\t"<<"   "<<"\t"<<"|"<<"43"<<"\t"<<"   "<<"\t"<<"|"<<"44"<<"\t"<<"   "<<"\t"<<"|"<<"45"<<"\t"<<"   "<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<boardH[40]<<"  "<<boardC[40]<<"\t"<<"|"<<"\t"<<boardH[41]<<"  "<<boardC[41]<<"\t"<<"|"<<"\t"<<boardH[42]<<"  "<<boardC[42]<<"\t"<<"|"<<"\t"<<boardH[43]<<"  "<<boardC[43]<<"\t"<<"|"<<"\t"<<boardH[44]<<"  "<<boardC[44]<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"      "<<"L3"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<" \t"<<"|"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<"|"<<"40"<<"\t"<<"   "<<"\t"<<"|"<<"39"<<"\t"<<"   "<<"\t"<<"|"<<"38"<<"\t"<<"   "<<"\t"<<"|"<<"37"<<"\t"<<"   "<<"\t"<<"|"<<"36"<<"\t"<<"   "<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<boardH[39]<<"  "<<boardC[39]<<"\t"<<"|"<<"\t"<<boardH[38]<<"  "<<boardC[38]<<"\t"<<"|"<<"\t"<<boardH[37]<<"  "<<boardC[37]<<"\t"<<"|"<<"\t"<<boardH[36]<<"  "<<boardC[36]<<"\t"<<"|"<<"\t"<<boardH[35]<<"  "<<boardC[35]<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<"     "<<"L4*"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"      "<<"S4"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"      "<<"S5"<<"|"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<"|"<<"31"<<"\t"<<"   "<<"\t"<<"|"<<"32"<<"\t"<<"   "<<"\t"<<"|"<<"33"<<"\t"<<"   "<<"\t"<<"|"<<"34"<<"\t"<<"   "<<"\t"<<"|"<<"35"<<"\t"<<"   "<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<boardH[30]<<"  "<<boardC[30]<<"\t"<<"|"<<"\t"<<boardH[31]<<"  "<<boardC[31]<<"\t"<<"|"<<"\t"<<boardH[32]<<"  "<<boardC[32]<<"\t"<<"|"<<"\t"<<boardH[33]<<"  "<<boardC[33]<<"\t"<<"|"<<"\t"<<boardH[34]<<"  "<<boardC[34]<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<"     "<<"L3*"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"     "<<"S3*"<<"|"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<"|"<<"30"<<"\t"<<"   "<<"\t"<<"|"<<"29"<<"\t"<<"   "<<"\t"<<"|"<<"28"<<"\t"<<"   "<<"\t"<<"|"<<"27"<<"\t"<<"   "<<"\t"<<"|"<<"26"<<"\t"<<"   "<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<boardH[29]<<"  "<<boardC[29]<<"\t"<<"|"<<"\t"<<boardH[28]<<"  "<<boardC[28]<<"\t"<<"|"<<"\t"<<boardH[27]<<"  "<<boardC[27]<<"\t"<<"|"<<"\t"<<boardH[26]<<"  "<<boardC[26]<<"\t"<<"|"<<"\t"<<boardH[25]<<"  "<<boardC[25]<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<"     "<<"S2*"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"     "<<"S1*"<<"|"<<"\t"<<"\t"<<"|"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<"|"<<"21"<<"\t"<<"   "<<"\t"<<"|"<<"22"<<"\t"<<"   "<<"\t"<<"|"<<"23"<<"\t"<<"   "<<"\t"<<"|"<<"24"<<"\t"<<"   "<<"\t"<<"|"<<"25"<<"\t"<<"   "<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<boardH[20]<<"  "<<boardC[20]<<"\t"<<"|"<<"\t"<<boardH[21]<<"  "<<boardC[21]<<"\t"<<"|"<<"\t"<<boardH[22]<<"  "<<boardC[22]<<"\t"<<"|"<<"\t"<<boardH[23]<<"  "<<boardC[23]<<"\t"<<"|"<<"\t"<<boardH[24]<<"  "<<boardC[24]<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<"      "<<"L2"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<"|"<<"20"<<"\t"<<"   "<<"\t"<<"|"<<"19"<<"\t"<<"   "<<"\t"<<"|"<<"18"<<"\t"<<"   "<<"\t"<<"|"<<"17"<<"\t"<<"   "<<"\t"<<"|"<<"16"<<"\t"<<"   "<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<boardH[19]<<"  "<<boardC[19]<<"\t"<<"|"<<"\t"<<boardH[18]<<"  "<<boardC[18]<<"\t"<<"|"<<"\t"<<boardH[17]<<"  "<<boardC[17]<<"\t"<<"|"<<"\t"<<boardH[16]<<"  "<<boardC[16]<<"\t"<<"|"<<"\t"<<boardH[15]<<"  "<<boardC[15]<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<"      "<<"S2"<<"|"<<"\t"<<"      "<<"L1"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"      "<<"S1"<<"|"<<"\t"<<"\t"<<"|"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<"|"<<"11"<<"\t"<<"   "<<"\t"<<"|"<<"12"<<"\t"<<"   "<<"\t"<<"|"<<"13"<<"\t"<<"   "<<"\t"<<"|"<<"14"<<"\t"<<"   "<<"\t"<<"|"<<"15"<<"\t"<<"   "<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<boardH[10]<<"  "<<boardC[10]<<"\t"<<"|"<<"\t"<<boardH[11]<<"  "<<boardC[11]<<"\t"<<"|"<<"\t"<<boardH[12]<<"  "<<boardC[12]<<"\t"<<"|"<<"\t"<<boardH[13]<<"  "<<boardC[13]<<"\t"<<"|"<<"\t"<<boardH[14]<<"  "<<boardC[14]<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"     "<<"L2*"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<"|"<<"10"<<"\t"<<"   "<<"\t"<<"|"<<"9"<<"\t"<<"   "<<"\t"<<"|"<<"8"<<"\t"<<"   "<<"\t"<<"|"<<"7"<<"\t"<<"   "<<"\t"<<"|"<<"6"<<"\t"<<"   "<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<boardH[9]<<"  "<<boardC[9]<<"\t"<<"|"<<"\t"<<boardH[8]<<"  "<<boardC[8]<<"\t"<<"|"<<"\t"<<boardH[7]<<"  "<<boardC[7]<<"\t"<<"|"<<"\t"<<boardH[6]<<"  "<<boardC[6]<<"\t"<<"|"<<"\t"<<boardH[5]<<"  "<<boardC[5]<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<"|"<<"1"<<"\t"<<"   "<<"\t"<<"|"<<"2"<<"\t"<<"   "<<"\t"<<"|"<<"3"<<"\t"<<"   "<<"\t"<<"|"<<"4"<<"\t"<<"   "<<"\t"<<"|"<<"5"<<"\t"<<"   "<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<boardH[0]<<"  "<<boardC[0]<<"\t"<<"|"<<"\t"<<boardH[1]<<"  "<<boardC[1]<<"\t"<<"|"<<"\t"<<boardH[2]<<"  "<<boardC[2]<<"\t"<<"|"<<"\t"<<boardH[3]<<"  "<<boardC[3]<<"\t"<<"|"<<"\t"<<boardH[4]<<"  "<<boardC[4]<<"\t"<<"|"<<endl;
	cout<<"|"<<"\t"<<"      "<<"S3"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"\t"<<"|"<<"\t"<<"     "<<"L1*"<<"|"<<"\t"<<"\t"<<"|"<<endl;
		for(int a=0;a<5;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<"^Start here^";
	cout<<endl;
	cout<<endl;
}
//TO INITIALIZE THE BOARD
void init_board(char boardH[],char boardC[])
{
	for(int i=0;i<50;i++)
	{
		boardH[i]='.';
		boardC[i]='.';
	}
}

//DISPLAYS THE RULES AND ASKS FOR THE TURNS
void initialize()
{
	char turn;
	int choice;
	cout<<"\t"<<"Would you like to: "<<endl;
	cout<<"\t"<<"\t"<<"1.Read the rules"<<endl;
	cout<<"\t"<<"\t"<<"2.Play the game"<<endl;
	cout<<"\t"<<"Enter Choice: ";
	cin>>choice;
	if(choice==1)
	{
		cout<<"\t"<<"How to play: "<<endl;
		cout<<"\t"<<"\t"<<"1.Each player puts their counter on the space that says 'Start here'."<<endl;
		cout<<"\t"<<"\t"<<"2.Take it in turns to roll the dice.One turn is for the human and other is for the computer"<<endl;
		cout<<"\t"<<"\t"<<"3.Move your counter forward the number of spaces shown on the dice."<<endl;
		cout<<"\t"<<"\t"<<"4.If your counter lands at the bottom of a ladder, you can move up to the top of the ladder."<<endl;
		cout<<"\t"<<"\t"<<"5.If your counter lands on the head of a snake, you must slide down to the bottom of the snake."<<endl;
		cout<<"\t"<<"\t"<<"6.The first player to get to the space that says 'Home' is the winner."<<endl;
		cout<<endl;
		cout<<"\t"<<"Have a look on the board!"<<endl;
		cout<<endl;
		cout<<"\t"<<"\t"<<"|"<<" 50 "<<"|"<<" 49 "<<"|"<<" 48 "<<"|"<<" 47 "<<"|"<<" 46 "<<"|"<<"\t"<<"\t"<<endl;
		cout<<"\t"<<"\t"<<"|"<<" 41 "<<"|"<<" 42 "<<"|"<<" 43 "<<"|"<<" 44 "<<"|"<<" 45 "<<"|"<<"\t"<<"\t"<<"L1* to L1 "<<"From 4 to 19"<<endl;
		cout<<"\t"<<"\t"<<"|"<<" 40 "<<"|"<<" 39 "<<"|"<<" 38 "<<"|"<<" 37 "<<"|"<<" 36 "<<"|"<<"\t"<<"\t"<<"L2* to L2 "<<"From 12 to 21"<<endl;
		cout<<"\t"<<"\t"<<"|"<<" 31 "<<"|"<<" 32 "<<"|"<<" 33 "<<"|"<<" 34 "<<"|"<<" 35 "<<"|"<<"\t"<<"\t"<<"L3* to L3 "<<"From 31 to 43"<<endl;
		cout<<"\t"<<"\t"<<"|"<<" 30 "<<"|"<<" 29 "<<"|"<<" 28 "<<"|"<<" 27 "<<"|"<<" 26 "<<"|"<<"\t"<<"\t"<<endl;
		cout<<"\t"<<"\t"<<"|"<<" 21 "<<"|"<<" 22 "<<"|"<<" 23 "<<"|"<<" 24 "<<"|"<<" 25 "<<"|"<<"\t"<<"\t"<<"S1* to S1 "<<"From 27 to 17"<<endl;
		cout<<"\t"<<"\t"<<"|"<<" 20 "<<"|"<<" 19 "<<"|"<<" 18 "<<"|"<<" 17 "<<"|"<<" 16 "<<"|"<<"\t"<<"\t"<<"S2* to S2 "<<"From 30 to 20"<<endl;
		cout<<"\t"<<"\t"<<"|"<<" 11 "<<"|"<<" 12 "<<"|"<<" 13 "<<"|"<<" 14 "<<"|"<<" 15 "<<"|"<<"\t"<<"\t"<<"S3* to S3 "<<"From 35 to 1"<<endl;
		cout<<"\t"<<"\t"<<"|"<<" 10 "<<"|"<<" 9  "<<"|"<<" 8  "<<"|"<<" 7  "<<"|"<<" 6  "<<"|"<<"\t"<<"\t"<<"S4* to S4 "<<"From 47 to 38"<<endl;
		cout<<"\t"<<"\t"<<"|"<<" 1  "<<"|"<<" 2  "<<"|"<<" 3  "<<"|"<<" 4  "<<"|"<<" 5  "<<"|"<<"\t"<<"\t"<<"S5* to S5 "<<"From 49 to 36"<<endl;
		cout<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"Have Fun!"<<endl;
		cout<<endl;
		choice=2;

	}
	if(choice==2)
	{
		cout<<"\t"<<"Would you like to take the first turn?";
		cout<<"\t"<<"\t"<<"\t"<<" Y \ N "<<endl;
		cout<<"\t"<<"Enter your decision: ";
		cin>>turn;
		if(turn=='Y')
		{
			play=0;
		}
		else
		{
			play=1;
		}
	}
}
//ROLL DICE FUNCTION FOR THE USER
int roll_diceH()
{
	srand(time(0));
	char d; 
	int dH;
	cout<<"\t"<<"\t"<<"Press any key to roll the dice! ";
	cin>>d;
	cout<<"\t"<<"\t"<<"You rolled the dice! "<<endl;
	dH=rand()%6+1;
	if(dH==6)
	{
		cout<<"\t"<<"You got a 6"<<endl;
		cout<<"\t"<<"\t"<<"Press any key to roll the dice again! ";
		cin>>d;
		cout<<"\t"<<"\t"<<"You rolled the dice! "<<endl;
		dH=dH+(rand()%6+1);
	}
	cout<<"\t"<<"Your dice turns are: "<<dH<<endl;
	return dH;
	
}
//ROLL DICE FUNCTION FOR COMPUTER
int roll_diceC()
{
	int dC;
	srand(time(0));
	cout<<"\t"<<"\t"<<"Computer rolled the dice! "<<endl;
	dC=rand()%6+1;
	if(dC==6)
	{
		cout<<"\t"<<"Compter got a 6"<<endl;
		cout<<"\t"<<"\t"<<"Computer rolled the dice again! "<<endl;
		dC=dC+(rand()%6+1);
	}
	cout<<"\t"<<"Computer's dice turns are: "<<dC<<endl;
	return dC;
}
//TO CHECK WHETHER THE MOVE IS VALID OR NOT
int valid_move(int pHorC,int d)
{
	int np=pHorC+d;
	if(np>50)
	{
		cout<<"\t"<<"\t"<<"*****"<<"Your move is invalid!"<<"*****"<<endl;
		cout<<"\t"<<"\t"<<"*****"<<"Your turn is wasted!"<<"*****"<<endl;
		return 0;
	}
	return 1;
}
//TO MOVE THE GOTI ON THE BOARD
void move_goti(int dvalue)
{
	if(player[play]=='H')
	{
			boardH[positionH-1]='.';
			positionH+=dvalue;
			boardH[positionH-1]='H';
	}
	else
	{	
			boardC[positionC-1]='.';
			positionC+=dvalue;
			boardC[positionC-1]='C';
	}
}

//CHECK FOR THE PRESENCE OF ANY LADDERS OR SNAKES
//FOR USER
void check_positionH()
{

	switch(positionH)
		{
			case 35:
				{
					newpositionH=1;
					cout<<"Oops! Snake caused you to go back to 1...";
					break;
				}
			case 4:
				{
					newpositionH=19;
					cout<<"Wow! Ladder caused you to go up to 19...";
					break;
				}
			case 12:
				{
					newpositionH=21;
					cout<<"Wow! Ladder caused you to go up to 21...";
					break;
					
				}
			case 27:
				{
					newpositionH=17;
					cout<<"Oops! Snake caused you to go back to 17...";
					break;
				}
			case 30:
				{
					newpositionH=20;
					cout<<"Oops! Snake caused you to go back to 20...";
					break;
				}
			case 31:
				{
					newpositionH=42;
					cout<<"Wow! Ladder caused you to go up to 42...";
					break;
				}
			case 40:
				{
					newpositionH=50;
					cout<<"Wow! Ladder caused you to go up to 50...";
					break;
				}
			case 47:
				{
					newpositionH=38;
					cout<<"Oops! Snake caused you to go back to 38...";
					break;
				}
			case 49:
				{
					newpositionH=36;
					cout<<"Oops! Snake caused you to go back to 36...";
					break;
				}
			default:
				{
					newpositionH=positionH;
		}		}
	boardH[positionH-1]='.';
	boardH[newpositionH-1]='H';
	positionH=newpositionH;
}
//FOR COMPUTER
void check_positionC()
{

	switch(positionC)
		{
			case 35:
				{
					newpositionC=1;
					cout<<"Oops! Snake caused you to go back to 1...";
					break;
				}
			case 4:
				{
					newpositionC=19;
					cout<<"Wow! Ladder caused you to go up to 19...";
					break;
				}
			case 12:
				{
					newpositionC=21;
					cout<<"Wow! Ladder caused you to go up to 21...";
					break;
					
				}
			case 27:
				{
					newpositionC=17;
					cout<<"Oops! Snake caused you to go back to 17...";
					break;
				}
			case 30:
				{
					newpositionC=20;
					cout<<"Oops! Snake caused you to go back to 20...";
					break;
				}
			case 31:
				{
					newpositionC=42;
					cout<<"Wow! Ladder caused you to go up to 42...";
					break;
				}
			case 40:
				{
					newpositionC=50;
					cout<<"Wow! Ladder caused you to go up to 50...";
					break;
				}
			case 47:
				{
					newpositionC=38;
					cout<<"Oops! Snake caused you to go back to 38...";
					break;
				}
			case 49:
				{
					newpositionC=36;
					cout<<"Oops! Snake caused you to go back to 36...";
					break;
				}
			default:
				{
					newpositionC=positionC;
				}
		}
	boardC[positionC-1]='.';
	boardC[newpositionC-1]='C';
	positionC=newpositionC;
}
//FUNCTION FOR USER TO TAKE TURN
void user_turn()
{
	int d;
	d=roll_diceH();
	if(valid_move(positionH,d))
	{
		move_goti(d);
		check_positionH();
	}
}
//FUNCTION FOR COMPUTER TO TAKE TURN
void computer_turn()
{
	int d;
	d=roll_diceC();
	if (valid_move(positionC,d))
	{
		move_goti(d);
		check_positionC();
	}
}
//TO PLAY THE GAME AGAIN
void play_again()
{
	
	if(again=='Y')
	{
		cout<<endl;
		initialize();
		init_board(boardH,boardC);
		while(positionH<50 && positionC<50)
		{
			if(player[play]=='H')
			{
				user_turn();
				draw_board(boardH,boardC);
				play=1;
			}
			else
			{
				computer_turn();
				draw_board(boardH,boardC);
				play=0;
			}
		}
	}
	else 
	{
		
	}
}

//DISPLAYS THE RESULT
void result(int play)
{
		if(play==0)
	{
			cout<<"\t"<<"\t"<<"******************************************"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<" "<<"BAD LUCK!!!"<<"       "<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<" "<<"YOU LOST THE GAME  :("<<"   "<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"******************************************"<<endl;
			
	}
	else
	{
			cout<<"\t"<<"\t"<<"******************************************"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<" "<<"CONGRATULATIONS!!!"<<" "<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<" "<<"YOU WON THE GAME  :)"<<"  "<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"*"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" "<<"*"<<endl;
			cout<<"\t"<<"\t"<<"******************************************"<<endl;
			
	}
}


int main()
{
		for(int a=0;a<10;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<endl;
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"SNAKES AND LADDERS"<<endl;
	cout<<endl;
		for(int a=0;a<10;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"MADE BY JAVERIA RIAZ AND RAHMA TAHIR"<<endl;
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"ROLL NO: 2016-CS-251"<<endl;
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"ROLL NO: 2016-CS-264"<<endl;
		for(int a=0;a<10;a++)
	{
		cout<<"+"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-"<<"-";
	}
	cout<<"+"<<endl;
	cout<<endl;
	float t1=clock(); //starting time
	while(again=='Y') //ALLOWS TO PLAY THE GAME AGAIN OR QUIT
	{
		initialize();
		init_board(boardH,boardC);
		while(positionH<50 && positionC<50)
			{
				if(player[play]=='H')
				{
					user_turn();
					draw_board(boardH,boardC);
					play=1;
				}
				else
				{
					Sleep(500);
					computer_turn();
					draw_board(boardH,boardC);
					play=0;
				}
			}
			result(play);
			cout<<endl;
			cout<<"\t"<<"\t"<<"Do you want to play again? "<<"\t"<<"\t"<<"Y / N  ";
			cin>>again;
			::positionH=1;
			::positionC=1;
			::newpositionH=0;
			::newpositionC=0;
		}
	cout<<endl;
	float t2=clock(); //ending time
	float t=t2-t1; //total time taken
	cout<<"\t"<<"\t"<<"\t"<<"Thanks For Playing!!"<<endl;
	cout<<"\t"<<"\t"<<"\t"<<"It took you "<<t<<" miliseconds to complete the game";
	return 0;
}

