#include <GL/glut.h>

int points[4][2] = {{100,100},{300,100},{300,300},{100,300}};

void init() {
    glClearColor(1,1,1,1);
    glColor3f(0,0,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINE_LOOP);
    for(int i=0;i<4;i++)
        glVertex2iv(points[i]);
    glEnd();

    glFlush();
}

int main(int argc,char** argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("Closed Loop");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
