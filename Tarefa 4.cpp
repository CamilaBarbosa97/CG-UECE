#include <GL/glut.h>
#include <iostream>

#define WIDTH	500
#define HEIGHT	500

int pos_x = 0;
int pos_y = 0;
int direction = 0;

void casa() {
	glColor3d(1.0d, 0.0d, 0.0d);

	glBegin (GL_TRIANGLES);
		glVertex2d (190, 285);
		glVertex2d (350, 285);
		glVertex2d (270, 350);
	glEnd();

	glColor3d(0.0d, 0.0d, 1.0d);

	glBegin (GL_QUADS);
		glVertex2d (190, 285);
		glVertex2d (350, 285);
		glVertex2d (350, 150);
		glVertex2d (190, 150);
	glEnd();

	glColor3d(1.0d, 1.0d, 1.0d);

	glBegin (GL_QUADS);
		glVertex2d (230, 155);
		glVertex2d (270, 155);
		glVertex2d (270, 220);
		glVertex2d (230, 220);
	glEnd();

	glColor3d(0.0d, 0.0d, 0.0d);

    glBegin(GL_POINTS);
        glVertex2d (266, 185);

    glEnd();

    glColor3d(1.0d, 1.0d, 1.0d);

	glBegin (GL_QUADS);
		glVertex2d (290, 270);
		glVertex2d (340, 270);
		glVertex2d (340, 240);
		glVertex2d (290, 240);
	glEnd();

	glColor3d(0.0d, 0.0d, 0.0d);

	glBegin (GL_LINES);
        glVertex2d (315, 270);
        glVertex2d (315, 240);
        glVertex2d (290, 255);
        glVertex2d (340, 255 );
    glEnd();
}

void desenha () {
	glClear (GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslated(pos_x, pos_y, 0.0);
    casa();
    
	glutSwapBuffers();
}
void anima1(){
    switch (direction){

        case 0 :
			if(pos_x + 350 == 500){
				if((rand() % 2) == 0){
					direction = 1;
				} else
					direction = 4;
			}

			if(pos_y + 300 == 500){
				if((rand() % 2) == 0) {
					direction = 2;
				} else
					direction = 3;
			} else {
				pos_x += 1.0;
				pos_y += 1.0;
			}

			break;

		case 1 :
			if(pos_y + 300 == 500){
				if((rand() % 2) == 0){
					direction = 3;
				} else
					direction = 2;
			} else {
				pos_x += 1.0;
				pos_y += 1.0;
			}

			break;

		case 2 :
			if(pos_x + 350 == 500){
				if((rand() % 2) == 0){
					direction = 4;
				} else
					direction = 1;
			} else {
				pos_x += 1.0;
				pos_y += 1.0;
			}

			break;

		case 3 :
			if(pos_x + 310 == 0){
				if((rand() % 2) == 0){
					direction = 5;
				} else
					direction = 0;
			} else {
				pos_x -= 1.0;
				pos_y -= 1.0;
			}

			break;

		case 4 :
			if(pos_y + 150 == 0){
				if((rand() % 2) == 0){
					direction = 6;
				} else
					direction = 0;
			} else {
				pos_x += 1.0;
				pos_y += 1.0;
			}

			break;

		case 5 :
			if(pos_y + 150 == 0){
				if((rand() % 2) == 0){
					direction = 0;
				} else
					direction = 6;
			} else {
				pos_x += 1.0;
				pos_y += 1.0;
			}

			break;

		case 6 :
			if(pos_x + 310 == 0){
				if((rand() % 2) == 0){
					direction = 0;
				} if((rand() % 2) == 0){
					direction = 5;
				}
			} else {
				pos_x -= 1.0;
				pos_y -= 1.0;
			}

			break;
	}
}
void anima0 (int value) {
    anima1();
    glutPostRedisplay();
    glutTimerFunc(1, anima0, 0);

}

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
	glutTimerFunc(1, anima0, 0);
	glutMainLoop();
}
