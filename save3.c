// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.

//

// Created by: Mohammed al-essawi

// Created on: May 2022

// This program is the "Hello, World!" program for the GameBoy

#include <gb/gb.h>
#include <stdio.h>
#include "smiler.h"

void main(){
    UINT8 currentspriteindex = 0;

    set_sprite_data(0, 2, TileData);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;

    while(1){
        switch(joypad()){
            case J_LEFT: 
                scroll_sprite(0,-1,0);
                break;
            case J_RIGHT: 
                scroll_sprite(0,1,0);
                break;  
            case J_UP: 
                scroll_sprite(0,0,-1);
                break; 
            case J_DOWN: 
                scroll_sprite(0,0,1);
                break;                                                   
        }
        delay(100);
    }
}
