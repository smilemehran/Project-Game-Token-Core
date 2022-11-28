#ifndef GAME_TOKEN_H
#define GAME_TOKEN_H

#include "Game_token_base.h"


struct Game_token::Game_token_base
{
    Board(int w, int h, int start_x);

    void move(direction);
    void move_special(vector<direction>);
    void apply_terrain_effect(const Space::terrain_type);
}

#endif