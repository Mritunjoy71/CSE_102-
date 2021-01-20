# include "iGraphics.h"

int x,y;
double bx=50,by=800;
int dx;
int ax=450,ay,ap=ax+130,aq;


/*
	function iDraw() is called again and again by the system.

	*/
void draw_bird(int bx,int by)
{
    iFilledCircle(bx,by,10,50);//head
    iFilledEllipse(bx+60,by,50,20);//body
    iLine(bx+60,by,bx+80,by+60);//wing
    iLine(bx+60,by,bx+40,by+60);//wing
    iLine(bx+60,by,bx+140,by+10);//tail
    iLine(bx+60,by,bx+140,by+15);//tail
    iLine(bx+60,by,bx+45,by-60);//leg
    iLine(bx+60,by,bx+75,by-60);//leg



}
void draw_hunter(int x,int y)
{
    iFilledCircle(x,y,30);//head
    iFilledRectangle(x-10,y-60,20,30);//colar
    iFilledRectangle(x-20,y-260,40,200);//body
    iLine(x-20,y-100,x-50,y-150);//hand
    iLine(x+20,y-100,x+50,y-150);//hand
    iFilledRectangle(x-15,y-300,5,40);//leg
    iFilledRectangle(x+10,y-300,5,40);//leg

}
void draw_arrow(int ax,int ay,int ap,int aq)
{
    iLine(ax,ay,ap,aq);
    iLine(ax,ay,ax+130,ay);
    iLine(ax+130,ay,ax+125,ay-5);
    iLine(ax+130,ay,ax+125,ay+5);

}

void draw_bow(double box,double boy){
    iLine(box,boy-65,box,boy+65);
    iLine(box,boy,box+130,boy);
    iLine(box+130,boy,box+125,boy-5);
    iLine(box+130,boy,box+125,boy+5);
    iLine(box+65,boy,box,boy+65);
    iLine(box+65,boy,box,boy-65);
}

void iDraw() {
	//place your drawing codes here
	iClear();
	iSetColor(255, 200, 200);
	//iFilledCircle(x, y, r);
	//iFilledRectangle(20, 30, 20, 20);
	draw_bird(bx,800);//1
	draw_bird(bx+150,800);//2
	draw_bird(bx+300,800);//3
	draw_bird(bx+450,800);//4
	draw_bird(bx+600,800);//5

	iSetColor(0,255,200);
	draw_hunter(400,350);

	draw_arrow(ax,225,ax+130,225);

	draw_bow(450,225);

	iSetColor(20, 255,0);
	iText(300,100, "shoot me");
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
		x += 10;
		y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		x -= 10;
		y -= 10;
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	//place your codes for other keys here
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

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here
}
void birdchange(){
    if(bx<=-800)
        bx=bx+2000;
    else
        bx=bx-dx;
}

/*void arrowchange(){
    ax+=dx;
    if(ax>=900)
        dx=0;
}*/


int main() {
	//place your own initialization codes here.
	iSetTimer(10,birdchange);
	//iSetTimer(10,arrowchange);
    dx=1;
	iInitialize(900, 900, "demo");
	return 0;
}
