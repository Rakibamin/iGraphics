		/***********************************************************************************************
		************************************************************************************************
		******************************        ***************         **********************************
		******************************        CAR RACING GAME         **********************************
		******************************        ***************         **********************************
		******************************    BY: MOHAMMAD RAKIB AMIN     **********************************
		******************************      ID# 0905046 L-1,T-2       **********************************
		************************************************************************************************
		********************          SUBMITTED TO : Dr. MAHFUZUL ISLAM          ***********************
		********************                ASSOCIATE PROFESSOR                  ***********************
		********************       DEPT. of COMPUTER SCIENCE & ENGINEERING       ***********************
		********************				  BUET,DHAKA-1000                    ***********************
		************************************************************************************************
		***********************************************************************************************/



#include "iGraphics.h"
#include <shellapi.h>
#include <string.h>
#include <math.h>
#include<conio.h>

#define RED 255,0,0
#define GREEN 0,255,0
#define BLUE  0,0,255
#define WHITE 255,255,255
#define YELLOW 255,255,0

/***********************************************/ 


void reinitialize();

void update_his();

void update_his_c();

void mark_delay();

void mycarmove();

void mycarmove_c();

void roaddraw();

void milestone();

void roadlinedraw();

void roadlinedraw_c();

void frontpage();

void roadsidedraw();

void winshow();

void cardamage();

void kilometershow();

void timecount();

void timeshow();

void optionshow();

void check_high();

void savescore();

void showhighscore();

void showcredit();

void cursor2();

void gamesaving();

void loadgame();

void helppage();

void heatline();

void showrace();

void initialize_car();

void blink();

void track_col();

void mark_light();

void chk_speed();

void chk_speed_c();

void collision_report();

int collision_player();

void freeze();

void traffic_rand();

void collide_car();

void freeze_player();

int collision_valid_1_c();

int collision_valid_1();

int collision_valid_2_c();

int collision_valid_2();

void collision_traff1_c();

void collision_traff2_c();
	
void collision_traff1();

void collision_traff2();

void declare_win();

void chk_winner();

void game_over();


/***************************************/


struct gamesave1
{
	double co_x;
	double co_x2;
	double co_y;
	double co_y2;
	double speed_limit;
	double speed_limit2;
	double addition;
	int win;
	char carselect;
	double i;
	double h;
	double g;
	double z;
	double x2;
	int reach;
	int collision;
	int flag14;
	int mycarposa;
	double policespeed;
	double caught;
	int bust;
	int timec;
	int winamp;
	int show_track;
	

}savegame;

struct highscore
{
	char name[20];
	int level;

}score[11];



//*******************************************************




char str[45]={0};

char delay123[]="imagess/11.bmp";
char damage[7];

char damage_c[7];

int press;

char speedy[5];
char speedy_c[5];
char kilometer[]="00km";
char carsel[]="imagess/*.bmp";
char carsel1[]="imagess/*.bmp";
char scorer_name[20];
char timerem[]="00 second";

int n,q,u,cname=0,cursor1=0,busted,winamp,timec,end;
int speed1,speed1_c,mark;

int damagecount,damagecount_c,j_c=360,y,temp;
int flag1,flag8=0,flag14=0,bust,flag2,flag7=0,flag=0;

int move_c1,move_c2,mode1_c,mode2_c,move_up,move_down,move_up_c,move_down_c,y_c,temp_c,temp_y_c,temp_y;


int checkcoli=0,mode1=0,mode2=0,count=0,y2=0,move1,move2,j=320,carpos=220,a=500,b=600,c=100,d=70,p=0,reach=0;
int win=0,x4=536,detect=0,ab=0,hound=0,cd=.5,y4=636,x5=10,dx,mposx=0,mposy=0,intro=0,car=0,scan,multi=1,collision=0,collision_c=0;
int random=1,random2=1,carchoice=1,colicheck=0,random3=1,random4=1,carchoice2=1,carselect=0,feature;
int sound=0,back=0,playsound1=0;

double x2=0,l=0,k=0,speed=0,speed_limit=5,co_x=2000,co_y=900,i=0,g=0,z=0,h=0,co_x2=2000,co_y2=900,speed_limit2=5,speed2=0;
double addition=0,delay=0;
double backtrackx=600,backtracky=-100,caught,policespeed;
double x1_c,x2_c,y1_c,flag4;


int x_cord,y_cord,x_cord_c,y_cord_c,count_c;

char abir;

int asif;

int counter;

int color_track,show_track;

int sky_lim,sky_lim_c,sky_lim_2,sky_lim_2_c,road_lim_right,road_lim_right_c,road_lim_left,road_lim_left_c;

int self_drift,self_drift_c; 

double car1_x,car1_y,car2_x,car2_y,car3_x,car3_y,car1_x2,car1_y2;

int draw;




//***********************************************




void iDraw()
{
	iClear();

	switch(flag)
	{
		
		case 0:frontpage();
				break;

		case 1:if(win!=1 && timec!=1 && end==0)
			   {
					roadsidedraw();
					roaddraw();
					roadlinedraw();
					roadlinedraw_c();
					mycarmove();
					mycarmove_c();
					traffic_rand();
					winshow();

					
					if(flag14<=3)
					{
						mark_delay();
						track_col();
						mark_light();
					}
					else 
					{
						cardamage();
						showrace();
						kilometershow();
						timeshow();
					}
		
				}

			if(collision==1500||busted==1||timec==1)
			{
				check_high();
	
			}
			
			if(mark==1){
				iShowBMP(0,0,"imagess//LOAD1.bmp");
		
			 
				mark=0;
			}
			//if(flag8==2)
			//	reinitialize();
		/*	if(flag2==1&&busted==0)
			{
				call_police();
			
			}*/
	
			break;

		case 2:optionshow();
				   break;
		case 3:showhighscore();
				   break;
		case 4:helppage();
				   break;
		case 5:showcredit();
				   break;
		case 6:exit(0);
				   break;
		
		case 8:loadgame();
				   break;
	}
}

void reinitialize()
{

}





void iMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{


	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=230 && mx<=800 && my>=540 && my<=630 && flag==0)
	{
		flag=1;
		car=5;
		intro=1;
		
	}
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=380 && mx<=636 && my>=25 && my<=100 && flag==0 )
	{
		flag=6;
	}

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=260&&mx<=700&&my>=244&&my<=308&&flag==0)
	{
		flag=4;
	}

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=145 && mx<=325 && my>=40 && my<=125 && flag==2)
	{
		flag=8;
	}

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=683 && mx<=832 && my>=40 && my<=125 && flag7==0)
	{
	flag7=2;	
	}


	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=260&&mx<=700&&my>=350&&my<=420&&flag==0)
	{
		flag=3;
	
	}

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=260&&mx<=700&&my>=150&&my<=220&&flag==0)
	{
		flag=5;

	
	}

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=50&&mx<=100&&my>=50&&my<=100&&flag==3)
	{
		flag=0;
	}

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=50&&mx<=120&&my>=60&&my<=100&&flag==5)
	{

		flag=0;

	}
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=80&&mx<=180&&my>=60&&my<=100&&flag==4)
	{

		flag=0;
	}

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=80&&mx<=180&&my>=60&&my<=100&&flag==3)
	{

		flag=0;
	}

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=160&&mx<=500&&my>=230&&my<=300&&flag==2)
	{
	//	flag=8;
	}



	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=260&&mx<=700&&my>=456&&my<=530&&flag==0)
	{
		flag=2;

	}

	
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=160&&mx<=660&&my>=120&&my<=150&&flag==2)
	{
		if(flag7==0)
			flag7=2;
	
	}

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=160&&mx<=500&&my>=370&&my<=440&&flag==2&&flag7!=2)
	{
	
		if(flag7==0)
			flag7=1;
		else flag7=0;

	}
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && flag==2 && flag7==2)
	{
			if(mx<=760)	
				carselect=mx/130;

			addition=0;

			for(feature=0;feature<carselect;feature++)
			{
				addition+=.5;
			}

			if(mx>=800&&mx<=1000&&my>=0&&my<=125)
			{
				flag=0;
				flag7=0;
			}

	
	}


	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=550&&mx<=740&&my>=280&&my<=350&&flag==2&&flag7==1)
	{
		sound=0;
		//Sspeed_limitExecute(NULL,"open",music[1],0,0,0);
	}

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=550&&mx<=740&&my>=430&&my<=500&&flag==2&&flag7==1)sound=1;
		

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx>=50&&mx<=110&&my>=50&&my<=80&&flag==2&&flag7!=2)
	{
	
		flag=0;
		flag7=0;

	}

}

void iPassiveMouseMove(int mx, int my)
{
	
	mposx =mx;
	mposy =my;

	if(mposx>=260&&mposx<=700&&mposy>=550&&mposy<=630&&flag==0)flag1=1;
	else if(mposx>=260&&mposx<=700&&mposy>=456&&mposy<=530&&flag==0)flag1=2;
	else if(mposx>=260&&mposx<=700&&mposy>=350&&mposy<=420&&flag==0)flag1=3;
	else if(mposx>=260&&mposx<=700&&mposy>=244&&mposy<=308&&flag==0)flag1=4;
	else if(mposx>=260&&mposx<=700&&mposy>=150&&mposy<=220&&flag==0)flag1=5;
	else if(mposx>=260&&mposx<=700&&mposy>=25&&mposy<=100&&flag==0)flag1=6;
	else flag1=0;	
}

void iKeyboard(unsigned char key)
{
	if(flag==0&&((key=='\n')||(key=='\r')))
	{
		flag=flag1;
	}

else if(flag8==0&&flag==1&&key=='s')
	{
		gamesaving();
	}
	

	else if(flag==1&&flag8==1&&key!='\n'&&key!='\r')
	{
		
		
			if((key>96 &&key <123)|| (key>64 && key<91)|| key==32)
			{
				scorer_name[cname]=key;
				cname++;
				PlaySound("soundss//4.wav", NULL, SND_ASYNC);
			}
			if(key=='\b')
			{
				scorer_name[cname]=0;
				if(cname>0)cname--;
				scorer_name[cname]=0;
				PlaySound("soundss//4.wav", NULL, SND_ASYNC);
			}
		
	}

	/***************************/


	else if(key=='i')//up
	{
		if(flag14>3 && flag==1)
		{
		mode1=1;
		count=1;
		move_up=1;
		}
	}

	else if(key=='j')//left
	{
		move2=1;
	}
	else if(key=='k')//down
	{
		if(flag14>3 && flag==1)
		{
		mode2=1;
		count=1;
		move_down=1;
		}
	}
	else if(key=='l')//right
	{
		move1=1;
	}
	else if (key=='q')
	{
		flag=0;
	}
	
	else
	{
		scorer_name[cname]='\0';
		savescore();
	}
	


}
/*
Function iSpecialKeyboard() is called whenver user hits special keys
like- function keys, home, end, pg up, pg down, arraows etc. you have
to use appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5,
GLUT_KEY_F6, GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10,
GLUT_KEY_F11, GLUT_KEY_F12, GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT,
GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME,
GLUT_KEY_END, GLUT_KEY_INSERT.
*/

void iSpecialKeyboard(unsigned char key)
{	
if(key == GLUT_KEY_UP)
{
	if(flag14>3 && flag==1)
	{
		mode1_c=1;
		move_up_c=1;
		count_c=1;
	}
	
}
if(key == GLUT_KEY_DOWN)
{
	if(flag14>3&&flag==1)
	{
	move_down_c=1;	
	mode2_c=1;
	count_c=1;
	}

}

if(key == GLUT_KEY_RIGHT)
{
	move_c1=1;
}

if(key == GLUT_KEY_LEFT)
{
	move_c2=1;
}
}

void iSpecialKeyboardUP(unsigned char key)
{

	if(GLUT_KEY_UP == key)
	{
		mode1_c=0;
		move_up_c=0;
		self_drift_c=1;
	}
	if(GLUT_KEY_DOWN == key)
	{
		mode2_c=0;
		move_down_c=0;
	}
	if(GLUT_KEY_LEFT ==key)
	{
		move_c2=0;
	}
	if(GLUT_KEY_RIGHT == key)
	{
		move_c1=0;
	}

}

void iKeyboardUP(unsigned char key)
{
	if('i'==key)
	{
		mode1=0;	
		move_up=0;
		self_drift=1;
	}
	if('k'==key)
	{
		mode2=0;
		move_down=0;
	}
	if('j'==key)
	{
		move2=0;
	}
	if('l'==key)
	{
		move1=0;
	}


}

int main()
{
	iSetTimer(1000,timecount);
	initialize_car();
	iSetTimer(500,cursor2);

	iSetTimer(100,blink);
	iInitialize(1000,700,"car racing");

	system("taskkill /f /im wmplayer.exe");
	
	return 0;

}
//*********************MY FUNCTIONS****************************



//*************FUNCTION FOR INITIALIZE AGAIN********************


void initialize_car()
{
	j=170;
	j_c=690;
}


//*********FUNCTION FOR SHOWING Light****************

void mark_delay()
{

	delay+=.75;

	if(delay>=145)
	{
		flag14++;
		delay=0;
	}
}

void mark_light()
{
	static time_t start,i=0;

	if(i==0)
	{
		time(&start);
		i=1;
	}
	time_t now;

	time(&now);

	static int anim[20];

	anim[now-start]++;

	if(now-start==1 ||now-start==2 || now-start==3 || now-start==4){	
			iShowBMP(100,250,"imagess//mark_1.bmp");
	}
	if(now-start==5||now-start==6|| now-start==7|| now-start==8){
			iShowBMP(100,250,"imagess//mark_2.bmp");
	}
	if(now-start==9||now-start==10|| now-start==11|| now-start==12){
			iShowBMP(100,250,"imagess//mark_3.bmp");

	}
	
}

