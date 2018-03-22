#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display(){
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(4);
//GRIDLINES
 glBegin(GL_LINES);
        glVertex2f(-1.5,-1.5);
        glVertex2f(-1.5,1.5);
        glVertex2f(1.5,1.5);
        glVertex2f(1.5,-1.5);

        glVertex2f(-1.5,1.5);
        glVertex2f(1.5,1.5);
        glVertex2f(1.5,-1.5);
        glVertex2f(-1.5,-1.5);

        glVertex2f(-0.5,-1.5);
        glVertex2f(-0.5,1.5);
        glVertex2f(0.5,1.5);
        glVertex2f(0.5,-1.5);

        glVertex2f(1.5,-0.5);
        glVertex2f(-1.5,-0.5);
        glVertex2f(-1.5,0.5);
        glVertex2f(1.5,0.5);

 glEnd();
//HURUF
 glBegin(GL_LINES);
        glVertex2f(-0.4,-0.4);
        glVertex2f(-0.4,0.4);

        glVertex2f(-0.4,0.4);
        glVertex2f(0.4,0.4);
//
        glVertex2f(0.4,0.4);
        glVertex2f(0.4,0.2);
//
        glVertex2f(0.4,0.2);
        glVertex2f(-0.1,0.2);
//
        glVertex2f(-0.1,0.2);
        glVertex2f(-0.1,0.1);
//
        glVertex2f(-0.1,0.1);
        glVertex2f(0.4,0.1);
//
        glVertex2f(0.4,0.1);
        glVertex2f(0.4,-0.1);
//
        glVertex2f(0.4,-0.1);
        glVertex2f(-0.1,-0.1);
//
        glVertex2f(-0.1,-0.1);
        glVertex2f(-0.1,-0.2);
//
        glVertex2f(-0.1,-0.2);
        glVertex2f(0.4,-0.2);
//
        glVertex2f(0.4,-0.2);
        glVertex2f(0.4,-0.4);

        glVertex2f(0.4,-0.4);
        glVertex2f(-0.4,-0.4);
 glEnd();

 /*glBegin(GL_LINES);
 glVertex2f(-1.1,1.4);
 glVertex2f(-1.0,1.4);
 glVertex2f(-1.0,1.4);
 glVertex2f(-1.0,1.0);
 glVertex2f(-1.0,1.0);
 glVertex2f(-1.1,1.0);
 glVertex2f(-1.1,1.0);
 glVertex2f(-1.1,1.4);
 glEnd();*/
 /*HURUFPOINTS
 glBegin(GL_POINTS);
        glVertex2f(-0.4,-0.4);
        glVertex2f(-0.4,0.4);

        glVertex2f(-0.4,0.4);
        glVertex2f(0.4,0.4);
//
        glVertex2f(0.4,0.4);
        glVertex2f(0.4,0.2);
//
        glVertex2f(0.4,0.2);
        glVertex2f(-0.1,0.2);
//
        glVertex2f(-0.1,0.2);
        glVertex2f(-0.1,0.1);
//
        glVertex2f(-0.1,0.1);
        glVertex2f(0.4,0.1);
//
        glVertex2f(0.4,0.1);
        glVertex2f(0.4,-0.1);
//
        glVertex2f(0.4,-0.1);
        glVertex2f(-0.1,-0.1);
//
        glVertex2f(-0.1,-0.1);
        glVertex2f(-0.1,-0.2);
//
        glVertex2f(-0.1,-0.2);
        glVertex2f(0.4,-0.2);
//
        glVertex2f(0.4,-0.2);
        glVertex2f(0.4,-0.4);

        glVertex2f(0.4,-0.4);
        glVertex2f(-0.4,-0.4);
 glEnd();*/

glFlush();
}
void myinit(){
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-2.0,2.0,-2.0,2.0);
glMatrixMode(GL_MODELVIEW);
glClearColor(0.0,0.0,0.0,0.0);
glColor3f (1.0, 1.0, 0.0);
}
int main(int argc, char* argv[]){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500,500);
//glutInitWindowPosition(100,100);
glutCreateWindow("Object Primitive Lines");
glutDisplayFunc(display);
myinit();
glutMainLoop();
return 0;
}
