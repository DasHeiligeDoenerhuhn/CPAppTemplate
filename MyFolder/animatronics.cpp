#include "GameState.h"
#include "utils.h"
#include "animatronics.h"
void move(animatronic* ani);
void move_chica(animatronic* ani);

void MovementOpportunity(animatronic*ani){
    char number = random(0,20);
    if(number>=ani->aggression){
        move(ani);
    }
}
void move(animatronic*ani){
    if(ani->id==CHICA){
        move_chica(ani);
    }
}
void move_chica(animatronic* ani){
    ani->loc=ani->loc->neighbours[random(0,ani->loc->nNeighbours)];
    if(ani->loc->roomid==The_Office_East){
        ChicaInOffice==true;
    }
}
