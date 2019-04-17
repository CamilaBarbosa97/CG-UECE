#include <GL/glut.h>
#include <iostream>

#define WIDTH 600
#define HEIGTH 600

void Luz1() {   //arco azul //

	GLfloat luzAmbiente[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat luzDifusa[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat luzEspecular[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat posicaoLuz[4] = {0.0, 50.0, 50.0, 1.0};


	glLightfv (GL_LIGHT0, GL_AMBIENT, luzAmbiente);
	glLightfv (GL_LIGHT0, GL_DIFFUSE, luzDifusa );
	glLightfv (GL_LIGHT0, GL_SPECULAR, luzEspecular );
	glLightfv (GL_LIGHT0, GL_POSITION, posicaoLuz );


    	GLfloat ambiente[4] = { 0.2, 0.2, 0.2, 1.0};
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambiente);


	GLfloat ka[4] = {0.0, 0.0, 0., 0.0};
	GLfloat kd[4] = {0.0, 0.0, 1.0, 1.0};
	GLfloat ks[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat shininess = 30.0;

	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ka);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, kd);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, ks);
	glMaterialf(GL_FRONT, GL_SHININESS, shininess);
}

void Luz2() {   //arco preto //
    	GLfloat luzAmbiente[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat luzDifusa[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat luzEspecular[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat posicaoLuz[4] = {0.0, 50.0, 50.0, 1.0};


	glLightfv (GL_LIGHT1, GL_AMBIENT, luzAmbiente);
	glLightfv (GL_LIGHT1, GL_DIFFUSE, luzDifusa );
	glLightfv (GL_LIGHT1, GL_SPECULAR, luzEspecular );
	glLightfv (GL_LIGHT1, GL_POSITION, posicaoLuz );


    	GLfloat ambiente[4] = { 0.2, 0.2, 0.2, 1.0};
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambiente);


	GLfloat ka[4] = {0.0, 0.0, 0., 0.0};
	GLfloat kd[4] = {0.0, 0.0, 0.0, 0.0};
	GLfloat ks[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat shininess = 30.0;

	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ka);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, kd);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, ks);
	glMaterialf(GL_FRONT, GL_SHININESS, shininess);
}

void Luz3 () {  //arco vermelho //
    	GLfloat luzAmbiente[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat luzDifusa[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat luzEspecular[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat posicaoLuz[4] = {0.0, 50.0, 50.0, 1.0};


	glLightfv (GL_LIGHT2, GL_AMBIENT, luzAmbiente);
	glLightfv (GL_LIGHT2, GL_DIFFUSE, luzDifusa );
	glLightfv (GL_LIGHT2, GL_SPECULAR, luzEspecular );
	glLightfv (GL_LIGHT2, GL_POSITION, posicaoLuz );


    	GLfloat ambiente[4] = { 0.2, 0.2, 0.2, 1.0};
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambiente);


	GLfloat ka[4] = {0.0, 0.0, 0.0, 0.0};
	GLfloat kd[4] = {1.0, 0.0, 0.0, 1.0};
	GLfloat ks[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat shininess = 30.0;

	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ka);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, kd);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, ks);
	glMaterialf(GL_FRONT, GL_SHININESS, shininess);
}

void Luz4() {	//arco amarelo //
    	GLfloat luzAmbiente[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat luzDifusa[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat luzEspecular[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat posicaoLuz[4] = {0.0, 50.0, 50.0, 1.0};


	glLightfv (GL_LIGHT3, GL_AMBIENT, luzAmbiente);
	glLightfv (GL_LIGHT3, GL_DIFFUSE, luzDifusa );
	glLightfv (GL_LIGHT3, GL_SPECULAR, luzEspecular );
	glLightfv (GL_LIGHT3, GL_POSITION, posicaoLuz );


   	GLfloat ambiente[4] = { 0.2, 0.2, 0.2, 1.0};
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambiente);


	GLfloat ka[4] = {0.0, 0.0, 0.0, 0.0};
	GLfloat kd[4] = {1.0, 1.0, 0.0, 0.0};
	GLfloat ks[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat shininess = 30.0;

	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ka);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, kd);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, ks);
	glMaterialf(GL_FRONT, GL_SHININESS, shininess);
}

void Luz5() {	//arco verde //
    	GLfloat luzAmbiente[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat luzDifusa[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat luzEspecular[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat posicaoLuz[4] = {0.0, 50.0, 50.0, 1.0};


	glLightfv (GL_LIGHT4, GL_AMBIENT, luzAmbiente);
	glLightfv (GL_LIGHT4, GL_DIFFUSE, luzDifusa );
	glLightfv (GL_LIGHT4, GL_SPECULAR, luzEspecular );
	glLightfv (GL_LIGHT4, GL_POSITION, posicaoLuz );


    	GLfloat ambiente[4] = { 0.2, 0.2, 0.2, 1.0};
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambiente);


	GLfloat ka[4] = {0.0, 0.0, 0.0, 0.0};
	GLfloat kd[4] = {0.0, 1.0, 0.0, 1.0};
	GLfloat ks[4] = {1.0, 1.0, 1.0, 1.0};
	GLfloat shininess = 30.0;

	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ka);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, kd);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, ks);
	glMaterialf(GL_FRONT, GL_SHININESS, shininess);
}

void draw () {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
    	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glEnable(GL_LIGHT0);
	Luz1();
	glTranslated (-5.0d, 3.0d, 0.0d);
    	glutSolidTorus (0.25, 2, 100, 100);
    	glDisable(GL_LIGHT0);

    	glEnable(GL_LIGHT1);
    	Luz2();
    	glTranslated (5.0d, 0.0d, 0.0d);
    	glutSolidTorus (0.25, 2, 100, 100);
    	glDisable(GL_LIGHT1);

    	glEnable(GL_LIGHT2);
    	Luz3();
    	glTranslated (5.0d, 0.0d, 0.0d);
    	glutSolidTorus (0.25, 2, 100, 100);
    	glDisable(GL_LIGHT2);

    	glEnable(GL_LIGHT3);
    	Luz4();
    	glTranslated (-7.5d, -2.0d, 1.0d);
    	glutSolidTorus (0.25, 2, 100, 100);
    	glDisable(GL_LIGHT3);

    	glEnable(GL_LIGHT4);
    	Luz5();
    	glTranslated (5.0d, 0.0d, 1.0d);
   	glutSolidTorus (0.25, 2, 100, 100);
    	glDisable(GL_LIGHT4);

	glFlush();
}
void start (void) {
	glClearColor(1.0d, 1.0d, 1.0d, 1.0d);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10, 10, -10, 10, -50, 50);
	glEnable (GL_LIGHTING);
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

