#include "locations.h"

enum animatronics{
    FREDDY,
    BONNIE,
    CHICA,
    FOXY
};
struct animatronic{
    room* loc;
    char aggression;
    enum animatronics id;
};
static animatronic Freddy;
static animatronic Bonnie;
static animatronic Chica;
static animatronic Foxy;
void MovementOpportunity(animatronic* ani);

