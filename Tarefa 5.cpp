#include <GL/glut.h>
#include <iostream>

#define WIDTH 600
#define HEIGTH 600

void Luzes() {
	/* Parâmetros para a Luz GL_LIGHT0 sendo uma fonte de Luz Pontual */
	GLfloat luzAmbiente[4]={0.0, 0.0, 1.0, 1.0};	/* cor azul */
	GLfloat luzDifusa[4]={1.0, 1.0, 1.0, 1.0};	  	/* cor branca */
	GLfloat luzEspecular[4]={1.0, 1.0, 1.0, 1.0}; 	/* cor branca - brilho */
	GLfloat posicaoLuz[4]={0.0, 50.0, 50.0, 1.0};	/* Fonte de Luz Pontual */

	/* Define os parâmetros da luz de número 0 (Luz Pontual) */
	glLightfv(GL_LIGHT0, GL_AMBIENT, luzAmbiente);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, luzDifusa );
	glLightfv(GL_LIGHT0, GL_SPECULAR, luzEspecular );
	glLightfv(GL_LIGHT0, GL_POSITION, posicaoLuz );

	/* Ativa o uso de uma fonte de luz ambiente */
        GLfloat ambiente[4] = { 0.2, 0.2, 0.2, 1.0};
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambiente);

	/* Características do material */
	GLfloat ka[4]={0.11, 0.06, 0.11, 1.0};		/* Reflete porcentagens da cor ambiente */
	GLfloat kd[4]={0.4, 0.4, 0.7, 1.0};		/* Reflete porcentagens da cor difusa */
	GLfloat ks[4]={1.0, 1.0, 1.0, 1.0};		/* Reflete porcentagens da cor especular */
	GLfloat shininess = 70.0;

	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ka);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, kd);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, ks); /* Refletância do material */
	glMaterialf(GL_FRONT, GL_SHININESS, shininess);   /* Concentração do brilho */
}

void draw () {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
        glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	Luzes();

    	glTranslated(-5.0d, 3.0d, 0.0d);
   	glutSolidTorus(0.25, 2, 100, 100);
    	glTranslated(5.0d, 0.0d, 0.0d);
    	glutSolidTorus(0.25, 2, 100, 100);
    	glTranslated(5.0d, 0.0d, 0.0d);
    	glutSolidTorus(0.25, 2, 100, 100);
    	glTranslated(-7.5d, -2.0d, 1.0d);
    	glutSolidTorus(0.25, 2, 100, 100);
    	glTranslated(5.0d, 0.0d, 1.0d);
    	glutSolidTorus(0.25, 2, 100, 100);
    	glutPostRedisplay();
	glFlush();
}
void start (void) {
	glClearColor(1.0d, 1.0d, 1.0d, 1.0d);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10, 10, -10, 10, -50, 50);
	glEnable (GL_LIGHTING);
	glEnable (GL_LIGHT0);
	glEnable (GL_DEPTH_TEST);
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
	return 0;
}

