#include "Stack.h"

/*
* main - entry point
* Return: Always 0 (Success)
*/

int main()
{
	Stack<int> stack1;

	//deleting from stack
	stack1.pop();
	std::cout << std::endl;

	//attempting to read first element of first Node of Stack
	std::cout << stack1.top() << std::endl;
	std::cout << std::endl;

	//pushing to top of stack
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	std::cout << std::endl;

	std::cout << stack1.top() << std::endl;

	stack1.pop();
	std::cout << std::endl;

	std::cout << stack1.top() << std::endl;

}