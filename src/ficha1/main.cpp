#include "bibSistema.h";

void keyboard(unsigned char key, int x, int y){
    if (key == 27)
        exit(0);
}

void draw(void) {
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-20.0, 20.0, -20.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Triangulo");
    glutDisplayFunc(draw);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}