#include <iostream>
#include <string>

struct employee
{
	std::string name;
	employee* next;

	employee(std::string newName) : name(newName), next(NULL)
	{
		std::cout << "Hi, I am " << newName << std::endl;
	}
};

int main( int argc, char* argv[] )
{
	employee* mark = new employee( "Mark James" );

	mark->next = new employee( "George Winston" );
	mark->next->next = new employee( "Paul Girish" );

	delete mark;

	return 0;
}

