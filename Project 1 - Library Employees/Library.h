#include <queue>

class Library
{
private:
	std::queue<int> archive;
	std::queue<int> circulation;
	std::
public:
	Library();
	void add_book();
	void add_employee();
	void circulate_book();
	void pass_on();
};

