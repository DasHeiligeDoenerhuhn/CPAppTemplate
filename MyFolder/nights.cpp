#include "nights.h"
void setNight(night* n, char id){
    n->nr=id;
    switch (id)
    {
    case 1:
        setNightFromAggro(n, 0,0,0,0);
        break;
    case 2:
        setNightFromAggro(n, 0,3,1,1);
        break;
    case 3:
        setNightFromAggro(n, 1,0,5,2);
        break;
    case 4:
        setNightFromAggro(n, 2,2,4,6); //Freddie's supposed to be randomly 1 or 2, but randomness wil be done later if at all
        break;
    case 5:
        setNightFromAggro(n, 3,5,7,5); 
        break;
    case 6:
        setNightFromAggro(n, 4,10,12,16);
        break;
    }
};
void setNightFromAggro(night* n, char freddy, char bonnie, char chica, char foxy){
    n->freddyaggro=freddy;
    n->bonnieaggro=bonnie;
    n->chicaaggro=chica;
    n->foxyaggro=foxy;
};

void handle2AM(night* n){
    n->bonnieaggro++;
}
void handle3AM(night* n){
    n->bonnieaggro++;
    n->chicaaggro++;
    n->foxyaggro++;
}
void handle4AM(night* n){ // Same as 3AM, but still here for better code structure
    n->bonnieaggro++;
    n->chicaaggro++;
    n->foxyaggro++;
}