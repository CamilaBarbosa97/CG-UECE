#include <GL/glut.h>
#include <iostream>

#define WIDTH	500
#define HEIGHT	500

void head (){
    glColor3d (1.5d, 1.5d, 1.3d);
    glBegin (GL_QUADS);

        glVertex2d (80, 350);
        glVertex2d (80, 400);
        glVertex2d (125, 400);
        glVertex2d (125, 350);

    glEnd();
}

void body () {
    glColor3d (0.0d, 0.5d, 0.5d);
    glBegin (GL_QUADS);

        glVertex2d (55, 350);
        glVertex2d (55, 180);
        glVertex2d (150, 180);
        glVertex2d (150, 350);

    glEnd();
}

void forearm () {
    glColor3d (0.5d, 1.0d, 1.0d);
    glBegin (GL_QUADS);

        glVertex2d (150, 350);
        glVertex2d (150, 270);
        glVertex2d (170, 270);
        glVertex2d (170, 350);

    glEnd();
}

void arm () {
    glColor3d (1.5d, 1.5d, 1.5d);
    glBegin(GL_QUADS);

        glVertex2d (150, 270);
        glVertex2d (150, 230);
        glVertex2d (170, 230);
        glVertex2d (170, 270);

    glEnd();
}

void desenha () {
	//glMatrixMode(GL_MODELVIEW);
	//glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT);

	//glTranslated(140.0d, 0.0d, 0.0d);
    head();
	body();
	forearm();
	arm();

	glFlush();
}
void start(){
	//Define o fundo vermelho
	glClearColor(0.0d, 0.0d, 0.0d, 0.0d);
	//glMatrixMode(GL_PROJECTION);
	//glLoadIdentity();
	glOrtho(0, WIDTH, 0, HEIGHT, -1, 1);
}

//void teclado (unsigned char key, int x, int y){
    //if (key == 'l'){} vai pra esquerda
    //if (key == 'r'){} vai pra direita
    //if (key == 'g'){} zoom in
    //if (key == 'u'){} vai pra cima
    //if (key == 'd'){} vai pra baixo
    //if (key == 'z'){} zoom out
    //if (key == 'a'){} mexe o braco
    //if (key == 'b'){} mexe o bracinho
    //glutPostRedisplay();
    //}

//Main function //
int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Naman chubda");
	glutDisplayFunc(desenha);
	start();
	glutMainLoop();
	return 0;
}
