#pragma once

#include <iostream>
#include "List.h"
#include <assert.h>

int main()
{
	//test costruttore, empty()
	{
		SList<float> listaprova = SList<float>();
		if (listaprova.empty()) { 
			assert(!listaprova.empty());
		}
	}

	// test pushfront, front
	{
		SList<int> listaprova;
		listaprova.push_front(5);
		assert(!listaprova.empty());
		// TODO assert(*listaprova.front==5); // front e operator ==
		listaprova.push_front(*listaprova.front());
		assert(listaprova.size()==3);
	}

}