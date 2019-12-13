#include "Counter.hpp"


Counter::Counter(std::string name) {
	_name = name;
	_Count = 0;
}
void Counter::Increment() {
	_Count++;
}

void Counter::Reset() {
	_Count = 0;
}

int Counter::GetValue() {
	return _Count;
}

