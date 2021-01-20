# include "iGraphics.h"
#include <string.h>
#include<math.h>

#define PI 3.141

/*
	function iDraw() is called again and again by the system.

	*/



	             /*********** Variable declaration ***********/

int t1[1]={0};
int highscore(int n);
char best[15];
int x,y;
double bx=50,by=800;
double bx1=100,by1=520,bx2=300,by2=450,bx3=400,by3=400,bx4=900,by4=480,bx5=750,by5=560;
int kx,ky,s,mx=1;
double ax=450,ay,ap,aq,lx,ly;
double gx,gy,ad,ae,af,ag,vx=450,vy=120,zx,zy,r,r1;
double a,b=a;
int dx=2,dy=2,screen=0;
int t=0,v=3,dt=1;
int fb1=1,fb2=1,fb3=1,fb4=1,fb5=1;
int score=0,acount=0;
char str2[20];
char temp2[10];
char temp3[10];
int m;

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
    zx=vx+50*cos(b);
    zy=vy+50*sin(b);
    iLine(vx,vy,zx,zy);
}

void screen0(double sx,double sy){
    iSetColor(0,0,255);
    iFilledRectangle(sx,sy,600,300);
    iSetColor(255,0,255);
    iText(sx+50,sy+40,"EXIT",GLUT_BITMAP_TIMES_ROMAN_24);
    iLine(sx,sy+100,sx+600,sy+100);
    iLine(sx,sy+200,sx+600,sy+200);
    iText(sx+50,sy+140,"INSTRUCTION",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(sx+50,sy+240,"PLAY",GLUT_BITMAP_TIMES_ROMAN_24);
}



                           /********* Idraw ********/

void iDraw() {
    char score_str[30] = "SCORE: ";
    char temp[10];
    char best[15]="BEST SCORE: ";
    char temp2[10];
    //double bx1=100,by1=500,bx2=300,by2=450,bx3=400,by3=400,bx4=900,by4=600,bx5=750,by5=550;

	//place your drawing codes here
	iClear();
    //iText(30,30,"INSTRUCTION",GLUT_BITMAP_TIMES_ROMAN_24);

     if(screen==0){
        screen0(200,250);
    }



	if(screen==1)
    {
        //if(acount<=5){
            iClear();
            iSetColor(rand()%255, rand()%250, rand()%250);
        //iText(30,30,"INSTRUCTION",GLUT_BITMAP_TIMES_ROMAN_24);

            draw_bird1(bx1,by1);


            draw_bird2(bx2,by2);//2


            draw_bird3(bx3,by3);//3


            draw_bird4(bx4,by4);//4
            draw_bird5(bx5,by5);//5




            iSetColor(255,200,250);
            draw_hunter(450,100);

            draw_arrow(ax,120);
            draw_only_arrow(vx,vy);
        //draw_bow(450,225);
            iSetColor(200, 255,255);
            iText(350,30, "HUNTER");
        //strca
            strcat(score_str,itoa(score,temp,10));
            iText(900,630,score_str);
            iRectangle(50,50,60,40);
            iText(55,65,"Back");

	}


	if(screen==2)
    {
        iText(200,200,"Don't attempt to throw one more arrow at a time.");
        iText(200,300,"Click left button of mouse to move the bow.");
        iText(200,250,"Click right button of the mouse to throw an arrow.");
        iText(200,350,"Shoot the birds to score better.");
        iSetColor(0,0,255);
        iFilledRectangle(200,150,60,40);
        iSetColor(255,0,255);
        iText(220,170,"Back");
    }



    if(screen==3)
    {
        exit(0);
    }
    if(screen==5){
        iClear();
            char score_str[30] = "YOUR SCORE IS: ";
            char temp2[10];
            iSetColor(255,20,250);
            iRectangle(200,200,600,300);
            iLine(200,300,800,300);
            iLine(200,400,800,400);
            iSetColor(200,5,250);
            strcat(score_str,itoa(score,temp2,10));
           // iText(240,240,"BEST SCORE:",GLUT_BITMAP_TIMES_ROMAN_24);


            iText(240,340,score_str,GLUT_BITMAP_TIMES_ROMAN_24);

            temp3[10];
            highscore(score);
            strcat(best,itoa(t1[0],temp3,10));
            //iText(240,240,bestscore);
            //strcpy(best,itoa(t1[0],temp2,10));
            iText(240,240,best,GLUT_BITMAP_TIMES_ROMAN_24);


            iText(240,440,"GAME OVER",GLUT_BITMAP_TIMES_ROMAN_24);
            iFilledRectangle(50,50,60,50);
            iSetColor(255,0,0);
            iText(55,55,"back");


    }
    if(screen==1&&vx!=450&&vy!=120){
        if(zx>=(bx1-20)&&zx<=(bx1+30)&&zy>=(by1-10)&&zy<=(by1+10)){
            bx1=0;

            score=score+5;
            s=0;
            vx=450;
            vy=120;
            t=0;
            b=a;
        }


        if(screen==5){
        iClear();
            char score_str[30] = "YOUR SCORE IS: ";
            char temp[10];
            iSetColor(255,20,250);
            iRectangle(200,200,600,300);
            iLine(200,300,800,300);
            iLine(200,400,800,400);
            iSetColor(200,5,250);
            strcat(score_str,itoa(score,temp,10));
            iText(240,240,"BEST SCORE:",GLUT_BITMAP_TIMES_ROMAN_24);

            //iText(240,340,"YOUR SCORE IS:",GLUT_BITMAP_TIMES_ROMAN_24);
            iText(240,340,score_str,GLUT_BITMAP_TIMES_ROMAN_24);
            //char bestscore[30]="BEST";
            //temp3[10];
            //m=highscore(score);
            //strcat(bestscore,itoa(m,temp3,10));
            //iText(240,240,bestscore);

            strcpy(best,itoa(highscore(score),temp,10));
            iText(400,240,best,GLUT_BITMAP_TIMES_ROMAN_24);


            iText(240,440,"GAME OVER",GLUT_BITMAP_TIMES_ROMAN_24);


    }


        if(zx>=(bx2-15)&&zx<=(bx2+25)&&zy>=(by2-10)&&zy<=(by2+10)){
            bx2=0;

            score=score+5;
            s=0;
            vx=450;
            vy=120;
            t=0;
            b=a;
        }

        if(zx>=(bx3-4)&&zx<=(bx3+54)&&zy>=(by3-13)&&zy<=(by3+13)){
            bx3=0;

            score=score+5;
            s=0;
            vx=450;
            vy=120;
            t=0;
            b=a;
        }


        if(zx>=(bx4-8)&&zx<=(bx4+44)&&zy>=(by4-13)&&zy<=(by4+13)){
            bx4=0;

            score=score+5;
            s=0;
            vx=450;
            vy=120;
            t=0;
            b=a;
        }


        if(zx>=(bx5-5)&&zx<=(bx5+45)&&zy>=(by5-14)&&zy<=(by5+14)){
            bx5=0;

            score=score+5;
            s=0;
            vx=450;
            vy=120;
            t=0;
            b=a;
        }

        if(zx>=(bx1-20)&&zx<=(bx1+30)&&zy>=(by1-10)&&zy<=(by1+10)){
            bx1=0;

            score=score+5;
            s=0;
            vx=450;
            vy=120;
            t=0;
            b=a;
        }


        if(zx>=(bx2-15)&&zx<=(bx2+25)&&zy>=(by2-10)&&zy<=(by2+10)){
            bx2=0;

            score=score+5;
            s=0;
            vx=450;
            vy=120;
            t=0;
            b=a;
        }

        if(zx>=(bx3-4)&&zx<=(bx3+54)&&zy>=(by3-13)&&zy<=(by3+13)){
            bx3=0;

            score=score+5;
            s=0;
            vx=450;
            vy=120;
            t=0;
            b=a;
    }


        if(zx>=(bx4-8)&&zx<=(bx4+44)&&zy>=(by4-13)&&zy<=(by4+13)){
            bx4=0;

            score=score+5;
            s=0;
            vx=450;
            vy=120;
            t=0;
            b=a;
        }


        if(zx>=(bx5-5)&&zx<=(bx5+45)&&zy>=(by5-14)&&zy<=(by5+14)){
            bx5=0;

            score=score+5;
            s=0;
            vx=450;
            vy=120;
            t=0;
            b=a;
        }



    }

    }

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	//printf("x = %d, y= %d\n",mx,my);
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

		if(vx==450&&vy==120){
            gx=mx;
            gy=my;
		}
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
         if(gx>=50&&gx<=110&&gy>=50&&gy<=100&&screen==5)
        {
            screen=0;
            acount=0;
        }

    }

    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN){
        s=1;
        acount++;
        if(acount>=20){
            screen=5;


        }
    }

}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {

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

void birdchange1(){
    if(bx1>=1000){
        bx1=bx1-900;
       // printf("bx1=%.2lf,by1=%.2lf",bx1,by1);
    }
    else{
        bx1=bx1+dx;
        //printf("bx1=%.2lf,by1=%.2lf",bx1,by1);
    }
}


void birdchange2(){
    if(bx2>=800)
        bx2=bx2-750;
    else
        bx2=bx2+dx;
}


void birdchange3(){
    if(bx3<=50)
        bx3=bx3+900;
    else
        bx3=bx3-dx;
}


void birdchange4(){
    if(bx4<=100)
        bx4=bx4+850;
    else
        bx4=bx4-dx;
}


void birdchange5(){
    if(bx5<=150){
        bx5=bx5+750;
    }

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
        /*if(vx>=(bx1-20)&&vx<=(bx1+30)){
            fb1=0;
        }*/
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

/*
void filewrie()
{
    FILE * fp;
    char str2[20];
    fp = fopen("highscore.txt","w");
    fputs(str2,fp);
    fclose(fp);

}

void filewri()
{
    FILE * fp;
    fp = fopen("highscore.txt","w");
    fputs(str2,fp);
    fclose(fp);

}
void highscore()
{
    FILE * fp;
    int i = 0;
    int c;
    fp = fopen("highscore.txt", "r");
    if (fp == NULL)
    {
        printf("File doesn't exists!\n");
        exit(1);
    }
    printf("File successfully opened\n");
    char buffer[10]="";
    while(1)
    {
        c = fgetc(fp);
        if ( c != EOF )
        {
            sprintf(buffer,"%c",c);
            strcat(hs,buffer);
        }
        else
        {
            break;
        }
    }
    printf(hs);
    fclose(fp);
}

*/
int highscore(int n){
    FILE *fp;

    fp=fopen("hs.txt","r");
    if(fp==NULL){
        fp=fopen("hs.txt","w");
        t1[0];
        fprintf(fp,"%d",t1[0]);
    }else{
        fscanf(fp,"%d",&t1[0]);
    }
    fclose(fp);

    if(n>t1[0]) t1[0]=n;

    fp=fopen("hs.txt","w");
    fprintf(fp,"%d",t1[0]);
    fclose(fp);
    return t1[0];
}

int main() {


    iSetTimer(30,birdchange1);
    iSetTimer(10,birdchange2);
    iSetTimer(12,birdchange3);
    iSetTimer(17,birdchange4);
    iSetTimer(14,birdchange5);


    iSetTimer(25,arrowchange);

	iInitialize(1000,650,"SHOOTING BIRD");
	return 0;
}
