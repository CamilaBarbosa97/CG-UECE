#include <GL/glut.h>
#include <iostream>

#define WIDTH	500
#define HEIGHT	500

int px = 0;
int py = 0;
//queria colocar uma carinha, sad.
void head (){
    glColor3d (1.5d, 1.5d, 1.3d);
    glBegin (GL_QUADS);

        glVertex2d (80, 350);
        glVertex2d (80, 400);
        glVertex2d (125, 400);
        glVertex2d (125, 350);

    glEnd();
    //olhinhos
    glColor3d (1.0d, 0.0d, 1.0d);
    glPointSize(6);
    glBegin(GL_POINTS);

        glVertex2d(90, 385);
        glVertex2d(115, 385);

    glEnd();
}

//corpinho fitness
void body () {
    glColor3d (0.0d, 0.5d, 0.5d);
    glBegin (GL_QUADS);

        glVertex2d (55, 350);
        glVertex2d (55, 180);
        glVertex2d (150, 180);
        glVertex2d (150, 350);

    glEnd();
}

//um pouco fino
void forearm () {
    glColor3d (0.5d, 1.0d, 1.0d);
    glBegin (GL_QUADS);

        glVertex2d (150, 350);
        glVertex2d (150, 270);
        glVertex2d (170, 270);
        glVertex2d (170, 350);

    glEnd();
}

//idem.
void arm () {
    glColor3d (1.5d, 1.5d, 1.5d);
    glBegin(GL_QUADS);

        glVertex2d (150, 270);
        glVertex2d (150, 230);
        glVertex2d (170, 230);
        glVertex2d (170, 270);

    glEnd();
}

// let's work
void desenha () {
	glMatrixMode(GL_MODELVIEW);
	glClear(GL_COLOR_BUFFER_BIT);

    head();
	body();
    glPushMatrix();
    glTranslated(150.0d, 350.0d, 0.0d);
    glRotated(px, 0.0d, 0.0d, 1.0d);
    glTranslated(-150.0d, -350.0d, 0.0d);
	forearm();

    glPushMatrix();
    glTranslated(150.0d, 270.0d, 0.0d);
    glRotated(py, 0.0d, 0.0d, 1.0d);
    glTranslated(-150.0d, -270.0d, 0.0d);
	arm();
    glPopMatrix();
    glPopMatrix();
	glFlush();
}

//let's work 2
void start(){
	//Kuro background
	glClearColor(0.0d, 0.0d, 0.0d, 0.0d);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, WIDTH, 0, HEIGHT, -1, 1);
}

void teclado (unsigned char key, int x, int y){
    switch (key){
        case 'l':     //esquerda
        case 'L':
            glMatrixMode(GL_MODELVIEW);
            glTranslated(140.0d, 0.0d, 0.0d);
            glutPostRedisplay();
            break;

        case 'R':     //direita
        case 'r':
            glMatrixMode(GL_MODELVIEW);
            glTranslated(-140.0d, 0.0d, 0.0d);
            glutPostRedisplay();
            break;

        case 'u':      //cima
        case 'U':
            glMatrixMode(GL_MODELVIEW);
            glTranslated(0.0d, 100.0d, 0.0d);
            glutPostRedisplay();
            break;

        case 'd':       //baixo
        case 'D':
            glMatrixMode(GL_MODELVIEW);
            glTranslated(0.0d, -100.0d, 0.0d);
            glutPostRedisplay();
            break;

        case 'g':
        case 'G':       //zoom (Incompleta)
            glMatrixMode(GL_MODELVIEW);
            glScaled(1.25d, 1.25d, 1.25d);
            glutPostRedisplay();
            break;

        case 's':       //zoom out (Incompleta)
        case 'S':
            glMatrixMode(GL_MODELVIEW);
            glScaled(0.75d, 0.75d, 0.75d);
            glutPostRedisplay();
            break;

        case 'a':       //mexe o braco todo
        case 'A':
            glMatrixMode(GL_MODELVIEW);
            px = (px + 5) % 360;
            glutPostRedisplay();
            break;

        case 'b':       //mexe so o braco propriamente dito
        case 'B':
            glMatrixMode(GL_MODELVIEW);
            py = (py + 5) % 360;
            glutPostRedisplay();
            break;

    }
}


//Main function //
int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Naman chubda");
	glutDisplayFunc(desenha);
	start();
	glutKeyboardFunc(teclado);
	glutMainLoop();
	return 0;
}
