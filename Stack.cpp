#include "Stack.h"
#include "Node.h"


/*
* push - adds element to the top of the stack(LinkedList)
* @data: this is the data to be stored in the linkedList
* Return: Returns nothing
*/
template <typename T>
void Stack<T>::push(T data) {
	Node<T>* newNode = new Node<T>(data);

	// If LinkedList is empty, head initially points to Null
	newNode->next = head;
	head = newNode;
}

/*
* pop - deletes the Node at the top of Stack
* Return: Returns nothing
*/
template <typename T>
void Stack<T>::pop() {
	// If there's atleast 1 element in the stack(LinkedList)
	if (head) {
		// holds a copy of head
		Node<T>* tempHead = head;
		head = head->next;
		// free memory
		delete tempHead;
	}
	else {
		std::cout << "Stack Empty, Nothing to Delete..." << std::endl;
	}
}


/*
* top - Displays the element of Node at the top of the stack
* Return: Returns nothing
*/
template <typename T>
T Stack<T>::top() {
	// Check if LinkedList is not empty
	if (head) {
		return head->data;
	}
	else {
		std::cout << "Stack is empty. Nothing to pop" << std::endl;
	}
}