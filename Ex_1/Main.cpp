#include <iostream>
#include "glut.h"
#include "CoordinateXY.h"


#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"glu32.lib")
#pragma comment(lib,"glut32.lib")

#define WHITE 0
#define RED 1;
#define GREEN 2;
#define BLUE 3;
int ChangeColor = WHITE;


//右键菜单更改颜色
void processmenu(int MenuID) {

	switch (MenuID)
	{
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
	int m_menuID=glutCreateMenu(processmenu);
	glutSetMenu(m_menuID);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutAddMenuEntry("Red", 1);
	glutAddMenuEntry("Green", 2);
	glutAddMenuEntry("Blue", 3);
	glutAddMenuEntry("EXIT", 4);
}

//初始化窗口
void InitWindow(){
	glutCreateWindow("simple");
	InitMenu();
}

//渲染
void RenderScene() {
	glClear(GL_COLOR_BUFFER_BIT);
	

	
	glBegin(GL_QUADS);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.5, -0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glEnd();



	
	glFlush();
}


int main() {
	//创建窗口
	InitWindow();
	glutDisplayFunc(RenderScene);
	glutMainLoop();
	return 0;
}