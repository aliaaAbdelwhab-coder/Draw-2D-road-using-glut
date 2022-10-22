#include <GL/gl.h>

#include <GL/glu.h>

#include <GL/glut.h>

#include <stdlib.h>

#include <windows.h>

#include <math.h>

 void display();
 void reshape (int w,int h);
 void init(){
     glClearColor(0.0,0.0,0.0,0.0);

 }
int main (int argc ,char ** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(100,200);
    glutInitWindowSize(500,500);
    glutCreateWindow("window 2");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();

}
void display(){

glClear(GL_COLOR_BUFFER_BIT);
glLoadIdentity();
glLineWidth(6.0);
glBegin(GL_LINES);

glVertex2f(-7,7);
glVertex2f(7,7);

glVertex2f(-6,5);
glVertex2f(-3,5);

glVertex2f(-2,5);
glVertex2f(1,5);

glVertex2f(3,5);
glVertex2f(6,5);

glVertex2f(-7,3);
glVertex2f(7,3);

glEnd();
glFlush();
}
void reshape (int w,int h){
 glViewport(0,0,(GLsizei)w,(GLsizei)h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-10,10,-10,10);
 glMatrixMode(GL_MODELVIEW);

 }












