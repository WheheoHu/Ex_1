#include "glut.h"

#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"glu32.lib")
#pragma comment(lib,"glut32.lib")

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
	glutCreateWindow("simple");
	glutDisplayFunc(RenderScene);
	glutMainLoop();
	return 0;
}