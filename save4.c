// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.

//

// Created by: Mohammed al-essawi

// Created on: May 2022

// This program is the "Hello, World!" program for the GameBoy

#include <gb/gb.h>
#include "simplebackground.c"
#include "simplebackgroundmap.c"

void main(){
    set_bkg_data(0, 7, backgroundtiles);
    set_bkg_tiles(0, 0, 40, 18, backgroundmap);

    SHOW_BKG;
    DISPLAY_ON;

    while(1){
        scroll_bkg(1,0);
        delay(100);
    }
}
