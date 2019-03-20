/**
* programa basico de opengl con glut
* g++ hello_opengl.cpp -lglut -lGL
*
*/
#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>

int main(int argc, char **argv) {
   glutInit(&argc, argv);

   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize(350, 350);
   glutInitWindowPosition(100, 100);
   glutCreateWindow("hello opengl and glut");

   glColor3f(1, 0, 0);
   glBegin(GL_QUADS);
     glVertex2f( 0.5,  0.5);
     glVertex2f( 0.5, -0.5);
     glVertex2f(-0.5, -0.5);
     glVertex2f(-0.5,  0.5);
   glEnd();

   glFlush();
   glutMainLoop();
   return 0;
}
