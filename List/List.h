#pragma once

#include <iostream>

template<typename T>
class Node {
public:
	T value;
    Node* next;
    Node() : next(nullptr) {}
    Node(T val, node* p = nullptr) : value(val), next(p) {}
};

template<class T>
class SList
{
protected:
    Node<T>* firstPos = nullptr;
    int dim = 0;


private:
	class list_iterator {
	private:
        Node<T>* ptr; //Pointer to an element in the list container
	public:

		list_iterator(node<T>* p = nullptr) : ptr(p) {}


		//Overload + +, --, *, - > and other basic operations
			   //Return reference, convenient to modify the object through * it
		T& operator*() const {
			return ptr->value;
		}

		node<T>* operator->() const {
			return ptr;
		}

		list_iterator& operator++() {
			ptr = ptr->next;
			return *this;
		}

        list_iterator operator++(int) {
            node<T>* tmp = ptr;
            // This is a constant pointer to the list iterator, so * this is the list iterator object, and the preceding + + has been overloaded
            ++(*this);
            return list_iterator(tmp);
        }

        bool operator==(const list_iterator& t) const {
            return t.ptr == this->ptr;
        }

        bool operator!=(const list_iterator& t) const {
            return t.ptr != this->ptr;
        }

        typedef list_iterator iterator; //Type alias
        my_list() {
            firstPos = nullptr;
            dim = 0;
        }

        //Insert elements from the end of the list
        /*void push_back(const T& value) {
            if (head == nullptr) {
                head = new node<T>(value);
                tail = head;
            }
            else {
                tail->next = new node<T>(value);
                tail = tail->next;
            }
            size++;
        }*/

        //Print linked list elements
        /*void print(std::ostream& os = std::cout) const {
            for (node<T>* ptr = head; ptr != tail->next; ptr = ptr->next)
                os << ptr->value << std::endl;
        }*/

        //How to operate iterators
       //Return to the head pointer of the list
        /*iterator begin() const {
            return list_iterator(head);
        }

        //Return to the end pointer of the list
        iterator end() const {
            return list_iterator(tail->next);
        }*/

        //Other member functions insert / erase / replace
    }
};

