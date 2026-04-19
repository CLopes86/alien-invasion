#pragma once

#include "bibSistema.h"

// classe Nave - responsavel por gerir e desenhar a nave do jogador
// a nave e composta por 4 partes:
// - corpo (rectangulo)
// - cockpit (triangulo equilatero)
// - asa esquerda (triangulo reto)
// - asa direita (triangulo reto)
class Nave {
    public:
        // construtor - inicializa a nave
         Nave();

         // destrutor - liberta a memoria alocada pelo objeto
         ~Nave();

        // metodo publico - desenha a nave completa
        // invoca os 4 metodos privados
        void desenhar(void);

    private:
         // metodo privado - desenha o corpo da nave (rectangulo)
         void drawBody(void);

         // metodo privado - desenha o cockpit da nave (triangulo equilatero)
         void drawCockpit(void);
        
          // metodo privado - desenha a asa esquerda da nave (triangulo reto)
         void drawLeftWing(void);

          // metodo privado - desenha a asa direita da nave (triangulo reto)
          void drawRightWing(void);



};