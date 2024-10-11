#include "interface.h"
#include "board.h"
#include "rules.h"
#include "iostream"
using namespace std;

//for testing the rook and if its moveset aligns with real chess moveset.
void test_1_rook_rules(int test_number){
    if(test_number == 1 || test_number == 4){
        int board1[8][8] = {{-5,0, 0, 0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0},
                            {1, 1, 1, 1, 1, 1, 1, 1},
                            {5, 2, 3, 6, 9, 3, 2, 5}};
        Interface interface1(board1);

        bool test1 = interface1.make_move(0,0,-1,0);
        bool test2 = interface1.make_move(0,0,0,-1);
        bool test3 = interface1.make_move(0,0,-1,-1);
        bool test4 = interface1.make_move(0,0,8,0);
        bool test5 = interface1.make_move(0,0,0,8);
        bool test6 = interface1.make_move(0,0,8,8);
    
        if(!test1 && !test2 && !test3 && !test4 && !test5 && !test6){
            std::cout << "\033[1;31mTEST_1_ROOK_RULES PASSED\033[0m\n";
        }
        else{
            std::cout << "033[1;31mTEST_1_ROOK_RULES FAILED\033[0m\n";
        }
    }

    if(test_number == 2 || test_number == 4){
        //TEST IF ROOK CAN MAKE PROPER MOVES
    
        int board2[8][8] = {{0,0, 0, 0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0},
                            {0, 0, 1, -1, 1, 0, 0, 0},
                            {0, 0, -1, -5, 1, 0, 0, 0},
                            {0, 0, -1, 1, -1, 0, 0, 0},
                            {0, 0, 0, 0, 0,  0,  0, 0},
                            {1, 1, 1, 1, 1, 1, 1, 1},
                            {5, 2, 3, 6, 9, 3, 2, 5}};
        Interface interface2(board2);
    
        bool test7 = interface2.make_move(3,3,1,3); //should not pass
        bool test8 = interface2.make_move(3,3,2,3); //should not pass
        bool test9 = interface2.make_move(3,3,2,4); //should not pass
        bool test10 = interface2.make_move(3,3,3,4); //should  pass
        interface2.make_move_ir(3,4,3,3);
        bool test11 = interface2.make_move(3,3,4,4); //should not pass
        bool test12 = interface2.make_move(3,3,4,3); //should pass
        interface2.make_move_ir(3,4,3,3);
        bool test13 = interface2.make_move(3,3,4,2); //should not pass
        bool test14 = interface2.make_move(3,3,3,2); //should not pass
        bool test15 = interface2.make_move(3,3,2,2); //should not pass

        if(!test7 && !test8 && !test9 && test10 && !test11 && test12 && !test13 && !test14 & !test15)
        {
            std::cout << "\033[1;31mTEST_1_ROOK_RULES_TEST_2 PASSED\033[0m\n";
        }
        else{
            std::cout << "\033[1;31mTEST_1_ROOK_RULES_TEST_2 FAILED\033[0m\n";
            std::cout << "TEST7 IS " << test7 << " TEST7 SHOULD BE " << false << std::endl;
            std::cout << "TEST8 IS " << test8 << " TEST8 SHOULD BE " << false << std::endl;
            std::cout << "TEST9 IS " << test9 << " TEST9 SHOULD BE " << false << std::endl;
            std::cout << "TEST10 IS " << test10 << " TEST10 SHOULD BE " << true << std::endl;
            std::cout << "TEST11 IS " << test11 << " TEST11 SHOULD BE " << false << std::endl;
            std::cout << "TEST12 IS " << test12 << " TEST12 SHOULD BE" << true << std::endl;
            std::cout << "TEST13 IS " << test13 << " TEST13 SHOULD BE" << false << std::endl;
            std::cout << "TEST14 IS " << test14 << " TEST14 SHOULD BE " << false << std::endl;
            std::cout << "TEST15 IS " << test15 << " TEST15 SHOULD BE" << false << std::endl;
        }
    }
    //check again
    if(test_number == 3 || test_number == 4){
        int board3[8][8] ={{-5, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface3(board3);

        bool test16 = interface3.make_move(0,0,0,2); //should pass
        interface3.make_move_ir(0,2,0,0);
        bool test17 = interface3.make_move(0,0,2,0); //should pass
        interface3.make_move_ir(2,0,0,0);
        bool test18 = interface3.make_move(0,0,1,1); //should not pass
        bool test19 = interface3.make_move(0,0,-1,-1); //should not pass
        bool test20 = interface3.make_move(0,0,-2,0); //should not pass
        bool test21 = interface3.make_move(0,0,0,-2); //should not pass

        if(test16 && test17 && !test18 && !test19 && !test20 && !test21)
        {
            std::cout << "\033[1;31mTEST_1_ROOK_RULES_TEST_3 PASSED\033[0m\n";
        }
        else
        {
            std::cout << "\033[1;31mTEST_1_ROOK_RULES_TEST_3 FAILED\033[0m\n";
            std::cout << "TEST16 IS " << test16 << "TEST16 SHOULD BE " << true << std::endl;
            std::cout << "TEST17 IS " << test17 << "TEST17 SHOULD BE " << true << std::endl;
            std::cout << "TEST18 IS " << test18 << "TEST18 SHOULD BE " << false << std::endl;
            std::cout << "TEST19 IS " << test19 << "TEST19 SHOULD BE " << false << std::endl;
            std::cout << "TEST20 IS " << test20 << "TEST20 SHOULD BE " << false << std::endl;
            std::cout << "TEST21 IS " << test21 << "TEST21 SHOULD BE " << false << std::endl;

        }
    }
}
    

//for testing the bishop and if its moveset aligns with real chess moveset.
void test_2_bishop_rules(int test_number){

    if(test_number == 1 || test_number == 3){
        int board1[8][8]={{0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, -3, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface1(board1);
        bool test1 = interface1.make_move(3,3,0,6); // should pass
        interface1.make_move_ir(0,6,3,3);
        bool test2 = interface1.make_move(3,3,3,7); //should not pass
        bool test3 = interface1.make_move(3,3,6,6); // should pass
        interface1.make_move_ir(6,6,3,3);
        bool test4 = interface1.make_move(3,3,7,3); //should not pass
        bool test5 = interface1.make_move(3,3,6,0); //should pass
        interface1.make_move_ir(6,0,3,3);
        bool test6 = interface1.make_move(3,3,3,0); // should not pass
        bool test7 = interface1.make_move(3,3,0,0); // should pass
        interface1.make_move_ir(0,0,3,3);
        bool test8 = interface1.make_move(3,3,0,3); // should not pass


        if(test1 && !test2 && test3 && !test4 && test5 && !test6 && test7 && !test8)
        {
            std::cout << "\033[1;31mTEST_2_BISHOP_RULES_TEST_1 PASSED\033[0m\n";   
        }
        else
        {
            std::cout << "\033[1;31mTEST_2_BISHOP_RULES_TEST_1 FAILED\033[0m\n";
            std::cout << "TEST1 IS " << test1 << std::endl;
            std::cout << "TEST2 IS " << test2 << std::endl;
            std::cout << "TEST3 IS " << test3 << std::endl;
            std::cout << "TEST4 IS " << test4 << std::endl;
            std::cout << "TEST5 IS " << test5 << std::endl;
            std::cout << "TEST6 IS " << test6 << std::endl;
            std::cout << "TEST7 IS " << test7 << std::endl;
            std::cout << "TEST8 IS " << test8 << std::endl;
        }
    }

    if(test_number == 2 || test_number == 3){
        int board2[8][8]={{0, 0, 0, 0, 0, 0, 0, 0},
                          {0, -1, 0, 0, 0, 1, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, -3, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 1, 0, 0, 0, -1, 0, 0},
                          {-1, 0, 0, 0, 0, 0, 1, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface2(board2);
        bool test9 = interface2.make_move(3,3,1,5); //should pass
        interface2.make_move_ir(1,5,3,3);
        bool test10 = interface2.make_move(3,3,6,6); //should not pass
        bool test11 = interface2.make_move(3,3,6,0); //should not pass
        bool test12 = interface2.make_move(3,3,1,1); //should not pass

        if(test9 && !test10 && !test11 && !test12)
        {
            std::cout << "\033[1;31mTEST_2_BISHOP_RULES_TEST_2 PASSED\033[0m\n";
        }
        else{
            std::cout << "\033[1;31mTEST_2_BISHOP_RULES_TEST_2 FAILED\033[0m\n";
            std::cout << "TEST9 IS " << test9 << std::endl;
            std::cout << "TEST10 IS " << test10 << std::endl;
            std::cout << "TEST11 IS " << test11 << std::endl;
            std::cout << "TEST12 IS " << test12 << std::endl;
        }
    }

}

//for testing the knight and if its moveset aligns with real chess moveset.
void test_2_knight_rules(int test_number){

    if(test_number == 1 || test_number == 4){
        int board1[8][8] ={{0, 2, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface1(board1);
        bool test1 = interface1.make_move(0, 1, -1, 3); // nw
        bool test2 = interface1.make_move(0, 1, -2, 2); //nw
        bool test3 = interface1.make_move(0, 1, -2, 0); //nw
        bool test4 = interface1.make_move(0, 1, -1, -1); //nw
        bool test5 = interface1.make_move(0, 1, 1, -1); //nw
        bool test6 = interface1.make_move(0, 1, 1, 1); //nw
        bool test7 = interface1.make_move(0, 1, 1, 0); //nw
        bool test8 = interface1.make_move(0, 1, 0, 0); //nw
        bool test9 = interface1.make_move(0, 1, 1, 2); //nw
        bool test10 = interface1.make_move(0, 1, 0, 2); //nw

        bool test11 = interface1.make_move(0, 1, 1, 3); //should pass
        interface1.make_move_ir(1,3,0,1);
        bool test12 = interface1.make_move(0, 1, 2, 2); //should pass
        interface1.make_move_ir(2,2,0,1);
        bool test13 = interface1.make_move(0, 1, 2, 0); //should pass

        if(!test1 && !test2 && !test3 && !test4 && !test5 && !test6 && !test7 && !test8 
        && !test9 && !test10 && test11 && test12 && test13)
        {
            std::cout << "\033[1;31mTEST_2_KNIGHT_RULES_TEST_1 PASSED\033[0m\n";
        }
        else{
            std::cout << "\033[1;31mTEST_2_KNIGHT_RULES_TEST_1 FAILED\033[0m\n";
            std::cout << "TEST1 IS " << test1 << std::endl;
            std::cout << "TEST2 IS " << test2 << std::endl;
            std::cout << "TEST3 IS " << test3 << std::endl;
            std::cout << "TEST4 IS " << test4 << std::endl;
            std::cout << "TEST5 IS " << test5 << std::endl;
            std::cout << "TEST6 IS " << test6 << std::endl;
            std::cout << "TEST7 IS " << test7 << std::endl;
            std::cout << "TEST8 IS " << test8 << std::endl;
            std::cout << "TEST9 IS " << test9 << std::endl;
            std::cout << "TEST10 IS " << test10 << std::endl;
            std::cout << "TEST10 IS " << test11 << std::endl;
            std::cout << "TEST11 IS " << test12 << std::endl;
            std::cout << "TEST12 IS " << test13 << std::endl;
        }
    }

    if(test_number == 2 || test_number == 4){
        int board2[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0,  1, -1, 1, 0, 0, 0},
                           {0, 0, -1, -2, 1, 0, 0, 0},
                           {0, 0, -1, 1, -1, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface2(board2);

    
        bool test14 = interface2.make_move(3, 3, 1, 4); // should pass
        interface2.make_move_ir(1,4,3,3);
        bool test15 = interface2.make_move(3, 3, 2, 5); // should pass
        interface2.make_move_ir(2,5,3,3);
        bool test16 = interface2.make_move_ir(3, 3, 4, 5); // should pass
        interface2.make_move_ir(4,5,3,3);
        bool test17 = interface2.make_move(3, 3, 5, 4); // should pass
        interface2.make_move_ir(5,4,3,3);
        bool test18 = interface2.make_move(3, 3, 5, 2); // should pass
        interface2.make_move_ir(5,2,3,3);
        bool test19 = interface2.make_move(3, 3, 4, 1); // should pass
        interface2.make_move_ir(4,1,3,3);
        bool test20 = interface2.make_move(3, 3, 2, 1); // should pass 
        interface2.make_move_ir(2,1,3,3);
        bool test21 = interface2.make_move(3, 3, 1, 2); // should pass
        interface2.make_move_ir(1,2,3,3);
        bool test22 = interface2.make_move(3, 3, 5, 3); // should not pass
        bool test23 = interface2.make_move(3, 3, 3, 1); // should not pass
        bool test24 = interface2.make_move(3, 3, 3, 5); // should not pass
        bool test25 = interface2.make_move(3, 3, 1, 3); // should not pass


        if(test14 && test15 && test16 && test17 && test18 && test19 && test20 && test21
        && !test22 && !test23 && !test24 && !test25)
        {
            std::cout << "\033[1;31mTEST_2_KNIGHT_RULES_TEST_2 PASSED\033[0m\n";
        }
        else{
            std::cout << "\033[1;31mTEST_2_KNIGHT_RULES_TEST_2 FAILED\033[0m\n";
            std::cout << "TEST14 IS " << test14 << std::endl;
            std::cout << "TEST15 IS " << test15 << std::endl;
            std::cout << "TEST16 IS " << test16 << std::endl;
            std::cout << "TEST17 IS " << test17 << std::endl;
            std::cout << "TEST18 IS " << test18 << std::endl;
            std::cout << "TEST19 IS " << test19 << std::endl;
            std::cout << "TEST20 IS " << test20 << std::endl;
            std::cout << "TEST21 IS " << test21 << std::endl;
            std::cout << "TEST22 IS " << test22 << std::endl;
            std::cout << "TEST23 IS " << test23 << std::endl;
            std::cout << "TEST24 IS " << test24 << std::endl;
            std::cout << "TEST25 IS " << test25 << std::endl;
        }
    }

    if(test_number == 3 || test_number == 4){
        int board3[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, -1, 0, 1, 0, 0, 0},
                           {0, 1, 0, 0, 0, -1, 0, 0},
                           {0, 0, 0, -2, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 1, 0, 0},
                           {0, 0, 1, 0, -1, 0, 0, 0},
                           {0, 0, 0, 0,  0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface3(board3);
        bool test26 = interface3.make_move(3, 3, 1, 4); // should pass
        interface3.make_move_ir(1,4,3,3);
        bool test27 = interface3.make_move(3, 3, 2, 5); // should not pass
        bool test28 = interface3.make_move(3, 3, 4, 5); // should pass
        interface3.make_move_ir(4,5,3,3);
        bool test29 = interface3.make_move(3, 3, 5, 4); // should not pass
        bool test30 = interface3.make_move(3, 3, 5, 2); // should pass
        interface3.make_move_ir(5,2,3,3);
        bool test31 = interface3.make_move(3, 3, 4, 1); // should not pass
        bool test32 = interface3.make_move(3, 3, 2, 1); // should pass
        interface3.make_move_ir(2,1,3,3);
        bool test33 = interface3.make_move(3, 3, 1, 2); // should not pass

        if(test26 && !test27 && test28 && !test29 && test30 && !test31 && test32 && !test33)
        {
            std::cout << "\033[1;31mTEST_2_KNIGHT_RULES_TEST_3 PASSED\033[0m\n";
        }
        else{
            std::cout << "\033[1;31mTEST_2_KNIGHT_RULES_TEST_3 FAILED\033[0m\n";
            std::cout << "TEST26 IS " << test26 << std::endl;
            std::cout << "TEST27 IS " << test27 << std::endl;
            std::cout << "TEST28 IS " << test28 << std::endl;
            std::cout << "TEST29 IS " << test29 << std::endl;
            std::cout << "TEST30 IS " << test30 << std::endl;
            std::cout << "TEST31 IS " << test31 << std::endl;
            std::cout << "TEST32 IS " << test32 << std::endl;
            std::cout << "TEST33 IS " << test33 << std::endl;
        }
    }


}

//for testing the queen and if its moveset aligns with real chess moveset.
void test_2_queen_rules(int test_number){

    if(test_number == 1 || test_number == 6){
        int board1[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 6}};
        Interface interface1(board1);
        bool test1 = interface1.make_move(7, 7, 6, 8); // nw
        bool test2 = interface1.make_move(7, 7, 7, 8); //nw
        bool test3 = interface1.make_move(7, 7, 8, 8); //nw
        bool test4 = interface1.make_move(7, 7, 8, 7); //nw
        bool test5 = interface1.make_move(7, 7, 8, 6); //nw
        bool test6 = interface1.make_move(7, 7, 3, 11); //nw
        bool test7 = interface1.make_move(7, 7, 7, 11); //nw
        bool test8 = interface1.make_move(7, 7, 11, 7); //nw
        bool test9 = interface1.make_move(7, 7, 11, 3); //nw
        bool test10 = interface1.make_move(7, 7, 7, 6); //should pass
        interface1.make_move_ir(7,6,7,7);
        bool test11 = interface1.make_move(7, 7, 6, 6); //should pass
        interface1.make_move_ir(6,6,7,7);
        bool test12 = interface1.make_move(7, 7, 6, 7); //should pass
        interface1.make_move_ir(6,7,7,7);
        bool test13 = interface1.make_move(7, 7, 0, 7); //should pass
        interface1.make_move_ir(0,7,7,7);
        bool test14 = interface1.make_move(7, 7, 0, 0); //should pass
        interface1.make_move_ir(0,0,7,7);
        bool test15 = interface1.make_move(7, 7, 7, 0); //should pass

        if(!test1 && !test2 && !test3 && !test4 && !test5 && !test6 && !test7 && !test8 && !test9
        && test10 && test11 && test12 && test13 && test14 && test15)
        {
            std::cout << "\033[1;31mTEST_2_QUEEN_RULES_TEST_1 PASSED\033[0m\n";
        }
        else
        {
            std::cout << "\033[1;31mTEST_2_QUEEN_RULES_TEST_1 FAILED\033[0m\n";
            std::cout << "TEST1 IS " << test1 << std::endl;
            std::cout << "TEST2 IS " << test2 << std::endl;
            std::cout << "TEST3 IS " << test3 << std::endl;
            std::cout << "TEST4 IS " << test4 << std::endl;
            std::cout << "TEST5 IS " << test5 << std::endl;
            std::cout << "TEST6 IS " << test6 << std::endl;
            std::cout << "TEST7 IS " << test7 << std::endl;
            std::cout << "TEST8 IS " << test8 << std::endl;
            std::cout << "TEST9 IS " << test9 << std::endl;
            std::cout << "TEST10 IS " << test10 << std::endl;
            std::cout << "TEST11 IS " << test11 << std::endl;
            std::cout << "TEST12 IS " << test12 << std::endl;
            std::cout << "TEST13 IS " << test13 << std::endl;
            std::cout << "TEST14 IS " << test14 << std::endl;
            std::cout << "TEST15 IS " << test15 << std::endl;
        }

        
    }

    if(test_number == 2 || test_number == 6){
        int board2[8][8] ={{-1, 0, 0, 0, 0, 0, 1, 0},
                           {0, 1, 0, 0, 0, -1, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, -6, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 1, 0, 0, 0, -1, 0, 0},
                           {1, 0, 0, 0, 0, 0, -1, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface2(board2);

        bool test16 = interface2.make_move(3, 3, 0, 6); //nw
        bool test17 = interface2.make_move(3, 3, 6, 6); //nw
        bool test18 = interface2.make_move(3, 3, 6, 0); //nw
        bool test19 = interface2.make_move(3, 3, 0, 0); //nw

        if(!test16 && !test17 && !test18 && !test19)
        {
            std::cout << "\033[1;31mTEST_2_QUEEN_RULES_TEST_2 PASSED\033[0m\n";
        }
        else{
            std::cout << "\033[1;31mTEST_2_QUEEN_RULES_TEST_2 FAILED\033[0m\n";
            std::cout << "TEST16 IS " << test16 << std::endl;
            std::cout << "TEST17 IS " << test17 << std::endl;
            std::cout << "TEST18 IS " << test18 << std::endl;
            std::cout << "TEST19 IS " << test19 << std::endl;
        }
    }

    if(test_number == 3 || test_number == 6){
        int board3[8][8] ={{0, 0, 0, -1, 0, 0, 0, 0},
                           {0, 0, 0, 1, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {1, -1, 0, -6, 0, 0, 1, -1},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, -1, 0, 0, 0, 0},
                           {0, 0, 0, 1, 0, 0, 0, 0}};
        Interface interface3(board3);

        bool test20 = interface3.make_move(3, 3, 0, 3); //nw
        bool test21 = interface3.make_move(3, 3, 3, 7); //nw
        bool test22 = interface3.make_move(3, 3, 7, 3); //nw
        bool test23 = interface3.make_move(3, 3, 3, 0); //nw


        if(!test20 && !test21 && !test22 && !test23)
        {
            std::cout << "\033[1;31mTEST_2_QUEEN_RULES_TEST_3 PASSED\033[0m\n";
        }
        else
        {
            std::cout << "\033[1;31mTEST_2_QUEEN_RULES_TEST_3 FAILED\033[0m\n";
            std::cout << "TEST20 IS " << test20 << std::endl;
            std::cout << "TEST21 IS " << test21 << std::endl;
            std::cout << "TEST22 IS " << test22 << std::endl;
            std::cout << "TEST23 IS " << test23 << std::endl;
        }
    }

    if(test_number == 4 || test_number == 6){

        int board5[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 1, 0, 1, 0, -1, 0, 0},
                           {0, 0, 1, 1, -1, 0, 0, 0},
                           {0, 0, -1, -6, -1, -1, 0, 0},
                           {0, 0, -1, 1, 1, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface5(board5);
        bool test28 = interface5.make_move(3, 3, 1, 1); //nw
        bool test29 = interface5.make_move(3, 3, 2, 2); //should pass
        interface5.make_move_ir(2,2,3,3);
        bool test30 = interface5.make_move(3, 3, 1, 3); //nw
        bool test31 = interface5.make_move(3, 3, 2, 3); //should pass
        interface5.make_move_ir(2,3,3,3);
        bool test32 = interface5.make_move(3, 3, 1, 5); //nw
        bool test33 = interface5.make_move(3, 3, 2, 4); //nw
        bool test34 = interface5.make_move(3, 3, 3, 5); //nw
        bool test35 = interface5.make_move(3, 3, 3, 4); //nw
        bool test36 = interface5.make_move(3, 3, 3, 2); //nw
        bool test37 = interface5.make_move(3, 3, 4, 2); //nw
        bool test38 = interface5.make_move(3, 3, 4, 3); //should pass
        interface5.make_move_ir(4,3,3,3);
        bool test39 = interface5.make_move(3, 3, 4, 4); //should pass
        std::cout << "TEST39 IS " << test39 << std::endl;

        if(!test28 && test29 && !test30 && test31 && !test32 && !test33 && !test34 && !test35
        && !test36 && !test37 && test38 && test39)
        {
            std::cout << "\033[1;31mTEST_2_QUEEN_RULES_TEST_4 PASSED\033[0m\n";
        }
        else{
            std::cout << "\033[1;31mTEST_2_QUEEN_RULES_TEST_4 FAILED\033[0m\n";
            std::cout << "TEST28 IS " << test28 << std::endl;
            std::cout << "TEST29 IS " << test29 << std::endl;
            std::cout << "TEST30 IS " << test30 << std::endl;
            std::cout << "TEST31 IS " << test31 << std::endl;
            std::cout << "TEST32 IS " << test32 << std::endl;
            std::cout << "TEST33 IS " << test33 << std::endl;
            std::cout << "TEST34 IS " << test34 << std::endl;
            std::cout << "TEST35 IS " << test35 << std::endl;
            std::cout << "TEST36 IS " << test36 << std::endl;
            std::cout << "TEST37 IS " << test37 << std::endl;
            std::cout << "TEST38 IS " << test38 << std::endl;
            std::cout << "TEST39 IS " << test39 << std::endl;
        }
    }

    if(test_number == 5 || test_number == 6){
        int board6[8][8] ={{-1, 0, 0, -1, 0, 0, 1, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {1, 0, 0, -6,0, 0, 0, -1},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {1, 0, 0, 0, 0, 0, -1, 0},
                           {0, 0, 0, 1, 0, 0, 0, 0}};
        Interface interface6(board6);
        bool test40 = interface6.make_move(3, 3, 0, 3); //nw
        bool test41 = interface6.make_move(3, 3, 3, 7); //nw
        bool test42 = interface6.make_move(3, 3, 6, 6); //nw
        bool test43 = interface6.make_move(3, 3, 0, 0); //nw
        bool test44 = interface6.make_move(3, 3, 0, 6); //should pass
        interface6.make_move_ir(0,6,3,3);
        bool test45 = interface6.make_move(3, 3, 3, 0); //should pass
        interface6.make_move_ir(3,0,3,3);
        bool test46 = interface6.make_move(3, 3, 6, 0); //should pass
        interface6.make_move_ir(6,0,3,3);
        bool test47 = interface6.make_move(3, 3, 7, 3); //should pass
        std::cout << "TEST47 IS " << test47 << std::endl;
        interface6.make_move_ir(7,3,3,3);

        if(!test40 && !test41 && !test42 && !test43 && test44 && test45 && test46 && test47)
        {
            std::cout << "\033[1;31mTEST_2_QUEEN_RULES_TEST_5 PASSED\033[0m\n";   
        }
        else
        {
            std::cout << "\033[1;31mTEST_2_QUEEN_RULES_TEST_5 FAILED\033[0m\n";
            std::cout << "TEST40 IS " << test40 << std::endl;
            std::cout << "TEST41 IS " << test41 << std::endl;
            std::cout << "TEST42 IS " << test42 << std::endl;
            std::cout << "TEST43 IS " << test43 << std::endl;
            std::cout << "TEST44 IS " << test44 << std::endl;
            std::cout << "TEST45 IS " << test45 << std::endl;
            std::cout << "TEST46 IS " << test46 << std::endl;
            std::cout << "TEST47 IS " << test47 << std::endl;
        }

    }


}

//for testing the king and if its moveset aligns with real chess moveset.
void test_2_king_rules(int test_number){

    if(test_number == 1 || test_number == 3){
        int board1[8][8] ={{0, 0, 0, 0, 0, 0, 0, 9},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface1(board1);

        bool test1 = interface1.make_move(0, 7, -1, 7);//nw
        bool test2 = interface1.make_move(0, 7, -1, 8);//nw
        bool test3 = interface1.make_move(0, 7, 0, 8);//nw
        bool test4 = interface1.make_move(0, 7, 1, 8);//nw
        bool test5 = interface1.make_move(0, 7, 1, 7);//should pass
        interface1.make_move_ir(1,7,0,7);
        bool test6 = interface1.make_move(0, 7, 1, 6);//should pass
        interface1.make_move_ir(1,6,0,7);
        bool test7 = interface1.make_move(0, 7, 0, 6);//should pass
        interface1.make_move_ir(0,6,0,7);
        bool test8 = interface1.make_move(0, 7, -1, 6);//nw

        if(!test1 && !test2 && !test3 && !test4 && test5 && test6 && test7 && !test8)
        {
            std::cout << "\033[1;31mTEST_2_KING_RULES_TEST_1 PASSED\033[0m\n";
        }
        else
        {
            std::cout << "\033[1;31mTEST_2_KING_RULES_TEST_1 FAILED\033[0m\n";
            std::cout << "TEST1 IS " << test1 << std::endl;
            std::cout << "TEST2 IS " << test2 << std::endl;
            std::cout << "TEST3 IS " << test3 << std::endl;
            std::cout << "TEST4 IS " << test4 << std::endl;
            std::cout << "TEST5 IS " << test5 << std::endl;
            std::cout << "TEST6 IS " << test6 << std::endl;
            std::cout << "TEST7 IS " << test7 << std::endl;
            std::cout << "TEST8 IS " << test8 << std::endl;
        }
    }

    if(test_number == 2 || test_number == 3){
        int board2[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 1, 1, -1, 0, 0, 0},
                           {0, 0, -1, -9, 1, 0, 0, 0},
                           {0, 0, 1, -1, 1, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface2(board2);

        bool test9 = interface2.make_move(3, 3, 1, 1);//nw
        bool test10 = interface2.make_move(3, 3, 1, 2);//nw
        bool test11 = interface2.make_move(3, 3, 1, 3);//nw
        bool test12 = interface2.make_move(3, 3, 1, 4);//nw
        bool test13 = interface2.make_move(3, 3, 1, 5);//nw
        bool test14 = interface2.make_move(3, 3, 2, 5);//nw
        bool test15 = interface2.make_move(3, 3, 3, 5);//nw
        bool test16 = interface2.make_move(3, 3, 4, 5);//nw
        bool test17 = interface2.make_move(3, 3, 5, 5);//nw
        bool test18 = interface2.make_move(3, 3, 5, 4);//nw
        bool test19 = interface2.make_move(3, 3, 5, 3);//nw
        bool test20 = interface2.make_move(3, 3, 5, 2);//nw
        bool test21 = interface2.make_move(3, 3, 5, 1);//nw
        bool test22 = interface2.make_move(3, 3, 4, 1);//nw
        bool test23 = interface2.make_move(3, 3, 3, 2);//nw
        bool test24 = interface2.make_move(3, 3, 2, 1);//nw
        bool test25 = interface2.make_move(3, 3, 2, 2);//should pass
        interface2.make_move_ir(2,2,3,3);
        bool test26 = interface2.make_move(3, 3, 2, 3);//should pass
        interface2.make_move_ir(2,3,3,3);
        bool test27 = interface2.make_move(3, 3, 2, 4);//nw
        bool test28 = interface2.make_move(3, 3, 3, 4);//should pass
        interface2.make_move_ir(3,4,3,3);
        bool test29 = interface2.make_move(3, 3, 4, 4);//should pass
        interface2.make_move_ir(4,4,3,3);
        bool test30 = interface2.make_move(3, 3, 4, 3);//nw
        bool test31 = interface2.make_move(3, 3, 4, 2);//should pass
        interface2.make_move_ir(4,2,3,3);
        bool test32 = interface2.make_move(3, 3, 3, 2);//nw

        if(!test9 && !test10 && !test11 && !test12 && !test13 && !test14 &&
        !test15 && !test16 && !test17 && !test18 && !test19 && !test20 &&
        !test21 && !test22 && !test23 && !test24 && test25 && test26 &&
        !test27 && test28 && test29 && !test30 && test31 && !test32)
        {
            std::cout << "\033[1;31mTEST_2_KING_RULES_TEST_2 PASSED\033[0m\n";
        }
        else
        {
            std::cout << "\033[1;31mTEST_2_KING_RULES_TEST_2 FAILED\033[0m\n";
            std::cout << "TEST9 IS " << test9 << std::endl;
            std::cout << "TEST10 IS " << test10 << std::endl;
            std::cout << "TEST11 IS " << test11 << std::endl;
            std::cout << "TEST12 IS " << test12 << std::endl;
            std::cout << "TEST13 IS " << test13 << std::endl;
            std::cout << "TEST14 IS " << test14 << std::endl;
            std::cout << "TEST15 IS " << test15 << std::endl;
            std::cout << "TEST16 IS " << test16 << std::endl;
            std::cout << "TEST17 IS " << test17 << std::endl;
            std::cout << "TEST18 IS " << test18 << std::endl;
            std::cout << "TEST19 IS " << test19 << std::endl;
            std::cout << "TEST20 IS " << test20 << std::endl;
            std::cout << "TEST21 IS " << test21 << std::endl;
            std::cout << "TEST22 IS " << test22 << std::endl;
            std::cout << "TEST23 IS " << test23 << std::endl;
            std::cout << "TEST24 IS " << test24 << std::endl;
            std::cout << "TEST25 IS " << test25 << std::endl;
            std::cout << "TEST26 IS " << test26 << std::endl;
            std::cout << "TEST27 IS " << test27 << std::endl;
            std::cout << "TEST28 IS " << test28 << std::endl;
            std::cout << "TEST29 IS " << test29 << std::endl;
            std::cout << "TEST30 IS " << test30 << std::endl;
            std::cout << "TEST31 IS " << test31 << std::endl;
            std::cout << "TEST32 IS " << test32 << std::endl;
        }
    }
}

//for testing the pawn and if its moveset aligns with real chess moveset.
void test_2_pawn_rules(int test_number){

    if(test_number == 1 || test_number == 6){
        int board1[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface1(board1);

        bool test1 = interface1.make_move(1, 1, 3, 1);//should pass
        interface1.make_move_ir(3,1,1,1);
        bool test2 = interface1.make_move(1, 1, 2, 1);//should pass
        interface1.make_move_ir(2,1,1,1);
        bool test3 = interface1.make_move(1, 1, 2, 0);//nw
        bool test4 = interface1.make_move(1, 1, 2, 2);//nw
        bool test5 = interface1.make_move(1, 1, 1, 0);//nw
        bool test6 = interface1.make_move(1, 1, 1, 2);//nw
        bool test7 = interface1.make_move(1, 1, 0, 0);//nw
        bool test8 = interface1.make_move(1, 1, 0, 1);//nw
        bool test9 = interface1.make_move(1, 1, 0, 2);//nw

        if(test1 && test2 && !test3 && !test4 && !test5 && !test6 && !test7
        && !test8 && !test9)
        {
            std::cout << "\033[1;31mTEST_2_PAWN_RULES_TEST_1 PASSED\033[0m\n";
        }
        else
        {
            std::cout << "\033[1;31mTEST_2_PAWN_RULES_TEST_1 FAILED\033[0m\n";
            std::cout << "TEST1 IS " << test1 << std::endl;
            std::cout << "TEST2 IS " << test2 << std::endl;
            std::cout << "TEST3 IS " << test3 << std::endl;
            std::cout << "TEST4 IS " << test4 << std::endl;
            std::cout << "TEST5 IS " << test5 << std::endl;
            std::cout << "TEST6 IS " << test6 << std::endl;
            std::cout << "TEST7 IS " << test7 << std::endl;
            std::cout << "TEST8 IS " << test8 << std::endl;
            std::cout << "TEST9 IS " << test9 << std::endl;
        }
    }

    if(test_number ==2 || test_number == 6){

        int board2[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface2(board2);

        bool test10 = interface2.make_move(2, 1, 3, 1);//should pass
        interface2.make_move_ir(3,1,2,1);
        bool test11 = interface2.make_move(2, 1, 4, 1);//nw
        bool test12 = interface2.make_move(2, 1, 1, 2);//nw
        bool test13 = interface2.make_move(2, 1, 2, 2);//nw
        bool test14 = interface2.make_move(2, 1, 3, 2);//nw
        bool test15 = interface2.make_move(2, 1, 3, 0);//nw
        bool test16 = interface2.make_move(2, 1, 2, 0);//nw
        bool test17 = interface2.make_move(2, 1, 1, 0);//nw
        bool test18 = interface2.make_move(2, 1, 1, 1);//nw

        if(test10 && !test11 && !test13 && !test14 && !test15 && !test16 
        && !test17 && !test18)
        {
            std::cout << "\033[1;31mTEST_2_PAWN_RULES_TEST_2 PASSED\033[0m\n";
        }
        else
        {
            std::cout << "\033[1;31mTEST_2_PAWN_RULES_TEST_2 FAILED\033[0m\n";
            std::cout << "TEST10 IS " << test10 << std::endl;
            std::cout << "TEST11 IS " << test11 << std::endl;
            std::cout << "TEST12 IS " << test12 << std::endl;
            std::cout << "TEST13 IS " << test13 << std::endl;
            std::cout << "TEST14 IS " << test14 << std::endl;
            std::cout << "TEST15 IS " << test15 << std::endl;
            std::cout << "TEST16 IS " << test16 << std::endl;
            std::cout << "TEST17 IS " << test17 << std::endl;
            std::cout << "TEST18 IS " << test18 << std::endl;
        }
    }

    if(test_number == 3 || test_number == 6){

        int board3[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface3(board3);

        bool test14 = interface3.make_move(6, 1, 4, 1);//nw
        bool test15 = interface3.make_move(6, 1, 8, 2);//nw
        bool test16 = interface3.make_move(6, 1, 8, 1);//nw
        bool test17 = interface3.make_move(6, 1, 8, 0);//nw
        bool test18 = interface3.make_move(6, 1, 7, 0);//nw
        bool test19 = interface3.make_move(6, 1, 6, 0);//nw
        bool test20 = interface3.make_move(6, 1, 5, 0);//nw
        bool test21 = interface3.make_move(6, 1, 5, 1);//nw
        bool test22 = interface3.make_move(6, 1, 5, 2);//nw
        bool test23 = interface3.make_move(6, 1, 6, 2);//nw
        bool test24 = interface3.make_move(6, 1, 7, 2);//nw
        bool test25 = interface3.make_move(6, 1, 7, 1);//should work
        std::cout << "TEST25 IS " << test18 << std::endl;

        if(!test14 && !test15 && !test16 && !test17 && !test18 && !test19
        && !test20 && !test21 && !test22 && !test23 && !test24 && test25)
        {
            std::cout << "\033[1;31mTEST_2_PAWN_RULES_TEST_3 PASSED\033[0m\n";
        }
        else
        {
            std::cout << "\033[1;31mTEST_2_PAWN_RULES_TEST_3 FAILED\033[0m\n";
            std::cout << "TEST14 IS " << test14 << std::endl;
            std::cout << "TEST15 IS " << test15 << std::endl;
            std::cout << "TEST16 IS " << test16 << std::endl;
            std::cout << "TEST17 IS " << test17 << std::endl;
            std::cout << "TEST18 IS " << test18 << std::endl;
            std::cout << "TEST19 IS " << test19 << std::endl;
            std::cout << "TEST20 IS " << test20 << std::endl;
            std::cout << "TEST21 IS " << test21 << std::endl;
            std::cout << "TEST22 IS " << test22 << std::endl;
            std::cout << "TEST23 IS " << test23 << std::endl;
            std::cout << "TEST24 IS " << test24 << std::endl;
            std::cout << "TEST25 IS " << test18 << std::endl;
        }
    }

    if(test_number == 4 || test_number == 6){
        int board4[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {1, 0, -1, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface4(board4);
        bool test26 = interface4.make_move(1, 1, 2, 1);//should pass
        interface4.make_move_ir(2,1,1,1);
        bool test27 = interface4.make_move(1, 1, 2, 0);//should pass
        interface4.make_move_ir(2,0,1,1);
        bool test28 = interface4.make_move(1, 1, 2, 2);//nw

        if(test26 && test27 && !test28)
        {
            std::cout << "\033[1;31mTEST_2_PAWN_RULES_TEST_4 PASSED\033[0m\n";
        }
        else
        {
            std::cout << "\033[1;31mTEST_2_PAWN_RULES_TEST_4 FAILED\033[0m\n";
            std::cout << "TEST26 IS " << test26 << std::endl;
            std::cout << "TEST27 IS " << test27 << std::endl;
            std::cout << "TEST28 IS " << test28 << std::endl;
        }
    }

    if(test_number == 5 || test_number == 6){


        int board5[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface5(board5);

        bool test29 = interface5.make_move(1, 1, 3, 1);//nw
        bool test30 = interface5.make_move(1, 1, 2, 1);//nw

        if(!test29 && !test30)
        {
            std::cout << "\033[1;31mTEST_2_PAWN_RULES_TEST_5 PASSED\033[0m\n";
        }
        else
        {
            std::cout << "\033[1;31mTEST_2_PAWN_RULES_TEST_5 FAILED\033[0m\n";
            std::cout << "TEST29 IS " << test29 << std::endl;
            std::cout << "TEST30 IS " << test30 << std::endl;
        }
    }
}

void test_update_lost_box(int test_number){

    if(test_number == 1){
        int board1[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {0, 0, 1, 0, 0, 0, 0, 0}};
        Interface interface1(board1);
        interface1.make_move(6,1,7,2);
        //pawn section of taken pieces box should be == 1
        interface1.print_board_state();
    }
    //test passed
    if(test_number == 2){
        int board1[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {0, 0, 2, 0, 0, 0, 0, 0}};
        Interface interface1(board1);
        interface1.make_move(6,1,7,2);
        //knight section of taken pieces box should be == 1
        interface1.print_board_state();
    }
    //test passed
    if(test_number == 3){
        int board1[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {0, 0, 3, 0, 0, 0, 0, 0}};
        Interface interface1(board1);
        interface1.make_move(6,1,7,2);
        //bishop section of taken pieces box should be == 1
        interface1.print_board_state();
    }
    //test passed
    if(test_number == 4){
        int board1[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {0, 0, 5, 0, 0, 0, 0, 0}};
        Interface interface1(board1);
        interface1.make_move(6,1,7,2);
        //rook section of taken pieces box should be == 1
        interface1.print_board_state();
    }
    //test passed
    if(test_number == 5){
        int board1[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {0, 0, 6, 0, 0, 0, 0, 0}};
        Interface interface1(board1);
        interface1.make_move(6,1,7,2);
        //king section of taken pieces box should be == 1
        interface1.print_board_state();
    }
    //test passed
    if(test_number == 6){
        int board1[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {0, 0, 9, 0, 0, 0, 0, 0}};
        Interface interface1(board1);
        interface1.make_move(6,1,7,2);
        //queen section of taken pieces box should be == 1
        interface1.print_board_state();
    }
    
}

void win_test(int test_number){
    //test passed
    if(test_number == 1){
        int board1[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, -1, 0, 0, 0, 0, 0, 0},
                           {0, 0, 6, 0, 0, 0, 0, 0}};
        Interface interface1(board1);
        interface1.make_move(6,1,7,2);
        if(interface1.is_game_over()){
            interface1.print_win_screen();
        }
    }
    if(test_number == 2){
        int board2[8][8] ={{0, 0, 0, 0, 0, 0, 0, 0},
                           {1, 0, 0, 0, 0, 0, 0, 0},
                           {0, -6, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0}};
        Interface interface2(board2);
        if(interface2.is_game_over()){
            interface2.print_win_screen();
        }
        interface2.make_move(1, 0, 2, 1);
        if(interface2.is_game_over()){
            interface2.print_win_screen();
        }
    }
}

int main()
{
    test_1_rook_rules(4);
    test_2_bishop_rules(3);
    test_2_knight_rules(4);
    test_2_queen_rules(6);
    test_2_king_rules(3);
    test_2_pawn_rules(6);
    return 0;
}