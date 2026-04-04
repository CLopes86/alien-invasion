#pragma once

#include "bibSistema.h"

class Triangle {
    public:
        Triangle();

        Triangle(float v[3][2], float c[3]);

        ~Triangle();

        void drawTriangle(void);

        private:
            float triangleVertex[3][2];

            float triangleColor[3];
};