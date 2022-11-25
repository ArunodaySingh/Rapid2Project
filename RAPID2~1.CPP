// Include header file here
#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h> //current date time control also  delay control
#include <iomanip.h>
#include <string.h>


// Open Page
class first_page
{
public:
	void first_page1()
	{
		setbkcolor(WHITE);
		setcolor(BLUE);
		for (int i = 0; i < 300; i++)
		{
			circle(320, 250, i);
			delay(8);
		}
		setcolor(YELLOW);
		delay(1000);
		outtextxy(180, 140, "WELCOME TO OUR PROJECT DESIGNED BY");
		setcolor(YELLOW);
		delay(1000);
		outtextxy(110, 200, "Arunoday Singh");
		setcolor(YELLOW);
		delay(1000);
		outtextxy(110, 220, "Aman Joshi");
		setcolor(YELLOW);
		delay(1000);
		outtextxy(110, 240, "Raghav Gupta");
		setcolor(LIGHTRED);
		delay(1000);
		outtextxy(210, 300, "PRESS ANY KEY TO CONTINUE");
		getch();
	}
};

// Second page (Only for gui)
class second_page
{
public:
	void second_page1()
	{
		setbkcolor(BLACK);
		int z = 0, x = 0;
		for (int g = 0; g <= 9; g++)
		{
			setcolor(g); // INDEX BHI KAAM KREGA OR VALUE BHI KREGA
			for (int a = 0; a <= 47; a++)
			{
				rectangle(0, z, 639, 479);
				delay(6);
				z++;
			}
		}
		settextstyle(1, 0, 2); // TO CHANGE THE STYLE OF FONT 1=FORMAT 0=DIRECTION(ROTATE) 2=FONT WIDTH(SIZE)
		setcolor(BLUE);
		outtextxy(220, 160, "OUR TEAM PRESENTS");
		for (int h = 9; h >= 0; h--)
		{
			setcolor(h);
			for (int y = 0; y <= 63; y++)
			{
				rectangle(x, 0, 639, 479);
				delay(6);
				x++;
			}
		}
		settextstyle(1, 0, 2);
		setcolor(YELLOW);
		outtextxy(198, 160, "RAPID2FOOD SYSTEM");
		settextstyle(2, 0, 5);
		outtextxy(0, 330, "The goal is to design a systematic placing orders in which customer can place");
		outtextxy(0, 350, "their food anywhere and shop can get the order beforehand. So they both ");
		outtextxy(0, 370, "able to utilize their crucial time efficiently");
		getch();
	}
};


class LOGIN_PAGE
{
public:
	void login();
		void registeration();
	int block_no, choose;
	// Main Function called after successful login
	void MAIN_PAGE()
	{
		setbkcolor(BLACK);
		for (int i = 0; i <= 9; i++)
		{
			setcolor(i);
			for (int j = 10; j <= 60; j++)
			{
				circle(0, 0, j);
				delay(2);
			}
			for (int k = 10; k <= 60; k++)
			{
				circle(639, 479, k);
				delay(2);
			}
			for (int l = 10; l <= 60; l++)
			{
				circle(639, 0, l);
				delay(2);
			}
			for (int m = 10; m <= 60; m++)
			{
				circle(0, 479, m);
				delay(2);
			}
		}
		settextstyle(1, 0, 2);
		setcolor(WHITE);
		outtextxy(178, 100, "CHOOSE THE FOOD COURT BLOCK");
		delay(2);
		settextstyle(2, 0, 5);
		outtextxy(168, 150, "Press 1: Block A");
		delay(1);
		outtextxy(168, 170, "Press 2: Block B");
		delay(1);
		outtextxy(168, 190, "Press 3: Block C");
		delay(1);
		outtextxy(168, 210, "Press 4: Block D");
		delay(1);
		outtextxy(168, 230, "Press 5: Block E");
		gotoxy(20, 40); // 25,80 r,c
		cin >> block_no;
		switch (block_no)
		{
		case 1:
			void block1();
			break;
		case 2:
			void block2();
			break;
		case 3:
			void block3();
			break;
		case 4:
			void block4();
			break;
		case 5:
			void block5();
			break;
		default:
			settextstyle(2, 0, 5);
			outtextxy(222, 350, "PRESS ANY KEY TO RETRY");
			getch();
			exit(0);
		}
	}
	// Main function end here

