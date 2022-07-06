#include "GLUT.h"

void init()
{
	glClearColor(0.6, 0.6, 0.9, 0);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);


	glutSwapBuffers();// show what was drawn in "frame buffer"
}


void main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(200, 100);
	glutCreateWindow("First Example");

	glutDisplayFunc(display); // refresh function
	init();

	glutMainLoop();
}