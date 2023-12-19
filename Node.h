#pragma once
#include <iostream>

/*
* Node - Defines what each Node of the LinkedList should look like.
* Class Properties:
*	fullName: full name of user. Should be a string
*	age: age of user. should be an int
*	next: points to the address of where the next Node is being saved
*/
template <typename T>
class Node
{
public:
	T data;
	Node* next;

	//constructor of the class
	Node(T data) : data(data), next(nullptr){}
};

