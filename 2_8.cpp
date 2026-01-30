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

    // House base
    glBegin(GL_LINE_LOOP);
    glVertex2i(150,100);
    glVertex2i(350,100);
    glVertex2i(350,250);
    glVertex2i(150,250);
    glEnd();

    // Roof
    glBegin(GL_LINES);
    glVertex2i(150,250); glVertex2i(250,350);
    glVertex2i(250,350); glVertex2i(350,250);
    glEnd();

    // Door
    glBegin(GL_LINE_LOOP);
    glVertex2i(220,100);
    glVertex2i(280,100);
    glVertex2i(280,180);
    glVertex2i(220,180);
    glEnd();

    // Window
    glBegin(GL_LINE_LOOP);
    glVertex2i(170,180);
    glVertex2i(210,180);
    glVertex2i(210,220);
    glVertex2i(170,220);
    glEnd();

    glFlush();
}

int main(int argc,char** argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("House");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
