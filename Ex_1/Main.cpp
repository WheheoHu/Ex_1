#include "glut.h"

#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"glu32.lib")
#pragma comment(lib,"glut32.lib")
void processmenu(int MenuID) {

	if (MenuID==4)
	{
		exit(0);
	}
}
void InitMenu() {
	int m_menuID=glutCreateMenu(processmenu);
	glutSetMenu(m_menuID);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutAddMenuEntry("Red", 1);
	glutAddMenuEntry("Green", 2);
	glutAddMenuEntry("Blue", 3);
	glutAddMenuEntry("EXIT", 4);
}
void InitWindow(){
	glutCreateWindow("simple");
	InitMenu();
}
	
	
void RenderScene() {
	glClear(GL_COLOR_BUFFER_BIT);
	

	glPointSize(2);
	glBegin(GL_POINTS);
	glColor3f(1, 0, 0);
	glVertex2f(0, 0);
	glEnd();

	glPointSize(3);
	glBegin(GL_POINTS);
	glColor3f(0, 1, 0);
	glVertex2f(0.5, 0);
	glEnd();

	glPointSize(4);
	glBegin(GL_POINTS);
	glColor3f(0, 0, 1);
	glVertex2f(0, 0.5);
	glEnd();


	glPointSize(5);
	glBegin(GL_POINTS);
	glColor3f(1, 0, 0);
	glVertex2f(-0.5,0);
	glEnd();

	glPointSize(6);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 0);
	glVertex2f(0, -0.5);
	glEnd();

	
	glFlush();
}
int main() {
	//´´½¨´°¿Ú
	InitWindow();
	glutDisplayFunc(RenderScene);
	glutMainLoop();
	return 0;
}