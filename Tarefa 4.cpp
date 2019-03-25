#include <GL/glut.h>
#include <iostream>

#define WIDTH	500
#define HEIGHT	500

int pos_x = 0;
int pos_y = 0;

void teto () {
	glColor3d(1.0d, 0.0d, 0.0d);

	glBegin (GL_TRIANGLES);
		glVertex2d (200, 300);
		glVertex2d (350, 300);
		glVertex2d (290, 350);
	glEnd();
}
void corpo () {
	glColor3d(0.0d, 0.0d, 1.0d);

	glBegin (GL_QUADS);
		glVertex2d (200, 300);
		glVertex2d (300, 300);
		glVertex2d (300, 150);
		glVertex2d (200, 150);
	glEnd();
}
void porta () {
	glColor3d(1.0d, 1.0d, 1.0d);

	glBegin (GL_QUADS);
		glVertex2d (230, 155);
		glVertex2d (250, 155);
		glVertex2d (250, 220);
		glVertex2d (230, 220);
	glEnd();
}
void janela () {
	glColor3d(1.0d, 1.0d, 1.0d);

	glBegin (GL_QUADS);
		glVertex2d (255, 270); 
		glVertex2d (290, 270);
		glVertex2d (290, 240);
		glVertex2d (255, 240);
	glEnd();
}
void desenha () {
	glClear (GL_COLOR_BUFFER_BIT);	

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glTranslated(pos_x, pos_y, 0.0);
	teto();
	corpo();
	porta();
	janela();

	glutSwapBuffers();
}

//void anima (int value) {
	//pos_x += 1.0;
	//pos_y += 1.0;
	
	//if (pos_x == 0 or pos_x == 500) {
		
//}

void start(){
	//Shiro background
	glClearColor(1.0d, 1.0d, 1.0d, 1.0d);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(0, WIDTH, 0, HEIGHT, -1, 1);
}

//Main function //
int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Four Seasons");
	glutDisplayFunc(desenha);
	start();
	//glutTimerFunc(100, anima, 1);
	glutMainLoop();
}
