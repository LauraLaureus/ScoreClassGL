//
//  Score.cpp
//  ScoreClassGL
//
//  Created by Laura del Pino Díaz on 13/5/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include "Score.hpp"

Score::Score(){
    this->score = 0;
}

void Score::increment(int increment){
    this->score += increment;
}

std::string Score::getScore(){

    std::string num = std::to_string(this->score);
    std::string mainText = "Puntuacion: ";
    return mainText + num;
}
