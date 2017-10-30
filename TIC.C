#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
union REGS in,out;
void mouseposi(int *xpos,int *ypos,int *click)
{
	in.x.ax=3;
	int86(51,&in,&out);
	*click=out.x.bx;
	*xpos=out.x.cx;
	*ypos=out.x.dx;
}
int callmouse()
{
	in.x.ax=1;
	int86(51,&in,&out);
	return 1;
}
void restrictmouseptr(int x1,int y1,int x2,int y2)
{
	in.x.ax=7;
	in.x.cx=x1;
	in.x.dx=x2;
	int86(51,&in,&out);
	in.x.ax=8;
	in.x.cx=y1;
	in.x.dx=y2;
	int86(51,&in,&out);
}
int p1c[3]={0,0,0},p1r[3]={0,0,0},p2c[3]={0,0,0},p2r[3]={0,0,0},p1d1=0,p1d2=0,p2d1=0,p2d2=0;
void c1(int x,int y)
{
			if(x<150 && x>50)
			{

				if(y>50 && y<150)
				{
					x=0;
					y=0;
					p1c[0]++;
					p1d1++;
					line(70,70,130,130);
					line(70,130,130,70);
				}
				else if(y>150 && y<250)
				{
					x=0;
					y=0;
					p1c[0]++;
					line(70,170,130,230);
					line(70,230,130,170);
				}
				else if(y>250 && y<350)
				{
					x=0;
					y=0;
					p1c[0]++;
					p1d2++;
					line(70,270,130,330);
					line(70,330,130,270);
				}
			}
			else if(x<250 && x>150)
			{

				if(y>50 && y<150)
				{
					x=0;
					y=0;
					p1c[1]++;
					line(170,70,230,130);
					line(170,130,230,70);
				}
				else if(y>150 && y<250)
				{
					x=0;
					y=0;
					p1c[1]++;
					p1d1++;
					p1d2++;
					line(170,170,230,230);
					line(170,230,230,170);
				}
				else if(y>250 && y<350)
				{
					x=0;
					y=0;
					p1c[1]++;
					line(170,270,230,330);
					line(170,330,230,270);
				}

			}
			else if(x<350 && x>250)
			{

				if(y>50 && y<150)
				{
					x=0;
					y=0;
					p1c[2]++;
					p1d2++;
					line(270,70,330,130);
					line(270,130,330,70);
				}
				else if(y>150 && y<250)
				{
					x=0;
					y=0;
					p1c[2]++;
					line(270,170,330,230);
					line(270,230,330,170);
				}
				else if(y>250 && y<350)
				{
					x=0;
					y=0;
					p1c[2]++;
					p1d1++;
					line(270,270,330,330);
					line(270,330,330,270);
				}
			}
}
void r1(int x,int y)
{
			if(y<150 && y>50)
			{

				if(x>50 && x<150)
				{
					x=0;
					y=0;
					p1r[0]++;
					line(70,70,130,130);
					line(70,130,130,70);
				}
				else if(x>150 && x<250)
				{
					x=0;
					y=0;
					p1r[0]++;
					line(170,70,230,130);
					line(170,130,230,70);
				}
				else if(x>250 && x<350)
				{
					x=0;
					y=0;
					p1r[0]++;
					line(270,70,330,130);
					line(270,130,330,70);
				}
			}
			else if(y<250 && y>150)
			{

				if(x>50 && x<150)
				{
					x=0;
					y=0;
					p1r[1]++;
					line(70,170,130,230);
					line(70,230,130,170);
				}
				else if(x>150 && x<250)
				{
					x=0;
					y=0;
					p1r[1]++;
					line(170,170,230,230);
					line(170,230,230,170);
				}
				else if(x>250 && x<350)
				{
					x=0;
					y=0;
					p1r[1]++;
					line(270,170,330,230);
					line(270,230,330,170);
				}

			}
			else if(y<350 && y>250)
			{

				if(x>50 && x<150)
				{
					x=0;
					y=0;
					p1r[2]++;
					line(70,270,130,330);
					line(70,330,130,270);
				}
				else if(x>150 && x<250)
				{
					x=0;
					y=0;
					p1r[2]++;
					line(170,270,230,330);
					line(170,330,230,270);
				}
				else if(x>250 && x<350)
				{
					x=0;
					y=0;
					p1r[2]++;
					line(270,270,330,330);
					line(270,330,330,270);
				}
			}
}
void c2(int x,int y)
{
			if(x<150 && x>50)
			{

				if(y>50 && y<150)
				{
					x=0;
					y=0;
					p2c[0]++;
					p2d1++;
					circle(100,100,25);
				}
				else if(y>150 && y<250)
				{
					x=0;
					y=0;
					p2c[0]++;
					circle(100,200,25);
				}
				else if(y>250 && y<350)
				{
					x=0;
					y=0;
					p2c[0]++;
					p2d2++;
					circle(100,300,25);
				}
			}
			else if(x<250 && x>150)
			{

				if(y>50 && y<150)
				{
					x=0;
					y=0;
					p2c[1]++;
					circle(200,100,25);
				}
				else if(y>150 && y<250)
				{
					x=0;
					y=0;
					p2c[1]++;
					p2d1++;
					p2d2++;
					circle(200,200,25);
				}
				else if(y>250 && y<350)
				{
					x=0;
					y=0;
					p2c[1]++;
					circle(200,300,25);
				}

			}
			else if(x<350 && x>250)
			{

				if(y>50 && y<150)
				{
					x=0;
					y=0;
					p2c[2]++;
					p2d2++;
					circle(300,100,25);
				}
				else if(y>150 && y<250)
				{
					x=0;
					y=0;
					p2c[2]++;
					circle(300,200,25);
				}
				else if(y>250 && y<350)
				{
					x=0;
					y=0;
					p2c[2]++;
					p2d1++;
					circle(300,300,25);
				}
			}
}
void r2(int x,int y)
{
			if(y<150 && y>50)
			{

				if(x>50 && x<150)
				{
					x=0;
					y=0;
					p2r[0]++;
					circle(100,100,25);
				}
				else if(x>150 && x<250)
				{
					x=0;
					y=0;
					p2r[0]++;
					circle(200,100,25);
				}
				else if(x>250 && x<350)
				{
					x=0;
					y=0;
					p2r[0]++;
					circle(300,100,25);
				}
			}
			else if(y<250 && y>150)
			{

				if(x>50 && x<150)
				{
					x=0;
					y=0;
					p2r[1]++;
					circle(100,200,25);
				}
				else if(x>150 && x<250)
				{
					x=0;
					y=0;
					p2r[1]++;
					circle(200,200,25);
				}
				else if(x>250 && x<350)
				{
					x=0;
					y=0;
					p2r[1]++;
					circle(300,200,25);
				}

			}
			else if(y<350 && y>250)
			{

				if(x>50 && x<150)
				{
					x=0;
					y=0;
					p2r[2]++;
					circle(100,300,25);
				}
				else if(x>150 && x<250)
				{
					x=0;
					y=0;
					p2r[2]++;
					circle(200,300,25);
				}
				else if(x>250 && x<350)
				{
					x=0;
					y=0;
					p2r[2]++;
					circle(300,300,25);
				}
			}


}
void main()
{
	int g=DETECT,gm,n=0,x,y,cl;
	int f1=0,f2=0;
	clrscr();
	initgraph(&g,&gm,"c:\\tc\\bgi");
	rectangle(20,20,600,450);
	line(150,50,150,350);
	line(250,50,250,350);
	line(50,150,350,150);
	line(50,250,350,250);
	setbkcolor(1);
	callmouse();
	restrictmouseptr(20,20,600,450);
	mouseposi(&x,&y,&cl);
	while(!kbhit())
	{
		if(n!=0)
			delay(500);
		mouseposi(&x,&y,&cl);


		if(cl==1)
		{
			c1(x,y);
			r1(x,y);



		}


		if(cl==2)
		{
			c2(x,y);
			r2(x,y);
		}


		n++;
		if(p1c[0]==3 || p1c[1]==3 || p1c[2]==3 || p1r[0]==3 || p1r[1]==3 || p1r[2]==3 || p1d1==3 || p1d2==3)
		{
			f1=1;
			break;
		}
		else if(p2c[0]==3 || p2c[1]==3 || p2c[2]==3 || p2r[0]==3 || p2r[1]==3 || p2r[2]==3 || p2d1==3|| p2d2==3)
		{
			f2=1;
			break;
		}
	}
	if(f1==1)
	{


		setbkcolor(3);
		printf("player 1 wins");
	}
	else if(f2==1)
	{

		setbkcolor(3);
		printf("player 2 wins");
	}



	else
	{

		setbkcolor(3);
		printf("draw");
	}
	getch();
}