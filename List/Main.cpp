#pragma once

#include <iostream>
#include "List.h"

int main()
{
	SList<int> listaprova;

	listaprova.push_front(1);

    std::cout << listaprova.dim;
}