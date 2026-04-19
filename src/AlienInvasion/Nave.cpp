#include "Nave.h"

/**
 * Construtor da classe Nave
 * Por agora vazio - a nave nao tem atributos para inicializar
 * No futuro vamos adicionar posicao, velocidade, etc.
 */
Nave::Nave() {
    // nao ha atributos para inicializar por agora
}

/**
 * Destrutor da classe Nave
 * Vazio porque nao ha memoria dinamica para libertar
 */
Nave :: ~Nave() {
    // nao ha memoria dinamica para libertar
}

/**
 * Metodo privado drawBody
 * Desenha o corpo da nave - um rectangulo centrado na origem
 * Vertices definidos em sentido contrario aos ponteiros do relogio
 */
void Nave:: drawBody(void) {

    // define a cor do corpo - cinzento (nave danificada no inicio)
    // R:0.7 G:0.7 B:0.7 = cinzento
    glColor3f(0.7f, 0.7f, 0.7f);

    // inicia o bloco de desenho para quadrilateros
    glBegin(GL_QUADS); {

         // vertices em sentido contrario aos ponteiros do relogio
         glVertex2f(-1.0f,  1.0f); // vertice 0 - canto superior esquerdo
         glVertex2f(-1.0f, -1.0f); // vertice 1 - canto inferior esquerdo
         glVertex2f( 1.0f, -1.0f); // vertice 2 - canto inferior direito
         glVertex2f( 1.0f,  1.0f); // vertice 3 - canto superior direito
    } glEnd(); // fecha o bloco de desenho
}


/**
 * Metodo privado drawCockpit
 * Desenha o cockpit da nave - um triangulo equilatero no topo
 * A base do cockpit coincide com o topo do corpo
 */
void Nave::drawCockpit(void) {

     // define a cor do cockpit - azul claro
    // R:0.0 G:0.5 B:1.0 = azul claro
    glColor3f(0.0f, 0.5f, 1.0f);

    // inicia o bloco de desenho para triangulos
    glBegin(GL_TRIANGLES); {

        // define os 3 vertices do cockpit
        // em sentido contrario aos ponteiros do relogio
        glVertex2f(0.0f, 3.0f); // vertice 0 - ponta do topo
        glVertex2f(-1.0f, 1.0f); // vertice 1 - base esquerda
        glVertex2f(1.0f, 1.0f);

    } glEnd(); // fecha o bloco de desenho
}
