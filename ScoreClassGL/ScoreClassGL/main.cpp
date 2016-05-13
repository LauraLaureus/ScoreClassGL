//
//  main.cpp
//  ScoreClassGL
//
//  Created by Laura del Pino Díaz on 13/5/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include "View.hpp"

int main(int argc,  char * argv[]) {
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(300, 300);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    glutCreateWindow("OpenGL Practica 3_2 2 Laura del Pino Díaz");
    Init();
    glutDisplayFunc(DisplayBitMap); // define la funcion de rendering
    glutMainLoop();
    return 0;
}
