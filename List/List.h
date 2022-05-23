#pragma once

#include <iostream>

template<class T>
class SList
{
private:
	struct Node {
		T value;
		Node* nextNode;
	};

protected:
	Node* firstPos = nullptr;

public:
	Slist<class T>() {};

	int dim=0;


};

