#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

static int shoulder = 0, elbow = 0, pulso = 0, perna = 0, joelho = 0, pe = 0;

void init(void){
  glClearColor (0.0, 0.0, 0.0, 0.0);
}

void display(void){
  glClear (GL_COLOR_BUFFER_BIT);
  glPushMatrix();
    glScalef(0.4 ,0.5, 0.5);

    //braco esquerdo
    glPushMatrix();
      glTranslatef(1.4,0,0);
      glPushMatrix();
        /* origem posicionada no ombro */
        glColor3f(1.0f, 1.0f, 1.0f);
        glRotatef(shoulder, 0, 0, 1.0);
        glutSolidSphere(0.1, 30, 30);

         /* origem posicionada no centro do bra�o */
         glTranslatef(0.7, 0.0, 0.0);
         glPushMatrix();
           glScalef(1.0, 0.2, 0.3);
           glColor3f(0.8f, 0.8f, 0.0f);
           glutSolidCube(1);
         glPopMatrix();

         /* origem posicionada no cotovelo */
         glTranslatef(0.7, 0.0, 0.0);
         glColor3f(1.0f, 1.0f, 1.0f);
         glRotatef(elbow, 0, 0, 1.0);
         glutSolidSphere(0.1, 30, 30);

         glTranslatef(0.7, 0.0, 0.0);
         glPushMatrix();
           glScalef(1.0, 0.2, 0.3);
           glColor3f(0.8f, 0.8f, 0.0f);
           glutSolidCube(1);
         glPopMatrix();

         glTranslatef(0.7, 0.0, 0.0);

         glPushMatrix();
           glRotatef(pulso, 1.0, 0.0, 0.0);
           glScalef(0.2, 0.2, 0.2);
           glColor3f(1.0f, 1.0f, 1.0f);
           glutSolidCube(1);
         glPopMatrix();
         /* origem volta para o sistema de coordenadas original */
      glPopMatrix();

  //fim do braço esquerdo
  glPopMatrix();

  //braco direito
  glPushMatrix();
      glRotatef(180,0,0,1);
      glTranslatef(1.4,0,0);

      glPushMatrix();
        /* origem posicionada no ombro */
        glColor3f(1.0f, 1.0f, 1.0f);
        glRotatef(shoulder, 0, 0, 1.0);
        glutSolidSphere(0.1, 30, 30);

        /* origem posicionada no centro do bra�o */
        glTranslatef(0.7, 0.0, 0.0);
        glPushMatrix();
          glScalef(1.0, 0.2, 0.3);
          glColor3f(0.8f, 0.8f, 0.0f);
          glutSolidCube(1);
        glPopMatrix();

        /* origem posicionada no cotovelo */
        glTranslatef(0.7, 0.0, 0.0);
        glColor3f(1.0f, 1.0f, 1.0f);
        glRotatef(elbow, 0, 0, 1.0);
        glutSolidSphere(0.1, 30, 30);

        glTranslatef(0.7, 0.0, 0.0);
        glPushMatrix();
          glScalef(1.0, 0.2, 0.3);
          glColor3f(0.8f, 0.8f, 0.0f);
          glutSolidCube(1);
        glPopMatrix();

        glTranslatef(0.7, 0.0, 0.0);

        glPushMatrix();
          glRotatef(pulso, 1.0, 0.0, 0.0);
          glScalef(0.2, 0.2, 0.2);
          glColor3f(1.0f, 1.0f, 1.0f);
          glutSolidCube(1);
        glPopMatrix();

      /* origem volta para o sistema de coordenadas original */
      glPopMatrix();

  //fim do braço direito
  glPopMatrix();
  glPopMatrix();

  //corpo
  glPushMatrix();
      glColor3f(0.8f, 0.8f, 0.0f);
      glScalef(0.9, 1.1, 1.0);
      glutSolidCube(1);
  glPopMatrix();

  //pernas
  glPushMatrix();
    glScalef(0.6 ,0.4, 0.6);
    glPushMatrix();
      glRotatef(270,0,0,1);
      glTranslatef(1.7,0.4,0);

      //perna direita
      glPushMatrix();
          /* origem posicionada no quadril */
          glColor3f(1.0f, 1.0f, 1.0f);
          glutSolidSphere(0.1, 30, 30);
          glRotatef(perna, 0, 0, 1.0);

           /* origem posicionada no centro da coxa */
           glTranslatef(0.7, 0.0, 0.0);
           glPushMatrix();
             glScalef(1.0, 0.2, 0.3);
             glColor3f(0.8f, 0.8f, 0.0f);
             glutSolidCube(1);
           glPopMatrix();

           /* origem posicionada no joelho */
           glTranslatef(0.7, 0.0, 0.0);
           glColor3f(1.0f, 1.0f, 1.0f);
           glRotatef(joelho, 0, 0, 1.0);
           glutSolidSphere(0.1, 30, 30);

           //perna
           glTranslatef(0.7, 0.0, 0.0);
           glPushMatrix();
             glScalef(1.0, 0.2, 0.3);
             glColor3f(0.8f, 0.8f, 0.0f);
             glutSolidCube(1);
           glPopMatrix();

           glTranslatef(0.7, 0.0, 0.0);

           //pe
           glPushMatrix();
             glRotatef(pe, 1.0, 0.0, 0.0);
             glScalef(0.2, 0.2, 0.2);
             glColor3f(0.2f, 0.2f, 0.2f);
             glutSolidCube(1);
           glPopMatrix();
           /* origem volta para o sistema de coordenadas original */
        glPopMatrix();
      glPopMatrix();
      //fim da perna direita


      //perna esquerda
      glPushMatrix();
          glRotatef(270,0,0,1);
          glTranslatef(1.7,-0.4,0);

        glPushMatrix();
          /* origem posicionada no quadril */
          glColor3f(1.0f, 1.0f, 1.0f);
          glRotatef(perna, 0, 0, 1.0);
          glutSolidSphere(0.1, 30, 30);

           /* origem posicionada no centro da perna */
           glTranslatef(0.7, 0.0, 0.0);
           glPushMatrix();
             glScalef(1.0, 0.2, 0.3);
             glColor3f(0.8f, 0.8f, 0.0f);
             glutSolidCube(1);
           glPopMatrix();

           /* origem posicionada no joelho */
           glTranslatef(0.7, 0.0, 0.0);
           glColor3f(1.0f, 1.0f, 1.0f);
           glRotatef(joelho, 0, 0, 1.0);
           glutSolidSphere(0.1, 30, 30);

           //perna
           glTranslatef(0.7, 0.0, 0.0);
           glPushMatrix();
             glScalef(1.0, 0.2, 0.3);
             glColor3f(0.8f, 0.8f, 0.0f);
             glutSolidCube(1);
           glPopMatrix();

           glTranslatef(0.7, 0.0, 0.0);

           //pe
           glPushMatrix();
             glRotatef(pe, 1.0, 0.0, 0.0);
             glScalef(0.2, 0.2, 0.2);
             glColor3f(0.2f, 0.2f, 0.2f);
             glutSolidCube(1);
           glPopMatrix();
           /* origem volta para o sistema de coordenadas original */
        glPopMatrix();

        glPopMatrix();
      glPopMatrix();
      //fim da perna esquerda

  glPopMatrix();

  //olhos
  glPushMatrix();
      glColor3f(1.0f,1.0f,1.0f);
      glTranslatef(0.2,0.3,0);
      glutSolidSphere(0.08, 30, 30);
  glPopMatrix();

  glPushMatrix();
      glColor3f(1.0f,1.0f,1.0f);
      glTranslatef(-0.2,0.3,0);
      glutSolidSphere(0.08, 30, 30);
  glPopMatrix();

  glPushMatrix();
      glColor3f(0.0f,0.0f,0.8f);
      glTranslatef(0.2,0.3,0);
      glutSolidSphere(0.05, 30, 30);
  glPopMatrix();

  glPushMatrix();
      glColor3f(0.0f,0.0f,0.8f);
      glTranslatef(-0.2,0.3,0);
      glutSolidSphere(0.05, 30, 30);
  glPopMatrix();

  glPushMatrix();
      glColor3f(0.0f,0.0f,0.0f);
      glTranslatef(0.2,0.3,0);
      glutSolidSphere(0.02, 30, 30);
  glPopMatrix();

  glPushMatrix();
      glColor3f(0.0f,0.0f,0.0f);
      glTranslatef(-0.2,0.3,0);
      glutSolidSphere(0.02, 30, 30);
  glPopMatrix();

  //calca
  glPushMatrix();
      glTranslatef(0,-0.5,0);
      glColor3f(1.0f, 1.0f, 1.0f);
      glScalef(0.9, 0.08, 1.0);
      glutSolidCube(1);
  glPopMatrix();

  glPushMatrix();
      glTranslatef(0,-0.65,0);
      glColor3f(0.6f, 0.3f, 0.0f);
      glScalef(0.9, 0.15, 1.0);
      glutSolidCube(1);
  glPopMatrix();


  //boca
  glPushMatrix();
      glTranslatef(0,-0.08,0);
      glColor3f(0.0f, 0.0f, 0.0f);
      glScalef(0.4, 0.02, 1.0);
      glutSolidCube(1);
  glPopMatrix();

  //dentes
  glPushMatrix();
      glTranslatef(0.05,-0.13,0);
      glColor3f(1.0f, 1.0f, 1.0f);
      glScalef(0.05, 0.05, 1.0);
      glutSolidCube(1);
  glPopMatrix();

  glPushMatrix();
      glTranslatef(-0.05,-0.13,0);
      glColor3f(1.0f, 1.0f, 1.0f);
      glScalef(0.05, 0.05, 1.0);
      glutSolidCube(1);
  glPopMatrix();

  glutSwapBuffers();
}

