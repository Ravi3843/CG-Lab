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

    int x1 = 50, x2 = 450;
    int y1 = 200, y2 = 300;

    glBegin(GL_LINES);
    for(int i=0;i<10;i++) {
        if(i%2==0) {
            glVertex2i(x1,y1);
            glVertex2i(x2,y2);
        } else {
            glVertex2i(x1,y2);
            glVertex2i(x2,y1);
        }
        y1 += 10;
        y2 += 10;
    }
    glEnd();

    glFlush();
}

int main(int argc,char** argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("Zig Zag Pattern");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
