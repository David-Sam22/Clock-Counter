#ifndef Clock_h
#define Clock_h
#include <string>
#include "Counter.hpp"

class clock{
private:
	Counter _hh;
	Counter _mm;
	Counter _ss;
public:
	clock();
	void tick();
	void clockreset();
	std::string ToString();
	};
#endif // !1