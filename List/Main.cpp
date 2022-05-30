#pragma once

#include <iostream>
#include "List.h"
#include <assert.h>

int main()
{
	//test costruttori, empty()
	{
		SList<float> listavuota = SList<float>();
		assert(listavuota.empty());
		SList<float> listapopolata = SList<float>(3, 0.5f);
		assert(!listapopolata.empty());
	}

	// test pushfront, front, popfront, clear
	{
		SList<int> listaprova;
		listaprova.push_front(5);
		assert(!listaprova.empty());
		// TODO assert(*listaprova.front==5); // front e operator ==
		listaprova.push_front(*listaprova.front());
		assert(listaprova.size() == 2);
		listaprova.push_front(6);
		listaprova.pop_front();
		assert(listaprova.size() == 2);
	}

	// pop
	{
		SList<int> listaprova;
		listaprova.push_front(5);
		listaprova.pop_front();
		assert(listaprova.empty());
		listaprova.clear();
		assert(listaprova.empty());
		listaprova.push_front(5);
		listaprova.push_front(5);
		listaprova.pop_front();
		listaprova.pop_front();
	}
}