#include <GL/glut.h>

void init()
{
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);
}
void mapa(){
    //-28 é o x mínimo e -18 é o y mínimo
    //a bola inicia no x = -28 e y = -3
glPushMatrix();
        //inicio do pisinho inferior
        glTranslatef(-28,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-25,-18,0);
        glColor3f(1,0,0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-22,-18,0);
        glColor3f(1,0,0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-19,-18,0);
        glColor3f(1,0,0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-16,-18, 0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-13,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-10,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-7,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-4,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-1,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    //espaco onde a bola deve chegar

    glPushMatrix();
        glTranslatef(5,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(8,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(11,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(14,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(17,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(20,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(23,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(26,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(29,-18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    //final do pisinho
    //inicio da parede do lado esquerdo

    glPushMatrix();
        glTranslatef(-28,-15,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-28,-12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-28,-9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-28,-6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    //espaco onde a bola inicia

    glPushMatrix();
        glTranslatef(-28,0,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-28,3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-28,6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-28,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-28,12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-28,15,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-28,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-25,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    //final da parede esquerda
    //inicio do teto

    glPushMatrix();
        glTranslatef(-22,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-19,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-16,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-13,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-10,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-7,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-4,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-1,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(8,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(8,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(11,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(14,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(17,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(20,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(23,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(26,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(29,18,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    //final do teto
    //inicio da parede direita

    glPushMatrix();
        glTranslatef(29,15,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(29,12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(29,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(29,6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(29,3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(29,0,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(29,-3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(29,-6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(29,-9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(29,-12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(29,-15,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    //final da parede direita
    //essa parte aqui foi meio random pra ver onde era as coisas
    glPushMatrix();
        glTranslatef(-15,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-18,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //primeira coluna do labirinto na parte esquerda
    glPushMatrix();
        glTranslatef(-21,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-21,6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-21,3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-21,0,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-21,-3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-21,-6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-21,-9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //cubo adicional pra fazer o encaixe e deixar um gapziho abaixo da entrada
    glPushMatrix();
        glTranslatef(-24,-9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-26,-9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //primeira linha superior
    glPushMatrix();
        glTranslatef(-12,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //terceira coluna
    glPushMatrix();
        glTranslatef(-9,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-9,6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-9,3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //terceira linha
    glPushMatrix();
        glTranslatef(-12,3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //segunda coluna
    glPushMatrix();
        glTranslatef(-15,3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-15,-3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //aqui é um cubo random
    glPushMatrix();
        glTranslatef(-12,-3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //continuacao da terceira coluna
    glPushMatrix();
        glTranslatef(-15,-6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-15,-9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-15,-12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-15,-15,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //outra parte aleatoria
    glPushMatrix();
        glTranslatef(-9,-3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //quarta coluna
    glPushMatrix();
        glTranslatef(-3,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3,6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3,3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3,0,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3,-3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3,-6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3,-12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //quarta linha
    //"ultima linha"
    glPushMatrix();
        glTranslatef(-6,-12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-9,-12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-9,-9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //ultima linha propriamente dita, mas so tem uns cubos espalhados nela
    glPushMatrix();
        glTranslatef(-6,-15,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //alguns cubos pra bloquear umas entradas
    glPushMatrix();
        glTranslatef(3,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(9,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //continuacao da quarta coluna
    glPushMatrix();
        glTranslatef(-3,12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3,15,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(12,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //sexta coluna
    glPushMatrix();
        glTranslatef(15,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(15,6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(15,3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(15,0,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(15,-3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(15,-6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(15,-9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //outra parte da quarta linha
    //ainda sexta coluna
    glPushMatrix();
        glTranslatef(15,-12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //parte da quinta coluna
    glPushMatrix();
        glTranslatef(9,-12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(9,-15,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    // ultima coluna
    glPushMatrix();
        glTranslatef(21,-6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(21,0,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(21,3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(21,6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //paredinha que bloqueia a as duas ultimas colunas
    glPushMatrix();
        glTranslatef(24,6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(27,6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //ainda ultima coluna
    glPushMatrix();
        glTranslatef(21,9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(21,0,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(21,-9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //mais uma parte da quarta linha
    //ainda ultima coluna
    glPushMatrix();
        glTranslatef(21,-12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(21,-15,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(21,12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(21,15,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //outro cubo pra bloquear a parte de cima
    glPushMatrix();
        glTranslatef(24,6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    //mais coisa da quarta linha pra bloquear uma entrada
    glPushMatrix();
        glTranslatef(0,-12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //quinta coluna
    glPushMatrix();
        glTranslatef(3,-9,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(3,-12,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(3,-6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(3,-3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(3,0,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(3,3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
    //so um cubo pra impedir uma entrada
    glPushMatrix();
        glTranslatef(6,3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    //sexta coluna
    glPushMatrix();
        glTranslatef(9,3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(9,0,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(9,-3,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(9,-6,0);
        glColor3f(1.0, 0, 0);
        glutSolidCube(3);
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    GLint viewport[4];
    glGetIntegerv(GL_VIEWPORT, viewport);
    double aspect = (double)viewport[2] / (double)viewport[3];
    gluPerspective(60, aspect, 1, 100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // move back a bit
    glTranslatef( 0, 0, -35 );

    static float angle = 0;
    angle += 1.0f;
    mapa();
    glutSwapBuffers();

}

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1500, 1000);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    glutCreateWindow("mAzEmArE");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    init();

    glutMainLoop();
    return 0;
}