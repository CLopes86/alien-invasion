#include "Triangle.h"

Triangle::Triangle() {
    triangleColor[0] = 1.0;
    triangleColor[1] = 1.0;
    triangleColor[2] = 1.0;

    triangleVertex[0][0] = 0.0f;
    triangleVertex[0][1] = 0.0f;

    triangleVertex[1][0] = 5.0f;
    triangleVertex[1][1] = 5.0f;

    triangleVertex[2][0] = 5.0f;
    triangleVertex[2][1] = 0.0f;
}

Triangle::Triangle(float v[3][2], float c[3]) {
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            triangleVertex[i][j] = v[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        triangleColor[i] = c[i];
    }
}

Triangle::~Triangle() {

}

void Triangle::drawTriangle(void) {
    glColor3fv(triangleColor);

    glBegin(GL_TRIANGLES); {
        glVertex2fv(triangleVertex[0]);
        glVertex2fv(triangleVertex[1]);
        glVertex2fv(triangleVertex[2]);

    } glEnd();

    glutSwapBuffers();
}