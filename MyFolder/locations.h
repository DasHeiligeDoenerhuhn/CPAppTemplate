enum locations{
    Backstage,
    Dining_Area,
    East_Corner,
    East_Hall,
    Kitchen,
    Pirate_Cove,
    Restrooms,
    Show_Stage,
    Supply_Closet,
    The_Office_East,
    The_Office_West,
    West_Corner,
    West_Hall,
};
struct room{
    char nNeighbours;
    locations roomid;
    room* neighbours[5];
};
struct east_side{
    union{
    struct rooms{
    room room_Dining_Area;
    room room_East_Corner;
    room room_East_Hall;
    room room_Kitchen;
    room room_Restrooms;
    room room_Show_Stage;
    room room_The_Office_East;
    }rooms;
    room roomarray[7];
    } roomlist;
};
static east_side eastside;

void setup_eastside();