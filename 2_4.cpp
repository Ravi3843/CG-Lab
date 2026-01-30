#include <GL/glut.h>

void init() {
    glClearColor(1,1,1,1);
    glColor3f(0,0,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glVertex2i(250,400); glVertex2i(150,150);
    glVertex2i(250,400); glVertex2i(350,150);
    glVertex2i(150,150); glVertex2i(400,250);
    glVertex2i(400,250); glVertex2i(100,250);
    glVertex2i(100,250); glVertex2i(350,150);
    glEnd();

    glFlush();
}

int main(int argc,char** argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("Star Shape");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
