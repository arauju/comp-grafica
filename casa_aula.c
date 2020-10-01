#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>


float posX=0.0,posY=0.0,posZ=0.0;
float transX=0.0,transY=0.0,transZ=0.0;

void movimento(int key,int x,int y){
    //Movimento
    switch (key){
        //movimento para direita
        case GLUT_KEY_RIGHT:
          posY += 0.5;
        break;
        //movimento para esquerda.
        case GLUT_KEY_LEFT:
          posY -= 0.5;
        break;
        //identifica o movimento para cima
        case GLUT_KEY_UP:
          posX += 0.5;
        break;
        //identifica o movimento para baixo.
        case GLUT_KEY_DOWN:
          posX -= 0.5;
        break;

        case GLUT_KEY_F1:
          transZ += 0.5;
        break;

        case GLUT_KEY_F2:
          transZ -= 0.5;
        break;

        case GLUT_KEY_F3:
          transY += 0.5;
        break;

        case GLUT_KEY_F4:
          transY -= 0.5;
        break;

        case GLUT_KEY_F5:
          transX += 0.5;
        break;

        case GLUT_KEY_F6:
          transX -= 0.5;
        break;

        case GLUT_KEY_F7:
          transX = 0.0;
          transY = 0.0;
          transZ = 0.0;
        break;

        default:
         break;
    }
    glutPostRedisplay();
}

void desenha () {

    if (posX==360)
      posX=0;

    if (posY==360)
        posY=0;

    /* clear window */
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    /* future matrix manipulations should affect the modelview matrix */
    glMatrixMode(GL_MODELVIEW);

    glColor3f(0.5f,0.5f,0.5f);

    glPushMatrix();
        //movimentos de rotacao e translacao
        glRotatef(posX,1.0,0.0,0.0);
        glRotatef(posY,0.0,1.0,0.0);
        glTranslatef(transX, transY, transZ);

        //desenha a base da casa.
        glPushMatrix();
            glScalef(1.0, 1.0, 2.0);
            glutSolidCube(2);
        glPopMatrix();

        //porta
        glPushMatrix();
            glColor3f(0.0f,0.0f,0.0f);
            glScalef(0.5, 1.0, 0.1);
            glTranslatef(0,-0.5,20);
            glScalef(0.7, 0.5, 1.0);
            glutSolidCube(2);
        glPopMatrix();

        //janela
        glPushMatrix();
            glColor3f(0.0f,0.0f,0.0f);
            glTranslatef(0,0,1);
            glScalef(1.1, 0.3, 0.3);
            glutSolidCube(2);
        glPopMatrix();

        //janela
        glPushMatrix();
            glColor3f(0.0f,0.0f,0.0f);
            glTranslatef(0,0,-1);
            glScalef(1.1, 0.3, 0.3);
            glutSolidCube(2);
        glPopMatrix();

        //telhado
        glPushMatrix();
            glColor3f(0.6f,0.0f,0.0f);
            glTranslatef(0.7,1.4,0);
            glRotatef(45,0,0,1);
            glScalef(0.1, 1.0, 2);
            glutSolidCube(2);
        glPopMatrix();

        //telhado
        glPushMatrix();
            glColor3f(0.6f,0.0f,0.0f);
            glTranslatef(-0.7,1.4,0);
            glRotatef(315,0,0,1);
            glScalef(0.1, 1.0, 2);
            glutSolidCube(2);
        glPopMatrix();

        glTranslatef(0,1,1);
        glBegin(GL_TRIANGLES);
          glVertex3f(-1,0,1);
          glVertex3f(1,0,1);
          glVertex3f(0,1,1);
        glEnd();

      


    glPopMatrix();

    /* flush drawing routines to the window */
    glFlush();
}

void inicializar(){

    /* set up depth-buffering */
    glEnable(GL_DEPTH_TEST);

    /* define the projection transformation */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    //FovY, Aspect, zNear, ZFar
    gluPerspective(45,1,4,20);

    /* define the viewing transformation */
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

	// eyeX, eyeY, eyeZ
	// Especifica a posicao do olho. Câmera
	//
	// centerX, centerY, centerZ
	// Especifica a posicao do ponto de referencia. Para onde a câmera aponta.
	//
	// upX, upY, upZ
	// Especifica a direção do vetor "Cima". Geralmente, Y.
    gluLookAt(0.0,0.0,10.0,0.0,0.0,0.0,0.0,1.0,0.0);
}


int main ( int argc, char * argv[] ) {

    /* initialize GLUT, using any commandline parameters passed to the
       program */
    glutInit(&argc,argv);

    /* setup the size, position, and display mode for new windows */
    glutInitWindowSize(1000,1000);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
    /* create and set up a window */
    glutCreateWindow("Super Casa 3D");
    glutDisplayFunc(desenha);
    inicializar();
    glutSpecialFunc(movimento);
    glutMainLoop();
}
