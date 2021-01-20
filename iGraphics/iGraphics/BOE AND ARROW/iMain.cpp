# include "iGraphics.h"
#include<math.h>

#define PI 3.141

/*
	function iDraw() is called again and again by the system.

	*/



	             /*********** Variable declaration ***********/

int x,y;
double bx=50,by=800;
double bx1=50,by1=50,bx2=50,by2=50,bx3=50,by3=50,bx4=50,by4=50,bx5=50,by5=50;
int kx,ky,s,mx=1,fb1=1;
double ax=450,ay,ap,aq,lx,ly;
double gx,gy,ad,ae,af,ag,vx=450,vy=120,zx,zy,r,r1;
double a,b;
int dx=2,dy=2,screen=0;
int t=0,v=3,dt=1;






                    /********** Functins **********/


void draw_bird1(int bx1,int by1)
{
    iFilledCircle(bx1+25,by1,5,20);//head //right going bird
    iFilledEllipse(bx1,by1,20,10);//body



}


void draw_bird2(int bx2,int by2)
{
    iFilledCircle(bx2+20,by2,5,20);//head   right going bird
    iFilledEllipse(bx2,by2,15,10);//body

}


void draw_bird3(int bx3,int by3)
{
    iFilledCircle(bx3,by3,4,10);//head
    iFilledEllipse(bx3+29,by3,25,15);//body



}


void draw_bird4(int bx4,int by4)
{
    iFilledCircle(bx4,by4,8,15);//head
    iFilledEllipse(bx4+26,by4,18,13);//body


}


void draw_bird5(int bx5,int by5)
{
    iFilledCircle(bx5,by5,5,20);//head
    iFilledEllipse(bx5+25,by5,20,14);//body


}



void draw_hunter(int x,int y)
{
    iFilledCircle(x,y,15);
    iFilledRectangle(x-20,y-75,40,60);
    iFilledRectangle(x-15,y-85,5,10);
    iFilledRectangle(x+10,y-85,5,10);

}


void draw_arrow(double ax,double ay)
{
    kx=gx-ax;
    ky=gy-ay;
    a=atan((ky)/(kx));
    if(a<0){
        a=a+PI;
    }
    ap=ax+50*cos(a);
    aq=ay+50*sin(a);
    iLine(ax,ay,ap,aq);
    ad=ax+30*cos(a+PI/2);
    ae=ay+30*sin(a+PI/2);

    af=ax+30*cos(a+(3*PI)/2);
    ag=ay+30*sin(a+(3*PI)/2);
    iLine(ad,ae,af,ag);
    iHalfCircle(ax,ay,30,a);

}


void draw_only_arrow(double vx,double vy){
    b=a;
    zx=vx+50*cos(b);
    zy=vy+50*sin(b);
    iLine(vx,vy,zx,zy);
}