//************FUNCTION FOR MOVING MY CAR******************
			

void mycarmove()
{
	
	carsel[8]=carselect+48;
	
	collision_report();

	freeze_player();

	if(collision_valid_1())
		collision_traff1();

	if(collision_valid_2())
		collision_traff2();


	chk_speed();
	

		if(move1==0 && move2==0 && move_up==0 && move_down==0 && count==0)
			iShowBMP(j,0,carsel);
		else
		{
		if(move1==1 && j<road_lim_right)
		{
			j++;
			temp=j;
		}

		if(move2==1 && j>road_lim_left)
		{
			j--;
			temp=j;
		}

		if(move_up==1 && y<=sky_lim)
		{
			y++;
			temp_y=y;
		}
		else if(self_drift && y>=sky_lim_2)
		{
			y--;
			temp_y=y;
		}

		if(move_down==1 && y>=sky_lim_2)
		{
			y--;
			temp_y=y;
		}

		if(move1==1 || move2==1)
		{
			x_cord=j;
			y_cord=temp_y;
		}
		else if(move_up==1 || move_down==1)
		{
			x_cord=temp;
			y_cord=y;
		}
		else if(move1==0 && move2==0 && move_up==0 && move_down==0 && count==1)
		{
			x_cord=temp;
			y_cord=temp_y;
		}

		iShowBMP(x_cord,y_cord,carsel);
		}

	
}

void mycarmove_c()
{

	carsel1[8]=carselect+49;

	collision_report();

	freeze_player();

	if(collision_valid_1_c())
		collision_traff1_c();

	if(collision_valid_2_c())
		collision_traff2_c();

	chk_speed_c();

		if(move_c1==0 && move_c2==0 && move_up_c==0 && move_down_c==0 && count_c==0)
			iShowBMP(j_c,0,carsel1);
		else
		{
		if(move_c1==1 && j_c<road_lim_right_c)
		{
			j_c++;
			temp_c=j_c;
		}
		if(move_c2==1 && j_c>road_lim_left_c)
		{
			j_c--;
			temp_c=j_c;
		}
		if(move_up_c==1 && y_c<sky_lim_c)
		{
			y_c++;
			temp_y_c=y_c;
		}
		else if(self_drift_c && y_c>=sky_lim_2_c)
		{
			y_c--;
			temp_y_c=y_c;
		}
		if(move_down_c==1 && y_c>=sky_lim_2_c)
		{
			y_c--;
			temp_y_c=y_c;
		}
		if(move_c1==1 || move_c2==1)
		{
			x_cord_c=j_c;
			y_cord_c=temp_y_c;
		}
		else if(move_up_c==1 || move_down_c==1)
		{
			x_cord_c=temp_c;
			y_cord_c=y_c;
		}
		else if(move_c1==0 && move_c2==0 && move_up_c==0 && move_down_c==0 &&count_c==1)
		{
			x_cord_c=temp_c;
			y_cord_c=temp_y_c;
		}

		iShowBMP(x_cord_c,y_cord_c,carsel1);
		}
	

}

void chk_speed()
{
		if(y_cord_c>=450)
		{
			sky_lim=y_cord_c-50;
		}
		else
			sky_lim=520;
}

void chk_speed_c()
{
		if(y_cord>=450)
		{
			sky_lim_c=y_cord-50;
		}
		else
			sky_lim_c=520;
}

void collision_report()
{
	if(collision_player())
	{
		//iText(400,400,"MARA GELUM RE!");
		collision++;
		collision_c++;
	}
	if(collision_valid_1() || collision_valid_2())
	{
		collision++;
		//iText(400,400,"MARA GELUM RE traffic!");
	}

	if(collision_valid_2_c() || collision_valid_1_c())
	{
		collision_c++;
		//iText(400,400,"MARA GELUM RE traffic_c!");
	}

}


void default_limit()
{
	road_lim_right=700;
	road_lim_right_c=700;
	road_lim_left=200;
	road_lim_left_c=200;
	sky_lim_c=520;
	sky_lim=520;
	sky_lim_2_c=10;
	sky_lim_2=10;
}

void freeze_player()
{
	if(collision_player()) 
	{
		if(j_c>=j) 
		{
			road_lim_right=temp;
			road_lim_left_c=temp_c;

			if(y_c>=y)
			{
			self_drift=1;
			self_drift_c=0;
			move_up=0;
			sky_lim_2_c=temp_y_c;
			sky_lim=temp_y;
			move_down_c=0;
			}	  									
			else if(y_c<y)							
			{
			self_drift=0;
			self_drift_c=1;
			move_up_c=0;
			sky_lim_c=temp_y_c;
			sky_lim_2=temp_y;
			move_down=0;
			}
		}

		else if(j>j_c)
		{
			road_lim_left=temp;
			road_lim_right_c=temp_c;

			if(y_c>=y)								
			{
			self_drift=1;
			self_drift_c=0;
			move_up=0;
			sky_lim_2_c=temp_y_c;
			sky_lim=temp_y;
			move_down_c=0;
			}

			else if(y_c<y)								
			{
			self_drift=0;
			self_drift_c=1;
			move_up_c=0;
			sky_lim_c=temp_y_c;
			sky_lim_2=temp_y;
			move_down=0;
			}
		}
	}
	else if(!collision_player() && !collision_valid_1() && !collision_valid_1_c() && !collision_valid_2() && !collision_valid_2_c())
		default_limit();
}



int collision_player()
{
	if(j_c>j && y_c>=y)					
	{
	if((j_c-j<=80) && (y_c-y<=160))
		return 1;
	}
	else if(j_c>j && y_c<=y)
	{
	if((j_c-j<=80) && (y-y_c<=160))
		return 1;
	}
	else if(j>j_c && y_c>=y)		 
	{
	if((j-j_c<=80) && (y_c-y<=160))
		return 1;
	}
	else if(j>j_c && y_c<=y)
	{
	if((j-j_c<=80) && (y-y_c<=160))
		return 1;
	}

	return 0;
}

void collision_traff1()
{
		if(car1_x>=j) 
		{
			road_lim_right=temp;

			if(car1_y>=y)
			{
			self_drift=1;
			move_up=0;
			sky_lim=temp_y;
			}	  									
			else if(car1_y<y+100)							
			{
			self_drift=0;
			sky_lim_2=temp_y;
			  
			}
		}

		else if(j>car1_x)
		{
			road_lim_left=temp;


			if(car1_y>=y)								
			{
			self_drift=1;
			move_up=0;
			sky_lim=temp_y;
			}
			else if(car1_y<y+100)								
			{
			self_drift=0;
			sky_lim_2=temp_y;
			  
			}
		}
		else if(!collision_player() && !collision_valid_1() && !collision_valid_1_c() && !collision_valid_2() && !collision_valid_2_c())
			default_limit();
}

