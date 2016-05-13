//
//  View.cpp
//  ScoreClassGL
//
//  Created by Laura del Pino Díaz on 13/5/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include "View.hpp"
#include "Score.hpp"

Score* score;

void Init(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 0.0f);
    score = new Score();
}

void writeBitmapString(float x, float y, void* font,std::string string){
    
    
    glRasterPos2f(x, y);
    for (int i = 0; i < string.size(); i++ ) {
        glutBitmapCharacter(font, string[i]);
    }
}

void DisplayBitMap(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    writeBitmapString(0.66, 0.8, GLUT_BITMAP_TIMES_ROMAN_24, score->getScore());
    glFlush();
    
}