void screen0(double sx,double sy){
    iRectangle(sx,sy,600,400);
    iText(sx+50,sy+40,"EXIT",GLUT_BITMAP_TIMES_ROMAN_24);
    iLine(sx,sy+100,sx+600,sy+100);
    iText(sx+50,sy+140,"SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
    iLine(sx,sy+200,sx+600,sy+200);
    iText(sx+50,sy+240,"INSTRUCTION",GLUT_BITMAP_TIMES_ROMAN_24);
    iLine(sx,sy+300,sx+600,sy+300);
    iText(sx+50,sy+340,"PLAY",GLUT_BITMAP_TIMES_ROMAN_24);
}

void birdchange1(){
    if(bx1>=1000)
        bx1=bx1-1000;
    else
        bx1=bx1+dx;
}


void birdchange2(){
    if(bx2>=800)
        bx2=bx2-750;
    else
        bx2=bx2+dx;
}


void birdchange3(){
    if(bx3<=-800)
        bx3=bx3+750;
    else
        bx3=bx3-dx;
}


void birdchange4(){
    if(bx4<=-800)
        bx4=bx4+850;
    else
        bx4=bx4-dx;
}


void birdchange5(){
    if(bx5<=-800)
        bx5=bx5+900;
    else
        bx5=bx5-dx;
}


void arrowchange(){

    if(vx<1000&&vx>0&&vy<650&&vy>0&&s==1){
        vx=vx+(v*cos(a))*t;
        vy=vy+(v*sin(a))*t-0.1*t*t;
        b=atan((v*sin(a)-0.05*t)/(v*cos(a)));
        if(b<0){
            b=b+2*PI;
        }
        zx=vx+50*cos(b);
        zy=vy+50*sin(b);
        if(zx>=bx&&zx<=bx+50){
            fb1=0;
        }
        t=t+dt;
    }
    else{
        s=0;
        vx=450;
        vy=120;
        t=0;
        b=a;
    }
}





                           /********* Idraw **********/

void iDraw() {

	//place your drawing codes here
	iClear();
    //iText(30,30,"INSTRUCTION",GLUT_BITMAP_TIMES_ROMAN_24);

     if(screen==0){
        screen0(200,150);
    }

	if(screen==1)
    {
        iClear();
        iSetColor(rand()%255, rand()%250, rand()%250);
        //iText(30,30,"INSTRUCTION",GLUT_BITMAP_TIMES_ROMAN_24);
        draw_bird1(bx1,500);//1
        draw_bird2(bx2+200,450);//2
        draw_bird3(bx3+300,400);//3
        draw_bird4(bx4+800,600);//4
        draw_bird5(bx5+650,550);//5

        iSetColor(255,200,250);
        draw_hunter(450,100);

        draw_arrow(ax,120);
        draw_only_arrow(vx,vy);
        //draw_bow(450,225);
        iSetColor(200, 255,255);
        iText(350,30, "HUNTER");
        iText(900,630,"SCORE");
        iRectangle(50,50,60,40);
        iText(55,65,"Back");
	}
	if(screen==2)
    {
        iText(200,300,"Click mouse to move the bow");
        iRectangle(200,150,60,40);
        iText(220,170,"Back");
    }

    if(screen==3)
    {
        iText(300,350,"Top five scorer\n1.player1\n2.player2");
        iRectangle(50,50,60,40);
        iText(55,65,"Back");
    }

    if(screen==4)
    {
        iRectangle(50,50,60,40);
        iText(55,65,"Back");
    }



}
/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);

		gx=mx;
		gy=my;

		if(gx>=200&&gx<=800&&gy>=450&&gy<=550&&screen==0){
            screen=1;
		}
		if(gx>=200&&gx<=800&&gy>=350&&gy<=450&&screen==0)
        {
            screen=2;

        }

        if(gx>=200&&gx<=800&&gy>=250&&gy<=350&&screen==0)
        {
            screen=3;
        }
        if(gx>=200&&gx<=800&&gy>=150&&gy<=250&&screen==0)
        {
            screen=4;
        }

        if(gx>=200&&gx<=260&&gy>=150&&gy<=190&&screen==2)
        {
            screen=0;
        }
         if(gx>=50&&gx<=110&&gy>=50&&gy<=90&&screen==3)
        {
            screen=0;
        }
        if(gx>=50&&gx<=110&&gy>=50&&gy<=90&&screen==4)
        {
            screen=0;
        }
         /** \brief
          *
          * \param gx>=50&&gx<=110&&gy>=50&&gy<=90&&screen==1
          *
          */
         if(gx>=50&&gx<=110&&gy>=50&&gy<=90&&screen==1)
        {
            screen=0;
        }



	}

}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
    if(key ==' '){
        s=1;
    }
}

void iPassiveMouseMove(int mx,int my)
{

//if(mx== 1){}       /*Something to do with mx*/
// else if(my== 2){}   /*Something to do with my*/

}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {


}



int main() {


    iSetTimer(15,birdchange1);
    iSetTimer(10,birdchange2);
    iSetTimer(12,birdchange3);
    iSetTimer(17,birdchange4);
    iSetTimer(14,birdchange5);


    iSetTimer(0.0000001,arrowchange);

	iInitialize(1000,650,"bows && arrows");
	return 0;
}
