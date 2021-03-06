// Random64.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Clock64.h"
#include "Random64.h"
#include <bitset>

int main()
{
    Clock64 clock;
    clock.startClock();

    Random64 lcg;
    
    if (lcg.checkInternalParameters())
    {
        std::cout << "Right initial state of LCG\n" << std::endl;
    }
    else
    {
        std::cout << "Incorrect initial state of LCG\n" << std::endl;
    }

    lcg.setSeed(clock.getTime());

    for(int x=0 ; x < 10 ; x++)
        std::cout << "Number " << x+1 << ": " << std::bitset<64>(lcg.nextRandom()) << std::endl;

    std::cout << std::endl;

    system("PAUSE");
    return 0;
}

