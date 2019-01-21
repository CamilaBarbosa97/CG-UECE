#include <GL/glut.h>

#define WIDTH	500
#define HEIGHT	500



void triangulo(){
    //Desenho 1
	glColor3d(1.0d, 1.0d, 1.0d);

	glBegin(GL_TRIANGLES);
		glVertex2d(0, 250);
		glVertex2d(500, 250);
		glVertex2d(250, 500);

	glEnd();
}


void pseudoquadrado(){
    //Desenho 2
    glBegin(GL_TRIANGLE_STRIP);

        glColor3d(1.0d, 1.0d, 1.0d);
        glVertex2d(0, 250);
        glVertex2d(500, 250);
        glVertex2d(250, 500);
        glVertex2d(0, 250);
        glVertex2d(500, 250);
        glColor3d(0.0d, 0.0d, 1.0d);
        glVertex2d(250, 0);

    glEnd();
}

void duaslinhas(){
    //Eu acho que essas coordenadas estao certa, pelo amor de deus??????
    glBegin(GL_LINE_STRIP);

    glColor3d(1.0d, 1.0d, 1.0d);
    glVertex2d(150, 250);
    glColor3d(0.0d, 0.0d, 0.0d);
    glVertex2d(400, 400);
    glVertex2d(250,0);

    glEnd();
}

void acolorfulsquare(){
    //Desenho 4
    glBegin(GL_QUADS);
    glColor3d(0.0d, 0.0d, 0.0d);
    glVertex2d(250, 500);
    glColor3d(0.0d, 1.0d, 0.0);
    glVertex2d(500, 500);
    glColor3d(1.0d, 1.0d, 1.0d);
    glVertex2d(500, 250);
    glColor3d(1.0d, 0.0d, 0.0d);
    glVertex2d(250, 250);

    glEnd();
}
void desenha(){
    //Viewports e esquema pra mudar o fundo
	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(0, 250, 250, 250);
	triangulo();
	glViewport(250, 250, 250, 250);
	pseudoquadrado();
	glScissor(0, 0, 250, 250);
	glEnable(GL_SCISSOR_TEST);
	glClearColor(0.0d, 1.0d, 0.0d, 0.0d);
	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(0, 0, 250, 250);
	duaslinhas();
	glScissor(250, 0, 250, 250);
	glEnable(GL_SCISSOR_TEST);
	glClearColor(1.0d, 1.0d, 1.0d, 1.0d);
	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(250, 0, 250, 250);
	acolorfulsquare();

	glFlush();
}

void start(){
	//Define o fundo vermelho
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
