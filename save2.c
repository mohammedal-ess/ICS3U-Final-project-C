// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.

//

// Created by: Mohammed al-essawi

// Created on: May 2022

// This program is the "Hello, World!" program for the GameBoy

#include <stdio.h>

#include <gb/gb.h>

#include "smiler.h"


int main() {
  set_sprite_data(0, 1, TileData);
  set_sprite_tile(0, 0);
  move_sprite(0, 88, 78);
  SHOW_SPRITES;

}
