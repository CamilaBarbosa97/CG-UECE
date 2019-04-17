
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#define WIDTH 400
#define HEIGTH 300

void draw(void) {
	glClearColor (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glFlush();

void start (void) {
	glClearColor(1.0d, 1.0d, 1.0d, 1.0d);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10, 10, -10, 10, -50, 50);
	glEnable (GL_LIGHTING);
	glEnable (GL_LIGHT0);
	glEnable (GL_DEPH_TEST);
	glShadeModel (GL_SMOOTH);
}

int main (int argc, char **argv) {
	glutInit (&argc, argv);
	glutInitDisplayMode (GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize (WIDTH, HEIGTH);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("listen before I go");
	glutDisplayFunc(draw);
	start();
	glutMainLoop();
}
	
