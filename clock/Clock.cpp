#include "Clock.hpp"
#include "Counter.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

clock::clock(): _ss(""), _mm(""), _hh("")
{
}

void clock::tick()
{
	_ss.Increment();
	if (_ss.GetValue() >= 60)
	{
		_ss.Reset();
		_mm.Increment();
		if (_mm.GetValue() >= 60)
		{
			_mm.Reset();
			_hh.Increment();
			if (_hh.GetValue() >= 24)
			{
				clockreset();
			}
		}
	}
}

void clock::clockreset()
{
	_hh.Reset();
	_mm.Reset();
	_ss.Reset();
}

std::string clock::ToString()
{	
	std::string test;
	std::stringstream ss;
	ss << std::setw(2) << std::setfill('0') << _hh.GetValue() << ":" << std::setw(2) << std::setfill('0') << _mm.GetValue() << ":" << std::setw(2) << std::setfill('0') << _ss.GetValue();
	return test = ss.str();
}