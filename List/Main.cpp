#pragma once

#include <iostream>
#include "List.h"

int main()
{
	SList<int> listaprova;

	std::cout << listaprova.dim << std::endl;

	listaprova.push_front(5);

	std::cout << listaprova.dim << std::endl;
}