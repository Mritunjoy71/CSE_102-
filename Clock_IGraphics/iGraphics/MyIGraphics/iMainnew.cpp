# include "iGraphics.h"

int x = 300, y = 300, r = 20;
/*
	function iDraw() is called again and again by the system.

	*/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void gettime(int t[]) {
    char time[10];
	strcpy(time, __TIME__);
	char word[3];
	strcpy(word, strtok(time, ":"));
	t[0] = atoi(word);
	strcpy(word, strtok(NULL, ":")); // strcpy(word, strtok(0, ":"));
	t[1] = atoi(word);
	strcpy(word, strtok(NULL, ":"));
	t[2] = atoi(word);
}

void iDraw() {
	//place your drawing codes here
	iClear();
	void gettime(int t[]);
	int a,b;
	a=t[0]/10;
	b=t[0]%10;




	//1

	iSetColor(255, 0, 0);
	iFilledRectangle(100,100,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(100,152,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(112,192,30,10);

	iSetColor(255,0,0);
	iFilledRectangle(144,152,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(144,100,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(112,100,30,10);

	iSetColor(255,0,0);
	iFilledRectangle(112,146,30,10);

	//2



	iSetColor(255, 0, 0);
	iFilledRectangle(167,100,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(167,152,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(179,192,30,10);

	iSetColor(255,0,0);
	iFilledRectangle(211,152,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(211,100,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(179,100,30,10);

	iSetColor(255,0,0);
	iFilledRectangle(179,146,30,10);

	//3




	iSetColor(255, 0, 0);
	iFilledRectangle(244,100,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(244,152,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(256,192,30,10);

	iSetColor(255,0,0);
	iFilledRectangle(288,152,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(288,100,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(256,100,30,10);

	iSetColor(255,0,0);
	iFilledRectangle(256,146,30,10);

	//4




	iSetColor(255, 0, 0);
	iFilledRectangle(311,100,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(311,152,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(323,192,30,10);

	iSetColor(255,0,0);
	iFilledRectangle(355,152,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(355,100,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(323,100,30,10);

	iSetColor(255,0,0);
	iFilledRectangle(323,146,30,10);

	//5




	iSetColor(255, 0, 0);
	iFilledRectangle(388,100,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(388,152,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(400,192,30,10);

	iSetColor(255,0,0);
	iFilledRectangle(432,152,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(432,100,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(400,100,30,10);

	iSetColor(255,0,0);
	iFilledRectangle(400,146,30,10);

	//6





	iSetColor(255, 0, 0);
	iFilledRectangle(455,100,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(455,152,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(467,192,30,10);

	iSetColor(255,0,0);
	iFilledRectangle(499,152,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(499,100,10,50);

	iSetColor(255,0,0);
	iFilledRectangle(467,100,30,10);

	iSetColor(255,0,0);
	iFilledRectangle(467,146,30,10);

	//circle draw

	iFilledCircle(232,126,8);
	iFilledCircle(232,176.5,8);

    iFilledCircle(377,126.5,8);
    iFilledCircle(377,176.5,8);


    iText(200, 50, "baler offline");

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


int main() {
	//place your own initialization codes here.
	iInitialize(1000, 600, "demo");
	return 0;
}