void collision_traff2()
{
		if(car1_x2>=j) 
		{
			road_lim_right=temp;

			if(car1_y2>=y)
			{
			self_drift=1;
			move_up=0;
			sky_lim=temp_y;
			}	  									
			else if(car1_y2<y+100)							
			{
			self_drift=0;
			sky_lim_2=temp_y;
			 
			}
		}
		else if(j>car1_x2)
		{
			road_lim_left=temp;

			if(car1_y2>=y)								
			{
			self_drift=1;
			move_up=0;
			sky_lim=temp_y;
			}
			else if(car1_y2<y+100)								
			{
			self_drift=0;
			sky_lim_2=temp_y;
			 
			}
		}
		else if(!collision_player() && !collision_valid_1() && !collision_valid_1_c() && !collision_valid_2() && !collision_valid_2_c())
			default_limit();
}

void collision_traff1_c()
{
		if(car1_x>=j_c) 
		{
			road_lim_right_c=temp_c;

			if(car1_y>=y_c)
			{
			self_drift_c=1;
			move_up_c=0;
			sky_lim_c=temp_y_c;
			}	  									
			else if(car1_y<y_c+100)							
			{
			self_drift_c=0;
			sky_lim_2_c=temp_y_c;
			  
			}
		}

		else if(j_c>car1_x)
		{
			road_lim_left_c=temp_c;

			if(car1_y>=y_c)								
			{
			self_drift_c=1;
			move_up_c=0;
			sky_lim_c=temp_y_c;
			}
			else if(car1_y<y_c+100)								
			{
			self_drift_c=0;
			sky_lim_2_c=temp_y_c;
			  
			}
		}
		else if(!collision_player() && !collision_valid_1() && !collision_valid_1_c() && !collision_valid_2() && !collision_valid_2_c())
			default_limit();

}

void collision_traff2_c()
{
		if(car1_x2>=j_c) 
		{
			road_lim_right_c=temp_c;

			if(car1_y2>=y_c)
			{
			self_drift_c=1;
			move_up_c=0;
			sky_lim_c=temp_y_c;

			}	  									
			else if(car1_y2<y_c+100)							
			{
			self_drift_c=0;
			sky_lim_2_c=temp_y_c;
			 
			}
		}

		else if(j_c>car1_x2)
		{
			road_lim_left_c=temp_c;

			if(car1_y2>=y_c)								
			{
			self_drift_c=1;
			move_up_c=0;
			sky_lim_c=temp_y_c;
			}
			else if(car1_y2<y_c+100)								
			{
			self_drift_c=0;
			sky_lim_2_c=temp_y_c;
			 
			}
		}
		else if(!collision_player() && !collision_valid_1() && !collision_valid_1_c() && !collision_valid_2() && !collision_valid_2_c())
			default_limit();
}


//***********FUNCTION FOR DRAWING ROAD***************

void roaddraw()
{
	
	iSetColor(120,120,120);
	iFilledRectangle(100,0,400,700);

	iSetColor(120,120,120);
	iFilledRectangle(500,0,400,700);
	
}

void track_col()
{
	switch(color_track)
	{
	case 1: 
		iSetColor(RED);
		iFilledRectangle(290,0,10,50);
		iSetColor(WHITE);
		iFilledRectangle(290,50,10,50);

		iSetColor(WHITE);
		iFilledRectangle(450,0,10,50);
	    iSetColor(RED);
		iFilledRectangle(450,50,10,50);
		
		iText(290,170, "TRACK FOR PLAYER 1",GLUT_BITMAP_HELVETICA_18);

		iSetColor(BLUE);
		iFilledRectangle(500,0,10,50);
		iSetColor(WHITE);
		iFilledRectangle(500,50,10,50);

		iSetColor(WHITE);
		iFilledRectangle(660,0,10,50);
		iSetColor(BLUE);
		iFilledRectangle(660,50,10,50);

		iText(500,170, "TRACK FOR PLAYER 2",GLUT_BITMAP_HELVETICA_18);

		break;


	case 2:
		iSetColor(BLUE);
		iFilledRectangle(290,0,10,50);
		iSetColor(WHITE);
		iFilledRectangle(290,50,10,50);

		iSetColor(WHITE);
		iFilledRectangle(450,0,10,50);
	    iSetColor(BLUE);
		iFilledRectangle(450,50,10,50);
		
		iText(290,170, "TRACK FOR PLAYER 1",GLUT_BITMAP_HELVETICA_18);

		iSetColor(YELLOW);
		iFilledRectangle(500,0,10,50);
		iSetColor(WHITE);
		iFilledRectangle(500,50,10,50);

		iSetColor(WHITE);
		iFilledRectangle(660,0,10,50);
		iSetColor(YELLOW);
		iFilledRectangle(660,50,10,50);

		iText(500,170, "TRACK FOR PLAYER 2",GLUT_BITMAP_HELVETICA_18);

		break;

	case 3:
		iSetColor(YELLOW);
		iFilledRectangle(290,0,10,50);
		iSetColor(WHITE);
		iFilledRectangle(290,50,10,50);

		iSetColor(WHITE);
		iFilledRectangle(450,0,10,50);
	    iSetColor(YELLOW);
		iFilledRectangle(450,50,10,50);
		
		iText(290,170, "TRACK FOR PLAYER 1",GLUT_BITMAP_HELVETICA_18);

		iSetColor(GREEN);
		iFilledRectangle(500,0,10,50);
		iSetColor(WHITE);
		iFilledRectangle(500,50,10,50);

		iSetColor(WHITE);
		iFilledRectangle(660,0,10,50);
		iSetColor(GREEN);
		iFilledRectangle(660,50,10,50);

		iText(500,170, "TRACK FOR PLAYER 2",GLUT_BITMAP_HELVETICA_18);

		break;

	case 4:
		iSetColor(GREEN);
		iFilledRectangle(290,0,10,50);
		iSetColor(WHITE);
		iFilledRectangle(290,50,10,50);

		iSetColor(WHITE);
		iFilledRectangle(450,0,10,50);
	    iSetColor(GREEN);
		iFilledRectangle(450,50,10,50);
		
		iText(290,170, "TRACK FOR PLAYER 1",GLUT_BITMAP_HELVETICA_18);

		iSetColor(0,0,0);
		iFilledRectangle(500,0,10,50);
		iSetColor(WHITE);
		iFilledRectangle(500,50,10,50);

		iSetColor(WHITE);
		iFilledRectangle(660,0,10,50);
		iSetColor(0,0,0);
		iFilledRectangle(660,50,10,50);

		iText(500,170, "TRACK FOR PLAYER 2",GLUT_BITMAP_HELVETICA_18);

		break;

	default:
		iSetColor(RED);
		iFilledRectangle(290,0,10,50);
		iSetColor(WHITE);
		iFilledRectangle(290,50,10,50);

		iSetColor(WHITE);
		iFilledRectangle(450,0,10,50);
	    iSetColor(RED);
		iFilledRectangle(450,50,10,50);
		
		iText(290,170, "TRACK FOR PLAYER 1",GLUT_BITMAP_HELVETICA_18);

		iSetColor(BLUE);
		iFilledRectangle(500,0,10,50);
		iSetColor(WHITE);
		iFilledRectangle(500,50,10,50);

		iSetColor(WHITE);
		iFilledRectangle(660,0,10,50);
		iSetColor(BLUE);
		iFilledRectangle(660,50,10,50);

		iText(500,170, "TRACK FOR PLAYER 2",GLUT_BITMAP_HELVETICA_18);
		break;
	}



}



