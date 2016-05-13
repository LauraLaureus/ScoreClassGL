//
//  Score.hpp
//  ScoreClassGL
//
//  Created by Laura del Pino Díaz on 13/5/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#ifndef Score_hpp
#define Score_hpp

#include <stdio.h>
#include "View.hpp"

#endif /* Score_hpp */


class Score {

    int score;
    
public:
    Score();
    void increment(int increment);
    std::string getScore();

};
