#include <iostream>
#include "interface.h"
#include "board.h"
#include "rules.h"
using namespace std;


const int INT_MAX = 2147483647;
int main(int argc, char** argv){

    Interface game;
    while(!game.is_game_over()){
        game.print_board_state();
        int start_row, start_col, end_row, end_col;
        cin >> start_row >> start_col >> end_row >> end_col;
        game.make_move(start_row, start_col, end_row, end_col);
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    game.print_win_screen();
    return 0;
}
