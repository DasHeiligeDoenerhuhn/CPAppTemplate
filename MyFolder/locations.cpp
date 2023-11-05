#include "locations.h"
void setup_eastside(){
    eastside.roomlist.rooms.room_Show_Stage.roomid=Show_Stage;
    eastside.roomlist.rooms.room_Show_Stage.neighbours[0]=&eastside.roomlist.rooms.room_Dining_Area;
    eastside.roomlist.rooms.room_Show_Stage.neighbours[1]=nullptr;
    eastside.roomlist.rooms.room_Show_Stage.neighbours[2]=nullptr;
    eastside.roomlist.rooms.room_Show_Stage.neighbours[3]=nullptr;
    eastside.roomlist.rooms.room_Show_Stage.neighbours[4]=nullptr;

    eastside.roomlist.rooms.room_Dining_Area.roomid=Dining_Area;
    eastside.roomlist.rooms.room_Dining_Area.neighbours[0]=&eastside.roomlist.rooms.room_Show_Stage;
    eastside.roomlist.rooms.room_Dining_Area.neighbours[1]=&eastside.roomlist.rooms.room_East_Hall;
    eastside.roomlist.rooms.room_Dining_Area.neighbours[2]=&eastside.roomlist.rooms.room_Kitchen;
    eastside.roomlist.rooms.room_Dining_Area.neighbours[3]=&eastside.roomlist.rooms.room_Restrooms;
    eastside.roomlist.rooms.room_Dining_Area.neighbours[4]=nullptr;

    eastside.roomlist.rooms.room_Restrooms.roomid=Restrooms;
    eastside.roomlist.rooms.room_Restrooms.neighbours[0]=&eastside.roomlist.rooms.room_East_Hall;
    eastside.roomlist.rooms.room_Restrooms.neighbours[1]=&eastside.roomlist.rooms.room_Kitchen;
    eastside.roomlist.rooms.room_Restrooms.neighbours[2]=&eastside.roomlist.rooms.room_Dining_Area;
    eastside.roomlist.rooms.room_Restrooms.neighbours[3]=nullptr;
    eastside.roomlist.rooms.room_Restrooms.neighbours[4]=nullptr;

    eastside.roomlist.rooms.room_Kitchen.roomid=Kitchen;
    eastside.roomlist.rooms.room_Kitchen.neighbours[0]=&eastside.roomlist.rooms.room_East_Hall;
    eastside.roomlist.rooms.room_Kitchen.neighbours[1]=&eastside.roomlist.rooms.room_Restrooms;
    eastside.roomlist.rooms.room_Kitchen.neighbours[2]=&eastside.roomlist.rooms.room_Dining_Area;
    eastside.roomlist.rooms.room_Kitchen.neighbours[3]=nullptr;
    eastside.roomlist.rooms.room_Kitchen.neighbours[4]=nullptr;

    eastside.roomlist.rooms.room_East_Hall.roomid=East_Hall;
    eastside.roomlist.rooms.room_East_Hall.neighbours[0]=&eastside.roomlist.rooms.room_East_Corner;
    eastside.roomlist.rooms.room_East_Hall.neighbours[1]=&eastside.roomlist.rooms.room_Kitchen;
    eastside.roomlist.rooms.room_East_Hall.neighbours[2]=&eastside.roomlist.rooms.room_Dining_Area;
    eastside.roomlist.rooms.room_East_Hall.neighbours[3]=&eastside.roomlist.rooms.room_Restrooms;
    eastside.roomlist.rooms.room_East_Hall.neighbours[4]=&eastside.roomlist.rooms.room_The_Office_East;

    eastside.roomlist.rooms.room_East_Corner.roomid=East_Corner;
    eastside.roomlist.rooms.room_East_Corner.neighbours[0]=&eastside.roomlist.rooms.room_East_Hall;
    eastside.roomlist.rooms.room_East_Corner.neighbours[1]=&eastside.roomlist.rooms.room_The_Office_East;
    eastside.roomlist.rooms.room_East_Corner.neighbours[2]=nullptr;
    eastside.roomlist.rooms.room_East_Corner.neighbours[3]=nullptr;
    eastside.roomlist.rooms.room_East_Corner.neighbours[4]=nullptr;

    eastside.roomlist.rooms.room_The_Office_East.roomid=The_Office_East;
    eastside.roomlist.rooms.room_The_Office_East.neighbours[0]=&eastside.roomlist.rooms.room_East_Hall;
    eastside.roomlist.rooms.room_The_Office_East.neighbours[1]=&eastside.roomlist.rooms.room_East_Corner;
    eastside.roomlist.rooms.room_The_Office_East.neighbours[2]=nullptr;
    eastside.roomlist.rooms.room_The_Office_East.neighbours[3]=nullptr;
    eastside.roomlist.rooms.room_The_Office_East.neighbours[4]=nullptr;
}