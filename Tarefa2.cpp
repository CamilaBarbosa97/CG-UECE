#include <Gl/glut.h>

#define HEIGHT 500
#define WIDTH 500

void head (){
    glColor3d (1.0d, 1.0d, 1.0d);
    glBegin (GL_QUADS);
        glVertex2d (150, 350);
        glVertex2d (150, 400);
        glVertex2d (240, 400)
        glVertex2d (240, 350):
    glEnd();
}

void body () {
    glColor3d (225.0d, 218.0d, 185.0d);
    glBegin (GL_QUADS);
        glVertex2d (90, 300);
        glVertex2d (90, 100);
        glVertex2d (250, 100);
        glVertex2d (250, 300);
    glEnd();
}

void forearm () {
    glColor3d (0.0d, 255.0d, 127.0d);
    glBegin (GL_QUADS);
        glVertex2d (251, 300);
        glVertex2d (251, 200);
        glVertex2d (290, 200);
        glVertex2d (290, 300);
    glEnd();
}

void arm () {
    glColor3d (165.0d, 42.0d, 42.0d);
    glBegin(GL_QUADS);
        glVertex2d (251, 199);
        glVertex2d (251, 120);
        glVertex2d (290, 120);
        glVertex2d (290, 199);
    glEnd();
}

void Teclado (unsigned char key, int x, int y) {
    switch (key) {
        case 'l': //translada pra esquerda//
        case 'r': //translada pra direita//
        case 'g': //aumenta de tamanho//
        case 'u': //translada pra cima//
        case 'd': //translada pra baixo//
        case 'z': //diminui o tamanho//
        case 'a': //roda o antebraco//
        case 'b': //roda o braco//
    }
}

void Desenha (void) {
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    head();
    body();
    forearm();
    arm();
    glPopMatrix();
    glFlush();
    
void Inicializa(){
    glClearColor (25.0d, 25.0d, 112.0d, 1.0d);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    glOrtho (0, WIDTH, 0, HEIGHT, -1, -1);
}


int main (int argc, char **argv) {
    glutInit (&argc, argv);
    glutInitDisplayMode (GLUT_RGB);
    glutInitWindowSize (HEIGHT, WIDTH);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Whiteout");
    glutDisplayFunc (Desenha);
    glutKeyboardFunc (Teclado);
    Inicializa();
    glutMainLoop();
}
