#include <GL/glut.h>

void init() {
    glClearColor(1,1,1,1);
    glColor3f(0,0,0);
    glPointSize(5);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
}

void mouse(int button,int state,int x,int y) {
    if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN) {
        glBegin(GL_POINTS);
        glVertex2i(x,500-y);
        glEnd();
        glFlush();
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

int main(int argc,char** argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("Mouse Input");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