void reshape (int w, int h){
  glViewport (0, 0, (GLsizei) w, (GLsizei) h);
  glMatrixMode (GL_PROJECTION);
  glLoadIdentity ();
  gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glTranslatef (0.0, 0.0, -5.0);
}

void keyboard (unsigned char key, int x, int y){
  switch (key) {
  case 's':
    if(shoulder >= -90 && shoulder < 90)
      shoulder = (shoulder + 5) % 360;
    glutPostRedisplay();
    break;
  case 'S':
  if(shoulder <= 90 && shoulder > -90)
    shoulder = (shoulder - 5) % 360;
    glutPostRedisplay();
    break;
  case 'e':
    elbow = (elbow + 5) % 360;
    glutPostRedisplay();
    break;
  case 'E':
    elbow = (elbow - 5) % 360;
    glutPostRedisplay();
    break;
  case 'p':
    pulso = (pulso + 5) % 360;
    glutPostRedisplay();
    break;
  case 'P':
    pulso = (pulso - 5) % 360;
    glutPostRedisplay();
    break;
  case 'l':
    if(perna >= -60 && perna < 60){
      perna = (perna + 5) % 360;
      glutPostRedisplay();
    }
    break;
  case 'L':
  if(perna <= 60 && perna > -60){
    perna = (perna - 5) % 360;
    glutPostRedisplay();
  }
    break;
  case 'j':
  if(joelho >= -60 && joelho < 60){
    joelho = (joelho + 5) % 360;
    glutPostRedisplay();
  }
  break;
  case 'J':
  if(joelho <= 60 && joelho > -60){
    joelho = (joelho - 5) % 360;
    glutPostRedisplay();
  }
  break;
  case 'f':
    pe = (pe + 5) % 360;
    glutPostRedisplay();
    break;
  case 'F':
    pe = (pe - 5) % 360;
    glutPostRedisplay();
    break;
  case 27:
    exit(0);
    break;
  default:
    break;
  }
}

int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize (500, 500);
  glutInitWindowPosition (100, 100);
  glutCreateWindow (argv[0]);
  init ();
  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  glutMainLoop();
  return 0;
}
