#include "List.h"

template<class T>
inline void SList<T>::push_front(const T& val)
{
	// see doc in https://m.cplusplus.com/reference/forward_list/forward_list/insert_after/
	insert_after(firstPos, val);
}