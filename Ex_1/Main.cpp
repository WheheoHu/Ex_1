#include <stdlib.h>

#include "glut.h"
#include "CoordinateXY.h"


//#pragma comment(lib,"opengl32.lib")
//#pragma comment(lib,"glu32.lib")
#pragma comment(lib,"glut32.lib")

bool creak = false;
static CoordinateXY   coorxy;

//test code
void setXY(int x,int y) {
	coorxy.setX(x);
	coorxy.setY(y);
}

//右键菜单更改颜色
void processmenu(int MenuID) {

	switch (MenuID)
	{
	case 0: {
		glColor3f(1, 1, 1);
		glutPostRedisplay();
		break;
	}
	case 1: {
		glColor3f(1, 0, 0);
		glutPostRedisplay();
		break;
	}
	case 2: {
		glColor3f(0, 1, 0);
		glutPostRedisplay();
		break;
	}
	case 3: {
		glColor3f(0, 0, 1);
		glutPostRedisplay();
		break;
	}
	case 4: {
		exit(0);
		break; }
	}
}

//初始化菜单
void InitMenu() {
	int m_menuID = glutCreateMenu(processmenu);
	glutSetMenu(m_menuID);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutAddMenuEntry("White", 0);
	glutAddMenuEntry("Red", 1);
	glutAddMenuEntry("Green", 2);
	glutAddMenuEntry("Blue", 3);
	glutAddMenuEntry("EXIT", 4);
}

//初始化窗口
void InitWindow() {
	glutInitWindowSize(640, 480);
	glutCreateWindow("simple");
	InitMenu();
}

//渲染
void RenderScene() {

	glMatrixMode(GL_PROJECTION);// sets the current matrix to projection
	glLoadIdentity();//multiply the current matrix by identity matrix
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);//sets the parallel(orthographic) projection of the full frame buffer 

	//glColor3f(1, 1, 0);
	glPointSize(10);
	if (creak)
	{

		
		glBegin(GL_POINTS);
		glVertex2i(coorxy.getCoorX(),coorxy.getCoorY());
		glEnd();
	}

	/*glBegin(GL_QUADS);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.5, -0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glEnd();*/

	glFlush();
}

void mouseProcess(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		creak = true;
		
		coorxy.setX(x);
		coorxy.setY(480 - y);
	}

	glutPostRedisplay();
}

int main() {
	//创建窗口
	InitWindow();


	//setXY(100, 200);
	glutDisplayFunc(RenderScene);
	
	glutMouseFunc(mouseProcess);

	glutMainLoop();
	return 0;
}