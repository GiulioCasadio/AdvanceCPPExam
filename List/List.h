#pragma once

#include <iostream>

template<typename T>
class Node {
public:
	T value;
    Node* next;
    Node() : next(nullptr) {}
    Node(T val, Node* p = nullptr) : value(val), next(p) {}
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

        list_iterator(Node<T>* p = nullptr) : ptr(p) {}


        //Overload + +, --, *, - > and other basic operations
               //Return reference, convenient to modify the object through * it
        T& operator*() const {
            return ptr->value;
        }
        
        Node<T>* operator->() const {
            return ptr;
        }
        /*
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
        */
    };
public:
        typedef list_iterator iterator; 

        SList() {
            firstPos = nullptr;
            dim = 0;
        }

        // crea un lista di n elementi nulli
        SList(int n) {
            while (n) {
                push_front(nullptr);
                n--;
            }
        }

        // crea un lista di n elementi nulli
        SList(int n, T value) {
            while (n) {
                push_front(value);
                n--;
            }
        }

        //Insert elements from the end of the list
        void push_front(const T& value) {
            if (firstPos == nullptr) {
                firstPos = new Node<T>(value);
                firstPos->next = nullptr;
            }
            else {
                firstPos = new Node<T>(value);
                firstPos->next = firstPos;
            }
            dim++;
        }

        void pop_front() {
            if (!empty()) {
               if (size() > 1) {
                    auto aux = firstPos->next;
                    delete firstPos;
                    firstPos = aux;
               }
               else {
                   delete firstPos;
                   firstPos->value = NULL;
                   firstPos->next = nullptr;
               }
                dim--;
            }
        }

        int size() { return dim; }

        bool empty() {
            if (dim <= 0) {
                return true;
            }
            return false;
        }

        iterator front() const {
            return list_iterator(firstPos);
        }

        void clear() {
            auto tempNode = firstPos->next;
            delete firstPos;
            //firstPos = tempNode;
        }

        //How to operate iterators
       //Return to the head pointer of the list
        /*iterator begin() const {
            return list_iterator(head);
        }

        //Return to the end pointer of the list
        iterator end() const {
            return list_iterator(tail->next);
        }*/

   
};
