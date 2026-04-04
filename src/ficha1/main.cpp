#include "bibSistema.h" // inclusao das bibliotecas de sistema
#include "Triangle.h"   // inclui a declaracao da classe Triangle

// objeto global da classe Triangle
// tem de ser global porque a callback de desenho nao aceita parametros
Triangle* myTriangle = new Triangle();

float vertices1[3][2] = {
    {-10.0f, 0.0f},
    {-5.0f, 8.0f},
    { 0.0f,  0.0f}   // vertice 2 - canto inferior direito
};
float cor1[3] = {1.0f, 0.0f, 0.0f}; // vermelho (R:1.0 G:0.0 B:0.0)
Triangle* triangleRed = new Triangle(vertices1, cor1);

// triangulo 2 - verde
float vertices2[3][2] = {
    { 5.0f, -5.0f},  // vertice 0 - canto inferior esquerdo
    {10.0f,  5.0f},  // vertice 1 - canto superior
    {15.0f, -5.0f}   // vertice 2 - canto inferior direito
};
float cor2[3] = {0.0f, 1.0f, 0.0f}; // verde (R:0.0 G:1.0 B:0.0)
Triangle* triangleGreen = new Triangle(vertices2, cor2);

// triangulo 3 - azul
float vertices3[3][2] = {
    {-15.0f, -10.0f}, // vertice 0 - canto inferior esquerdo
    {-10.0f,  -5.0f}, // vertice 1 - canto superior
    { -5.0f, -10.0f}  // vertice 2 - canto inferior direito
};
float cor3[3] = {0.0f, 0.0f, 1.0f}; // azul (R:0.0 G:0.0 B:1.0)
Triangle* triangleBlue = new Triangle(vertices3, cor3);


// callback do teclado - chamada automaticamente quando uma tecla e premida
// key = codigo da tecla premida
// x, y = posicao do rato no momento
void keyboard(unsigned char key, int x, int y) {
    if (key == 27) // 27 = codigo da tecla Esc
        exit(0);   // termina o programa sem erros
}

// callback de desenho - chamada automaticamente quando a janela precisa de ser desenhada
void draw(void) {
    glClearColor(0, 0, 0, 0);             // define a cor de fundo - preto (R,G,B,Alpha)
    glClear(GL_COLOR_BUFFER_BIT);          // limpa o buffer de cor com a cor de fundo
    glMatrixMode(GL_PROJECTION);           // seleciona a matriz de projecao
    glLoadIdentity();                      // reset da matriz de projecao
    gluOrtho2D(-20.0, 20.0, -20.0, 20.0); // define o sistema de coordenadas 2D
    glMatrixMode(GL_MODELVIEW);            // seleciona a matriz de modelacao
    glLoadIdentity();                      // reset da matriz de modelacao

    // chama o metodo de desenho do objeto Triangle
    // -> e o operador de acesso a membros atraves de ponteiro
    myTriangle->drawTriangle();
     triangleRed->drawTriangle();   // triangulo vermelho
    triangleGreen->drawTriangle(); // triangulo verde
    triangleBlue->drawTriangle();  // triangulo azul
}

// funcao principal
int main(int argc, char** argv) {

    glutInit(&argc, argv);                        // inicializa a biblioteca FreeGLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);  // modo RGB e duplo buffer
    glutInitWindowSize(1000, 1000);               // tamanho da janela em pixeis
    glutInitWindowPosition(0, 0);                 // posicao inicial da janela no ecra
    glutCreateWindow("Triangulo!");               // cria a janela com o titulo indicado

    // registo das callbacks
    glutDisplayFunc(draw);      // callback de desenho
    glutKeyboardFunc(keyboard); // callback do teclado

    glutMainLoop(); // inicia o ciclo infinito de eventos

    return 0; // programa terminou sem erros
}