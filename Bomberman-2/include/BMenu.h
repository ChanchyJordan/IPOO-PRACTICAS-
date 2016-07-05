#ifndef BMENU_H
#define BMENU_H

#include <iostream>

using namespace std;

class BMenu
{
private:
    char tecla;
    char inicio[500][1000] =
    {
    "    BBBBBBBBBBB    OOOOOOOOOOOO    MMMMMMM           MMMMMMM    BBBBBBBBBBB    EEEEEEEEE   RRRRRRRRRRRR  ",
    "    BBBBBBBBBBB    OOOOOOOOOOOO    MMMMM  MM        MM  MMMM    BBBBBBBBBBB    EEEEEEEEE   RRRRRRRRRRRR  ",
    "    BBBB    BBB    OOOO     OOO    MMMMM  MM       MM   MMMM    BBBB    BBB    EE          RRRR    RRRR  ",
    "    BBBB    BBB    OOOO     OOO    MMMMM   MM      MM   MMMM    BBBB    BBB    EE          RRRR    RRRR  ",
    "    BBBBBBBBBBB    OOOO     OOO    MMMMM   MM     MM    MMMM    BBBBBBBBBBB    EEEEEEEEE   RRRRRRRRRRRR  ",
    "    BBBBBBBBBBB    OOOO     OOO    MMMMM    MM    MM    MMMM    BBBBBBBBBBB    EEEEEEEEE   RRR    RR     ",
    "    BBBB    BBB    OOOO     OOO    MMMMM    MM   MM     MMMM    BBBB    BBB    EE          RRR    RRR    ",
    "    BBBB    BBB    OOOO     OOO    MMMMM     MM  MM     MMMM    BBBB    BBB    EE          RRR    RRRR   ",
    "    BBBBBBBBBBB    OOOOOOOOOOOO    MMMMM     MM MM      MMMM    BBBBBBBBBBB    EEEEEEEEE   RRR    RRRRR  ",
    "    BBBBBBBBBBB    OOOOOOOOOOOO    MMMMM      MMMM      MMMM    BBBBBBBBBBB    EEEEEEEEE   RRR    RRRRRR ",
    "                                                                                                         ",
    "                                                                                                         ",
    "                       MMMMMMM           MMMMMMM       AAAAAA      MMMMMMM      MMMM                     ",
    "                       MMMMM  MM        MM  MMMM      AAAAAAAA     MMMMM  MM    MMMM                     ",
    "                       MMMMM  MM       MM   MMMM     AAAAAAAAAA    MMMMM  MM    MMMM                     ",
    "                       MMMMM   MM      MM   MMMM     AAAA   AAAA   MMMMM   MM   MMMM                     ",
    "                       MMMMM   MM     MM    MMMM     AAA     AAA   MMMMM   MM   MMMM                     ",
    "                       MMMMM    MM    MM    MMMM     AA       AA   MMMMM    MM  MMMM                     ",
    "                       MMMMM    MM   MM     MMMM     AAAAAAAAAAA   MMMMM    MM  MMMM                     ",
    "                       MMMMM     MM  MM     MMMM     AAAAAAAAAAA   MMMMM     MM MMMM                     ",
    "                       MMMMM     MM MM      MMMM     AAA     AAA   MMMMM     MM MMMM                     ",
    "                       MMMMM      MMMM      MMMM     AAA     AAA   MMMMM      MMMMMM                     ",

    };

public:
    BMenu();


};


#endif // BMENU_H
