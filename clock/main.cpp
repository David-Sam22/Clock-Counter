// clock.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Clock.hpp"
#include "Counter.hpp"
#include <iostream>

int main()
{
	clock* k = new clock();
	while (true)
	{
		
		k->tick();
		std::cout << k->ToString() << std::endl;
		//printf("%s",k->ToString());
		//k->clockreset();
	}

    return 0;
}