//****************FUNCTION FOR COUNTING MILESTONE***********

void milestone()
{

	iShowBMP(110,700-i,"imagess//win_track.bmp");

	if(i>700)
	{
		reach=0;
		win++;
	}

} 



//****************FUNCTION FOR DRAWING ROADLINE***********

void roadlinedraw()
{

	int x1=300,y1=750;

	if(x2>=3.5+addition)x2=3.5+addition;
	if(x2<=0)x2=0;
	if(mode1==1)
	{
		x2+=.0095;
		asif++;
	}

	if(mode2==1||mode1==0)
	{
		if(mode1==0 && mode2!=1)
		{
			x2-=.0009;
		}
		if(mode2==1) x2-=.003;
	}


	iSetColor(255,215,0);

	iFilledRectangle(x1,y1-i,15,100);

	if(i<=210&&i>=200)h=5;
	{
		iFilledRectangle(x1,y1-h,15,100);
		if(colicheck==0)h+=x2;
		else h+=.8;
		
	}
	if(i<=410 && i>=400)z=5;
	{
		iFilledRectangle(x1,y1-z,15,100);
		if(colicheck==0)z+=x2;
		else z+=.8;

	
	}
	if(i<=610&&i>=600)g=5;
	{
		iFilledRectangle(x1,y1-g,15,100);
		if(colicheck==0)g+=x2;
		else g+=.8;
		
	}

	if(colicheck==0)i+=x2;
	else 
			
	{
		i+=.8;
		x2=.8;
	}
	
	if(i>=850)
	{
		i=0;
		reach++;
	}

	if(reach==10)
	{
		iShowBMP(x1-180,y1+100-i,"imagess//4_norm.bmp"); 
	}
	if(reach==11)
	{
		iShowBMP(x1-180,y1+100-i,"imagess//5_norm.bmp"); 
	}
	if(reach==20)
	{
		iShowBMP(x1-180,y1+100-i,"imagess//6_norm.bmp"); 
	}
	if(reach==21)
	{
		iShowBMP(x1-180,y1+100-i,"imagess//2_norm.bmp");
	}

	if(reach>=30)
	{
		milestone();//for adding milestone 
	
	}
	
}



void roadlinedraw_c()
{

	double x1_c=700,y1_c=750;

	if(x2_c>=3.5+addition)
		x2_c=3.5+addition;

	if(x2_c<=0)
		x2_c=0;

	if(mode1_c==1)
	{
		x2_c+=.0095;	
	}
	if(mode2_c==1||mode1_c==0)
	{
		if(mode1_c==0 && mode2_c!=1)
		{
			x2_c-=.0009;
		}
		if(mode2_c==1) x2_c-=.003;
	}

	iSetColor(255,215,0);
	iFilledRectangle(x1_c,y1_c-i,15,100);

	if(i<=210&&i>=200)h=5;
	{
		iFilledRectangle(x1_c,y1_c-h,15,100);
		if(colicheck==0)h+=x2_c;
		else h+=.8;
		
	}
	if(i<=410 && i>=400)z=5;
	{
		iFilledRectangle(x1_c,y1_c-z,15,100);
		if(colicheck==0)z+=x2_c;
		else z+=.8;

	
	}
	if(i<=610&&i>=600)g=5;
	{
		iFilledRectangle(x1_c,y1_c-g,15,100);
		if(colicheck==0)g+=x2_c;
		else g+=.8;
		

	
	}

	if(colicheck==0)i+=x2_c;
	else 
			
	{
		i+=.8;
		x2_c=.8;
	}
	
	if(i>=850)
	{
		i=0;
		reach++;
	}
	if(reach==15)
	{
		iShowBMP(x1_c+100,y1_c+100-i,"imagess//0_norm.bmp");
	}
	if(reach==16)
	{
		iShowBMP(x1_c+100,y1_c+100-i,"imagess//1_norm.bmp"); 
	}
	if(reach==25)
	{
		iShowBMP(x1_c+100,y1_c+100-i,"imagess//2_norm.bmp"); 
	}
	if(reach==26)
	{
		iShowBMP(x1_c+100,y1_c+100-i,"imagess//3_norm.bmp"); 
	}
	
	if(reach>=30)
	{
		milestone();
		declare_win();
		iText(500,350,"GAME OVER");
	
	}

	
}


//****************FUNCTION FOR FRONTPAGE***********



void frontpage()
{
	
	
	switch(flag1)
	{
	case 1:
		
			iShowBMP(0,0,"imagess\\NEW GAME.2.bmp");
			if(playsound1==0)
			{
				//PlaySound("soundss//7.wav", NULL, SND_ASYNC);
				playsound1=1;
			}
	
		
		break;



	case 2:
	
		iShowBMP(0,0,"imagess\\OPTION.2.bmp");
		if(playsound1==0)
		{
			//PlaySound("soundss//7.wav", NULL, SND_ASYNC);
			playsound1=1;
		}
	
	
	break;



	case 3:
	
		iShowBMP(0,0,"imagess\\HIGH SCORE.2.bmp");
		if(playsound1==0)
		{
			//PlaySound("soundss//7.wav", NULL, SND_ASYNC);
			playsound1=1;
		}
	
	
	break;



	case 4:
	
		iShowBMP(0,0,"imagess\\HELP.2.bmp");
		if(playsound1==0)
		{
			//PlaySound("soundss//7.wav", NULL, SND_ASYNC);
			playsound1=1;
		}
	
	
	break;



	case 5:
	
		iShowBMP(0,0,"imagess\\CREDIT.2.bmp");
		if(playsound1==0)
		{
			//PlaySound("soundss//7.wav", NULL, SND_ASYNC);
			playsound1=1;
		}
	
	
	break;



	case 6:
	
		iShowBMP(0,0,"imagess\\QUIT.2.bmp");
		if(playsound1==0)
		{
			//PlaySound("soundss//7.wav", NULL, SND_ASYNC);
			playsound1=1;
		}
	
	
	break;

	default:
		iShowBMP(0,0,"imagess/MYFRONTPAGE.bmp");
		playsound1=0;
	}
	

}



