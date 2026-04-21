#include "bibSistema.h" 
#include "Nave.h"

// objeto global da classe Nave
// tem de ser global porque a callback de desenho nao aceita parametros
Nave* myNave = new Nave();

// callback do teclado - chamada automaticamente quando uma tecla e premida
// key = codigo da tecla premida (0-255)
// x, y = posicao do rato no momento
void keyboard(unsigned char key, int x, int y) {
    if (key == 27) // 27 = codigo da tecla Esc
        exit(0);   // termina o programa sem erros
}

// callback de desenho - chamada automaticamente quando a janela precisa de ser desenhada
void draw(void) {
    glClearColor(0, 0, 0, 0);             // define a cor de fundo - preto
    glClear(GL_COLOR_BUFFER_BIT);          // limpa o buffer de cor
    glMatrixMode(GL_PROJECTION);           // seleciona a matriz de projecao
    glLoadIdentity();                      // reset da matriz de projecao
    gluOrtho2D(-20.0, 20.0, -20.0, 20.0); // define o sistema de coordenadas 2D
    glMatrixMode(GL_MODELVIEW);            // seleciona a matriz de modelacao
    glLoadIdentity();                      // reset da matriz de modelacao

    // chama o metodo de desenho da nave
    myNave->desenhar();

    glutSwapBuffers(); // troca os buffers - mostra o que foi desenhado
}

// funcao principal
int main(int argc, char** argv) {

    glutInit(&argc, argv);                        // inicializa a biblioteca FreeGLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);  // modo RGB e duplo buffer
    glutInitWindowSize(800, 800);                 // tamanho da janela em pixeis
    glutInitWindowPosition(0, 0);                 // posicao inicial da janela
    glutCreateWindow("Alien Invasion");           // cria a janela

    // registo das callbacks
    glutDisplayFunc(draw);        // callback de desenho
    glutKeyboardFunc(keyboard);   // callback do teclado

    glutMainLoop(); // inicia o ciclo infinito de eventos

    return 0; // programa terminou sem erros
}