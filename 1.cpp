#include <GL/glut.h>

#define WIDTH	500
#define HEIGHT	500


void triangulo(){
	glColor3d(1.0d, 1.0d, 1.0d);

	glBegin(GL_TRIANGLES);
		glVertex2i(0, 100);
		glVertex2i(300, 200);
		glVertex2i(100, 250);
	glEnd();
}

void desenha(){
	glClear(GL_COLOR_BUFFER_BIT);

	glViewport(250, 250, 250, 250);
	triangulo();

	glFlush();
}

void start(){
	glClearColor(1.0d, 0.0d, 0.0d, 0.0d);
	glOrtho(0, WIDTH, 0, HEIGHT, -1, 1);
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("feel like dying");
	glutDisplayFunc(desenha);
	start();
	glutMainLoop();
	return 0;
}