//****************FUNCTION FOR DRAWING ROADSIDE***********

void roadsidedraw()
{
	for(scan=0;scan<=30;scan++)
	{
		if(scan%2==0)
		{
			iSetColor(0,60,0);
			iFilledRectangle(0,53*scan-i,1000,100);
		}
		else if(scan%3==0)
		{
			if(counter)
				iSetColor(31,62,0);
			else
				iSetColor(205,255,155);

			iFilledRectangle(0,53*scan-i,1000,50);
		}
		else if(scan%5==0)
		{
			iSetColor(GREEN);
			iFilledRectangle(0,53*scan-i,1000,25);
		}
		else
			{
			iSetColor(0,128,0);
			iFilledRectangle(0,53*scan-i,1000,25);
			}

	}


}



//****************FUNCTION FOR DRAWING GAMEOVER***********


void winshow()
{
	if(damagecount==100 && win!=1 && timec!=1)
	{
		switch(color_track){

		case 1:
		 iShowBMP(0,0,"imagess//pliss_0_dam.bmp");break;
		 case 2:
		 iShowBMP(0,0,"imagess//pliss_1_dam.bmp");break;
		 case 3:
		 iShowBMP(0,0,"imagess//pliss_2_dam.bmp");break;
		 case 4:
		 iShowBMP(0,0,"imagess//pliss_3_dam.bmp");break;
		 case 5:
		 iShowBMP(0,0,"imagess//pliss_4_dam.bmp");break;

		 default:
		 iShowBMP(0,0,"imagess//pliss_0_dam.bmp");break;
		}
		 
		 

	}
  if(damagecount_c==100&& win!=1 && timec!=1)
	{
		switch(color_track){

		case 5:
		 iShowBMP(0,0,"imagess//pliss_5_dam.bmp");break;
		 case 1:
		 iShowBMP(0,0,"imagess//pliss_1_dam.bmp");break;
		 case 2:
		 iShowBMP(0,0,"imagess//pliss_2_dam.bmp");break;
		 case 3:
		 iShowBMP(0,0,"imagess//pliss_3_dam.bmp");break;
		 case 4:
		 iShowBMP(0,0,"imagess//pliss_4_dam.bmp");break;

		 default:
		 iShowBMP(0,0,"imagess//pliss_1_dam.bmp");break;
		}
		 
		 


	}

	if(damagecount==100&&damagecount_c==100 && win!=1 && timec!=1)
	{
		
		iShowBMP(0,0,"imagess//LOAD1.bmp");
		  
		 
	}
		

	if(win==1 && timec!=1)
	{
		declare_win();
	}

	if(timec==1 && win!=1 )
	{
		iShowBMP(0,0,"imagess//pliss_time.bmp");
		  
		 
	}


	if(damagecount==100||damagecount_c==100|| win==1 || timec==1 && asif || draw==1)
	{

		iShowBMP(0,0,"imagess//SHOWHIGHSCORE.bmp");
		win=0;
		timec=0;
		collision=0;
		collision_c=0;
		reinitialize();
		mark=1;
		//flag=0;
		//exit(1);
	}




}


//****************FUNCTION FOR COUNTING CARDAMAGE***********

void cardamage()
{
	iSetColor(RED);
	char ab='%';
	damagecount=collision/15;
	damagecount_c=collision_c/15;

	if(damagecount<=100 && damagecount_c<=100)
	{

	sprintf(damage,"%d%c",damagecount,ab);

	sprintf(damage_c,"%d%c",damagecount_c,ab);


	iText(260, 500,damage,GLUT_BITMAP_HELVETICA_18);

	iText(260, 400, damage_c,GLUT_BITMAP_HELVETICA_18);

	


	if(color_track==1)
		iSetColor(RED);
	else if(color_track==2)
		iSetColor(BLUE);
	else if(color_track==3)
		iSetColor(YELLOW);
	else if(color_track==4)
		iSetColor(GREEN);
	else if(color_track==5)
		iSetColor(WHITE);
	else
		iSetColor(RED);


	iText(100, 520, "PLAYER 1 CAR DAMAGE",GLUT_BITMAP_HELVETICA_18);


    if(color_track==1)
		iSetColor(BLUE);
	else if(color_track==2)
		iSetColor(YELLOW);
	else if(color_track==3)
		iSetColor(GREEN);
	else if(color_track==4)
		iSetColor(WHITE);
	else if(color_track==5)
		iSetColor(255,128,128);
	else
		iSetColor(BLUE);

	iText(100, 420, "PLAYER 2 CAR DAMAGE",GLUT_BITMAP_HELVETICA_18);

	if((collision/10)<=70)iSetColor(0,100,0);
	else if((collision/10)>=70&&(collision/10)<=120)iSetColor(YELLOW);
	else iSetColor(RED);

	iFilledRectangle(100,500,150-collision/10,10);

	if((collision_c/10)<=70)iSetColor(0,100,0);
	else if((collision_c/10)>=70&&(collision_c/10)<=120)iSetColor(YELLOW);
	else iSetColor(RED);

	iFilledRectangle(100,400,150-collision_c/10,10);
	}

}


//****************FUNCTION FOR KILOMETERREMAINING SHOW***********

void kilometershow()
{
}

//****************FUNCTION FOR COUNTING TIME***********



void timecount()
{
	if(flag==1&&flag14>=3)
	{
		if(win==0&&timec==0)
		{
			timec=100-win;
		}
		else if(winamp<win)
		{
			winamp=win;
			timec=100-win;
		
		}
		timec--;

		timerem[0]=timec/10+48;
		timerem[1]=timec%10+48;
	}

}



//****************FUNCTION FOR SHOWING TIME***********

void timeshow()
{
	iSetColor(RED);

	iText(800,530,"TIME REMAINING: ",GLUT_BITMAP_HELVETICA_18);

	iSetColor(RED);
	iText(800,500,timerem,GLUT_BITMAP_TIMES_ROMAN_24);

}



//****************FUNCTION FOR SHOWING OPTION PAGE***********


void optionshow()
{
	iShowBMP(0,0,"imagess//LOAD4.bmp");


	if(flag7==2)
	{
			iShowBMP(0,0,"imagess//LOAD8.bmp");

			if(mposx>=1 && mposx<=120 && mposy>=90 && mposy<=201)
			{
			iShowBMP(0,0,"imagess//car_1.bmp");
			color_track=1;
			}

			if(mposx>=124 && mposx<=250 && mposy>=90 && mposy<=201)
			{
			iShowBMP(0,0,"imagess//car_2.bmp");
			color_track=2;
			}

			if(mposx>=255 && mposx<=380 && mposy>=90 && mposy<=201)
			{
			iShowBMP(0,0,"imagess//car_3.bmp");
			color_track=3;
			}

			if(mposx>=387 && mposx<=517 && mposy>=90 && mposy<=201)
			{
			iShowBMP(0,0,"imagess//car_4.bmp");
			color_track=4;
			}

			if(mposx>=521 && mposx<=648 && mposy>=90 && mposy<=201)
			{
			iShowBMP(0,0,"imagess//car_5.bmp");
			color_track=5;
			}
	}


}


