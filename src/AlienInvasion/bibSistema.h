#pragma once            // inclui este ficheiro apenas uma vez

#include <iostream>     // biblioteca de entrada/saida
#include <stdlib.h>     // biblioteca para exit()

// inclusao das bibliotecas graficas de acordo com o sistema operativo
#if defined(_WIN32) || defined(_WIN64)
    // Windows
    #include <GL/freeglut.h>
#elif defined(__APPLE__) || defined(__MACH__)
    // macOS
    #include <OpenGL/OpenGL.h>
    #include <GLUT/GLUT.h>
#else
    // Linux
    #include <GL/freeglut.h>
#endif