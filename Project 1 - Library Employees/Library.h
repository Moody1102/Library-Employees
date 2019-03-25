#include <queue>
#include <list>
#include <Books.h>
#include <Employees>

class Library
{
private:
	std::list<int> archive;
	std::list<int> circulation;
	std::
public:
	Library();
	void add_book();
	void add_employee();
	void circulate_book();
	void pass_on();
};

