#include <appdef.hpp>
#include <sdk/calc/calc.hpp>
#include <sdk/os/debug.hpp>
#include <sdk/os/file.hpp>
#include <sdk/os/mem.hpp>
#include "refresh.h"
#include <sdk/os/input.hpp>
#include "config.h"
#include "nights.h"
#include "animatronics.h"
#include "GameState.h"
APP_NAME("FNAF")
APP_DESCRIPTION("A FNAF demake for the classpad I'm working on")
APP_AUTHOR("Felix")
APP_VERSION("0.0.1")

extern "C"
void main() {
	calcInit();
	int fd = open("\\fls0\\FNAF.565", OPEN_READ); //Just an array of 565 color values
	uint16_t* file = (uint16_t*)malloc(2*IMAGEWIDTH*IMAGEHEIGHT);
	read(fd, file, IMAGEWIDTH*IMAGEHEIGHT*2);
	close(fd);
	bool quit = 0;
	int scrollx = 0;
	int vscroll = 0;

	//initalize the game
	night debugnight;
	setNightFromAggro(&debugnight, 0,0,10,0);// Only chica is active bc I havent coded the others yet
	setup_eastside();
	FreddyInOffice = false;
	BonnieInOffice = false;
	ChicaInOffice = false;
	FoxyInOffice = false;
	Freddy.id=FREDDY;
	Freddy.loc=&eastside.roomlist.rooms.room_Show_Stage;
	Bonnie.id=BONNIE;
	Bonnie.loc=&eastside.roomlist.rooms.room_Show_Stage;
	Chica.id=CHICA;
	Chica.loc=&eastside.roomlist.rooms.room_Show_Stage;
	Foxy.id=FOXY;
	Foxy.loc=&eastside.roomlist.rooms.room_Show_Stage;
	while(!quit){
		uint32_t key1 = 0;uint32_t key2 = 0;
		getKey(&key1, &key2);
		if(testKey(key1, key2, KEY_LEFT)){vscroll=-XSCROLLSTEP;}
		if(testKey(key1, key2, KEY_RIGHT)){vscroll=XSCROLLSTEP;}
		if(testKey(key1, key2, KEY_CLEAR)){quit=true;}
		if(testKey(key1, key2, KEY_0)){MovementOpportunity(&Chica);
		
    	//We have 320* 240 Pixels to work with
		//ADDRESS(R) ERROR!
		//TARGET=E500D423
		//PC=8CFF0CFE
    	Debug_PrintNumberHex_Byte(Chica.loc->roomid, 0, 10);
    	LCD_Refresh();


		}
		if (scrollx<0){scrollx=0;vscroll=0;}
		if (scrollx>MAXSCROLLX){scrollx=MAXSCROLLX;vscroll=0;}
		scrollx+=vscroll;
		prepare_lcd(XSTART,YSTART,XEND, YEND);
		
		refresh(&file[scrollx], SCREENWIDTH, SCREENHEIGHT, FINISHROW*2);	

	}
	free(file);
	calcEnd();
}