//****************FUNCTION FOR CHECKING HIGHSCORE***********

void check_high()
{
	FILE *fp;
	flag8=2;

	fp=fopen("records\\highscore.txt","r");
	if(fp==NULL)("ERROR");

	for(u=0;u<10;u++)
	{
		score[u].level=0;
	
	}
	int save=1;

	for(u=0;u<10;u++)
	{

		fscanf(fp,"%s %d",score[u].name,&score[u].level);

		
		save=0;
		
		if(score[u].level<=win)
		{
			flag8=1;
			fclose(fp);
			break;
		
		}

	
	}

	if(save==1)flag8=1;

}




//****************FUNCTION FOR SAVING HIGHSCORE***********

void savescore()
{
	FILE *fp;
	fp=fopen("records\\highscore.txt","r+");
	if(!fp){
		printf("Can't open record file for save");
		 
	}
	int q;
	q=0;
	


	while(fscanf(fp,"%s %d",score[q].name,&score[q].level)!=EOF && q<10){
		q++;
		
	}


	int pos=q;
	for(q=9;q>=0;q--)
	{
		if((score[q].level <=win) )
		{
			score[q+1].level=score[q].level;
			strcpy(score[q+1].name,score[q].name);

			score[q].level=win;
			strcpy(score[q].name,scorer_name);

		}
		
	}

	fseek(fp,0,SEEK_SET);
	if(pos<9)
	{
		if(pos==0)
		{
			strcpy(score[q].name,scorer_name);
			score[q].level=win;
		}

		fprintf(fp,"%s %d\n",score[pos].name,score[pos].level);
	}
	else 
	{
		fseek(fp,0,SEEK_SET);

		for(q=0;q<10;q++)
		{
			fprintf(fp,"%s %d\n",score[q].name,score[q].level);
		
		}
	
	}
	fclose(fp);
	//reinitialize();
}




//****************FUNCTION FOR SHOWING HIGHSCORE***********

void showhighscore()
{
	iShowBMP(0,0,"imagess\\SHOWHIGHSCORE.bmp");
	FILE *fp;
	fp=fopen("records\\highscore.txt","r+");

	if(!fp)
	{
		printf("ERROR");
		 
	}
	for(q=0;q<10;q++)
	{
		fscanf(fp,"%s %d",score[q].name,&score[q].level);
	}

	fclose(fp);

	for(q=0;q<10;q++)
	{
		sprintf(str,"%d.%s",q+1,score[q].name);
		iSetColor(255,255,255);
		iText(200,518-(q*41),str,GLUT_BITMAP_TIMES_ROMAN_24);

	
	}

	for(q=0;q<10;q++)
	{
		sprintf(str,"%d",score[q].level);
		iSetColor(255,255,255);
		iText(700,518-(q*41),str,GLUT_BITMAP_TIMES_ROMAN_24);

	
	}

}


//****************FUNCTION FOR SHOWING CREDIT PAGE***********


void showcredit()
{
	iShowBMP(0,0,"imagess\\SHOWCREDIT.bmp");
}



//****************FUNCTION FOR SHOWING CURSOR***********
     

void cursor2()
{
	if(cursor1%2)scorer_name[cname]='|';
	else scorer_name[cname]=0;
	cursor1++;
}



//****************FUNCTION FOR SAVING GAME***********

void gamesaving()
{

	savegame.co_x=co_x;
	savegame.co_x2=co_x2;
	savegame.co_y=co_y;
	savegame.co_y2=co_y2;
	savegame.speed_limit=speed_limit;
	savegame.speed_limit2=speed_limit2;
	savegame.addition=addition;
	savegame.win=win;
	savegame.carselect=carsel[8];
	savegame.i=i;
	savegame.z=z;
	savegame.h=h;
	savegame.g=g;
	savegame.x2=x2;
	savegame.reach=reach;
	savegame.flag14=flag14;
	savegame.collision=collision;
	savegame.mycarposa=j;
	savegame.caught=caught;
	savegame.policespeed=policespeed;
	savegame.bust=bust;
	savegame.timec=timec;
	savegame.winamp=winamp;
	
	FILE *fp;
	fp=fopen("records\\gamesave","wb");
	fwrite(&savegame,sizeof(savegame),1,fp);
	
	fclose(fp);



}




//****************FUNCTION FOR LOADING GAME***********


void loadgame()
{
	
	FILE *fp;
	fp=fopen("records\\gamesave","rb");
	fread(&savegame,sizeof(savegame),1,fp);

	co_x=savegame.co_x;
	co_x2=savegame.co_x2;
	co_y=savegame.co_y;
	co_y2=savegame.co_y2;
	speed_limit=savegame.speed_limit;
	speed_limit2=savegame.speed_limit2;
	addition=savegame.addition;
	win=savegame.win;
	carsel[8]=savegame.carselect;
	i=savegame.i;
	z=savegame.z;
	g=savegame.g;
	h=savegame.h;
	x2=savegame.x2;
	reach=savegame.reach;
	flag14=savegame.flag14;
	collision=savegame.collision;
	j=savegame.mycarposa;
	caught=savegame.caught;
	policespeed=savegame.policespeed;
	bust=savegame.bust;
	timec=savegame.timec;
	winamp=savegame.winamp;
	

	flag=1;
	fclose(fp);
}




//****************FUNCTION FOR SHOWING HELPPAGE***********

void helppage()
{
	iShowBMP(0,0,"imagess/SHOWHELP1.bmp");

}




//****************FUNCTION FOR SHOWING PROPERTIES***********

