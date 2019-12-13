#ifndef Counter_h
	#define Counter_h
	#include <string>

	class Counter {
	private:
		int _Count;
		std::string _name;
	public:
		Counter(std::string name);
		void Increment();
		void Reset();
		int GetValue();
	};
#endif // !1

