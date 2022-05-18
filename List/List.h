#pragma once

#include <iostream>

template<class T>
class SList
{
protected:
	unsigned int dim;
	Node* firstPos;

public:

private:
	struct Node {
		T value;
		Node* nextNode;
	};
};