     //Login page start
	void LOGIN_PAGE1()
	{

		setbkcolor(BLACK);
		for (int i = 0; i <= 9; i++)
		{
			setcolor(i);
			for (int j = 10; j <= 60; j++)
			{
				circle(0, 0, j);
				delay(2);
			}
			for (int k = 10; k <= 60; k++)
			{
				circle(639, 479, k);
				delay(2);
			}
			for (int l = 10; l <= 60; l++)
			{
				circle(639, 0, l);
				delay(2);
			}
			for (int m = 10; m <= 60; m++)
			{
				circle(0, 479, m);
				delay(2);
			}
		}
		settextstyle(1, 0, 2);
		setcolor(WHITE);
		outtextxy(178, 100, "CHOOSE THE OPTION");
		delay(2);
		settextstyle(2, 0, 5);
		outtextxy(168, 150, "Press 1: Login");
		delay(1);
		outtextxy(168, 170, "Press 2: Registeration");
		delay(1);
		gotoxy(20, 40); // 25,80 r,c
		cin >> choose;
		switch (choose)
		{
		case 1:
		     cleardevice();
			 login();
			break;
		case 2:
		    cleardevice();
			registeration();
			break;
		default:
			settextstyle(2, 0, 5);
			outtextxy(222, 350, "PRESS ANY KEY TO RETRY");
			exit(0);
			getch();
		}

	}
	// login end here
};
void LOGIN_PAGE::login()
{
 again1:
 char USERID[30];
 char PASSWORD[20];
       setbkcolor(BLACK);
       for(int i=0;i<=9;i++){
	setcolor(i);
	for(int j=10;j<=60;j++){
	circle(0,0,j);
	delay(2);
       }
       for(int k=10;k<=60;k++){
       circle(639,479,k);
       delay(2);
       }
       for(int l=10;l<=60;l++){
	circle(639,0,l);
	delay(2);
       }
       for(int m=10;m<=60;m++){
	circle(0,479,m);
	delay(2);
       }
       }
       delay(1000);
       setcolor(LIGHTBLUE);
       settextstyle(1,0,10);
       outtextxy(140,30,"LOGIN");
       settextstyle(1,0,2);
       outtextxy(100,240,"USERID");
       outtextxy(100,280,"PASSWORD");
       setcolor(3);
       gotoxy(35,16);
       cin>>USERID;
       gotoxy(35,19);
       cin>>PASSWORD;
      if(strcmp(USERID,"Project")==0 && strcmp(PASSWORD,"12345")==0){
       cleardevice();
	MAIN_PAGE();
       }else{
       settextstyle(2,0,5);
	outtextxy(200,330,"INCORRECT USERID OR PASSWORD");
	outtextxy(222,350,"PRESS ANY KEY TO RETRY");
	getch();
	cleardevice();
	goto again1;
       }
       getch();
 }


void LOGIN_PAGE::registeration()
{
cout<<"I am registered"<<endl;
exit(0);
}




// driver function
	int main()
	{
		int gm = DETECT, gd;					 // graphic driver binary number pa hota hai to initialse integer type pa hoga
		initgraph(&gm, &gd, "c:\\TURBOC3\\BGI"); // graphic mode inititialize x and y coordinate gd graphich driver
		first_page F;
		F.first_page1();
		cleardevice(); // Remove the animation
		second_page S;
		S.second_page1();
		cleardevice();

		LOGIN_PAGE L;
		L.LOGIN_PAGE1();
		return 0;
	}
