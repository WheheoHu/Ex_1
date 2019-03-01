#include "glut.h"

#pragma comment(lib,"opengl32.lib")

#pragma comment(lib,"glu32.lib")

#pragma comment(lib,"glut32.lib")

void RenderScene() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	glVertex2d(-0.5, -0.5);
	glVertex2d(-0.5, 0.5);
	glVertex2d(0.5, 0.5);
	glVertex2d(0.5, -0.5);
	glEnd();
	glFlush();
}
int main() {
	glutCreateWindow("simple");
	glutDisplayFunc(RenderScene);
	glutMainLoop();
	return 0;
}