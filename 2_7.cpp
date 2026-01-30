#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

int n;

void init() {
    glClearColor(1,1,1,1);
    glColor3f(0,0,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    float r = 150, cx = 250, cy = 250;

    glBegin(GL_LINE_LOOP);
    for(int i=0;i<n;i++) {
        float angle = 2 * M_PI * i / n;
        glVertex2f(cx + r*cos(angle), cy + r*sin(angle));
    }
    glEnd();

    glFlush();
}

int main(int argc,char** argv) {
    printf("Enter number of sides: ");
    scanf("%d",&n);

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("Regular Polygon");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