void showrace()
{
	speed1=(int)(x2*50);
	speed1_c=(int)(x2_c*50);

	sprintf(speedy,"%d",speed1);
	sprintf(speedy_c,"%d",speed1_c);


	iSetColor(RED);
	iText(750,450,"SPEED 1:",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(850,450,speedy,GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(BLUE);
	iText(750,400,"SPEED 2:",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(850,400,speedy_c,GLUT_BITMAP_TIMES_ROMAN_24);

	

}


//****************FUNCTION FOR CALLING POLICE***********


void blink()
{
	counter=!counter;
}

//****************FUNCTION FOR CHECKING COLLISION***********

void anothercarposition()
{
}

void anothercarspeed()
{
}


//****************FUNCTION FOR DETERMINE SECOND OTHER CAR SPEED***********

void anothercarspeed2()
{
}



void collide_car()
{

}

void traffic_rand()
{
	if(random==1)
	{
		co_x=rand()%650;
		
		if(co_x>300 && co_x<=400)co_x+=10;
		if(co_x>200 && co_x<=300)co_x+=100;
		if(co_x>100 && co_x<=200)co_x+=200;
		if(co_x>0 && co_x<=100)co_x+=300;

		random=0;
	}

	if(random3==1)
	{
		co_x2=rand()%650;
		
		if(co_x2>300&&co_x2<=400)co_x2+=10;
		if(co_x2>200&&co_x2<=300)co_x2+=100;
		if(co_x2>100&&co_x2<=200)co_x2+=200;
		if(co_x2>0&&co_x2<=100)co_x2+=300;

		if((co_x2+72>=co_x)&&(co_x2<co_x))co_x2-=100;
		if((co_x2+72>=co_x)&&(co_x2<=co_x+72))co_x2+=100;

		random3=0;
	
	}

	if(speed_limit2>=1580)
	{
		random3=1;
		random4=1;
	
	}
	
	if(speed_limit>=2480)
	{
		random=1;
		random2=1;
	}
	
	if(random4==1)
	{
		carchoice2=rand()%2;
		random4=0;
	}

	if(random2==1)
	{
		carchoice=rand()%2;
		random2=0;
	
	}

	if(mode1==1)
	{
		anothercarspeed2();
	
	}

	if(mode1==0)
	{
		speed2+=.0005;
		if(speed2>=1.5)speed2=1.5;
	
	}

	if(mode1==1)
	{
		anothercarspeed();
		
	}
	if(mode1==0)
	{
		speed+=.0002;
		if(speed>=1.2)speed=1.2;
	
	}

	if(mode1==1) speed_limit+=speed;

	if(mode1==0) speed_limit-=speed;

	if(mode1==1)speed_limit2+=speed2;

	if(mode1==0)speed_limit2-=speed2;
		
	if(speed_limit>=2500) speed_limit=5;


	if(speed_limit2>=1680) speed_limit2=5;
	
	if(carchoice==0)
	{

		car1_x=co_x;
		car1_y=co_y-speed_limit;

		iShowBMP(car1_x,car1_y,"imagess//5.bmp");
	

	}
	else
	{
		car1_x=co_x;
		car1_y=co_y-speed_limit;

		iShowBMP(car1_x,car1_y,"imagess//6.bmp");
	}


	if(carchoice2==0)
	{
		car1_x2=co_x2;
		car1_y2=co_y2-speed_limit2;

		iShowBMP(car1_x2,car1_y2,"imagess//2.bmp");
	}
	else
	{
		car1_x2=co_x2;
		car1_y2=co_y2-speed_limit2;

		iShowBMP(car1_x2,car1_y2,"imagess//4.bmp");
	}

}

int collision_valid_1()
{
	if(car1_x>j && car1_y>=y)					
	{
	if((car1_x-j<=80) && (car1_y-y<=160))
		return 1;
	}

	else if(car1_x>j && car1_y<=y)
	{
	if((car1_x-j<=80) && (y-car1_y<=160))
		return 1;
	}

	else if(j>car1_x && car1_y>=y)		 
	{
	if((j-car1_x<=80) && (car1_y-y<=160))
		return 1;
	}

	else if(j>car1_x && car1_y<=y)
	{
	if((j-car1_x<=80) && (y-car1_y<=160))
		return 1;
	}

	return 0;
}

int collision_valid_2()
{

	if(car1_x2>j && car1_y2>=y)					
	{
	if((car1_x2-j<=80) && (car1_y2-y<=160))
		return 1;
	}

	else if(car1_x2>j && car1_y2<=y)
	{
	if((car1_x2-j<=80) && (y-car1_y2<=160))
		return 1;
	}

	else if(j>car1_x2 && car1_y2>=y)		 
	{
	if((j-car1_x2<=80) && (car1_y2-y<=160))
		return 1;
	}

	else if(j>car1_x2 && car1_y2<=y)
	{
	if((j-car1_x2<=80) && (y-car1_y2<=160))
		return 1;
	}

	return 0;

}

int collision_valid_1_c()
{
	if(car1_x>j_c && car1_y>=y_c)					
	{
	if((car1_x-j_c<=80) && (car1_y-y_c<=160))
		return 1;
	}

	else if(car1_x>j_c && car1_y<=y_c)
	{
	if((car1_x-j_c<=80) && (y_c-car1_y<=160))
		return 1;
	}

	else if(j_c>car1_x && car1_y>=y_c)		 
	{
	if((j_c-car1_x<=80) && (car1_y-y_c<=160))
		return 1;
	}

	else if(j_c>car1_x && car1_y<=y_c)
	{
	if((j_c-car1_x<=80) && (y_c-car1_y<=160))
		return 1;
	}

	return 0;
}

int collision_valid_2_c()
{
	if(car1_x2>j_c && car1_y2>=y_c)					
	{
	if((car1_x2-j_c<=80) && (car1_y2-y_c<=160))
		return 1;
	}

	else if(car1_x2>j_c && car1_y2<=y_c)
	{

	if((car1_x2-j_c<=80) && (y_c-car1_y2<=160))
		return 1;
	}

	else if(j_c>car1_x2 && car1_y2>=y_c)		 
	{
	if((j_c-car1_x2<=80) && (car1_y2-y_c<=160))
		return 1;
	}

	else if(j_c>car1_x2 && car1_y2<=y_c)
	{
	if((j_c-car1_x2<=80) && (y_c-car1_y2<=160))
		return 1;
	}

	return 0;

}

void declare_win()
{
	if(y>y_c)
	{
		switch(color_track)
		{
		 case 1:
		 iShowBMP(0,0,"imagess//pliss_0.bmp");break;
		 case 2:
		 iShowBMP(0,0,"imagess//pliss_1.bmp");break;
		 case 3:
		 iShowBMP(0,0,"imagess//pliss_2.bmp");break;
		 case 4:
		 iShowBMP(0,0,"imagess//pliss_3.bmp");break;
		 case 5:
		 iShowBMP(0,0,"imagess//pliss_4.bmp");break;

		 default:
			iShowBMP(0,0,"imagess//pliss_0.bmp");break;
		}


		   
		 
	}

	if(y_c>y)
	{
		switch(color_track)
		{
		 case 5:
		 iShowBMP(0,0,"imagess//pliss_5.bmp");break;
		 case 1:
		 iShowBMP(0,0,"imagess//pliss_1.bmp");break;
		 case 2:
		 iShowBMP(0,0,"imagess//pliss_2.bmp");break;
		 case 3:
		 iShowBMP(0,0,"imagess//pliss_3.bmp");break;
		 case 4:
		 iShowBMP(0,0,"imagess//pliss_4.bmp");break;

		 default:
			iShowBMP(0,0,"imagess//pliss_1.bmp");break;
		}
		  
		   
		
	}

	if(y_c==y)
	{
		iShowBMP(0,0,"imagess//pliss_draw.bmp");
		  
	    draw=1;
	}

}





