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

	// popfront
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
		//listaprova.pop_front(); // TODO perdo il riferimento e da errore. indagare
	}

	// test assegnamento
	{
		SList<int> lista1 = SList<int>(2, 3);
		SList<int> lista2;

		lista2 = lista1;

		assert(!lista2.empty());
	}

	// test operatore == e operatore !=
	{
		SList<int> lista1 = SList<int>(2, 3);
		SList<int> lista2 = SList<int>(2, 6);

		assert(lista1 != lista2);
		assert(!(lista1 == lista2));
	}
}