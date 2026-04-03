#pragma once

#include <iostream>
#include <stdlib.h>

#if defined(_WIN32) || defined(_WIN64)
    #include <GL/freeglut.h>
#elif defined(__APPLE__) || defined(__MACH__) || defined (TARGET_OS_MAC)
    #include <OpenGL/OpenGL.h>
    #include <GLUT/GLUT.h>
#else
    #include <GL/freeglut.h>
#endif