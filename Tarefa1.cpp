#include <GL/glut.h>

#define WIDTH	500
#define HEIGHT	500
//Como usar a glScissor();
//Primeiro desenho (triagulo) (100%)//
void triangulo(){
	glColor3d(1.0d, 1.0d, 1.0d);

	glBegin(GL_TRIANGLES);
		glVertex2d(1, 250);
		glVertex2d(499, 250);
		glVertex2d(250, 499);

	glEnd();
}

//Segundo desenho (quadrado, mas que na verdade sao dois triangulos)//
//A cor tá meio bugada//
void pseudoquadrado(){
    glBegin(GL_TRIANGLE_STRIP);

        glColor3d(1.0d, 1.0d, 1.0d);
        glVertex2d(1, 250);
        glVertex2d(499, 250);
        glVertex2d(250, 499);

        glColor3d(0.0d, 0.0d, 1.0d);
        glVertex2d(1, 250);
        glVertex2d(499, 250);
        glVertex2d(250, 1);

    glEnd();
}

void duaslinhas(){
    glBegin(GL_LINE_STRIP); //Eu acho que essas coordenadas estao certa, pelo amor de deus??????

    glColor3d(1.0d, 1.0d, 1.0d);
    glVertex2d(120, 300);
    glColor3d(0.0d, 0.0d, 0.0d);
    glVertex2d(300, 350);
    glVertex2d(250,1);

    glEnd();
}

void acolorfulsquare(){
    glBegin(GL_QUADS);
    //fica faltando um pedaco do triangulo help
    glColor3d(0.0d, 0.0d, 1.0d);
    glVertex2d(250, 499);
    glColor3d(0.0d, 1.0d, 0.0);
    glVertex2d(499, 499);
    glColor3d(1.0d, 0.0d, 0.0d);
    glVertex2d(250, 250);
    glColor3d(1.0d, 1.0d, 1.0d);
    glVertex2d(499, 250);

    glEnd();
}
void desenha(){
	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(0, 250, 250, 250);
	triangulo();
	glViewport(250, 250, 250, 250);
	pseudoquadrado();
	glViewport(0, 0, 250, 250);
	duaslinhas();
	glViewport(250, 0, 250, 250);
	acolorfulsquare();

	glFlush();
}

void start(){
	//Como deixar cada janelinha com a cor própria?
	glClearColor(1.0d, 0.0d, 0.0d, 0.0d);
	glOrtho(0, WIDTH, 0, HEIGHT, -1, 1);
}
//Main function //
int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("I just wanna go back to 1999");
	glutDisplayFunc(desenha);
	start();
	glutMainLoop();
	return 0;
}
