#include <Gl/glut.h>

#define HEIGHT 500
#define WIDTH 500

void head (){
    glColor3d(1.0d, 1.0d, 1.0d);
    glBegin(GL_QUADS);
        glVertex2d (250, 400);
        glVertex2d (250, 300);
        glVertex2d (400, 300)
        glVertex2d (250, 250):
    glEnd();
}
void Inicializa(){
    glClearColor (25.0d, 25.0d, 112.0d);
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
    Inicializa();
    glutMainLoop();
}
