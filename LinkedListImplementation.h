#ifndef LINKED_LIST_IMPLEMENTATION
#define LINKED_LIST_IMPLEMENTATION


#include <iostream>
#include "node.cpp"


using std::cout;
using std::endl;



class LinkedListImplementation{

private:
    node* headPtr;           //creates a pointer to the head of list
    node* tailPtr;          //creates a pointer to the tail of the list
    
	int listSize;			//Keeps the size of the array

public:

    //Constructor
	LinkedListImplementation(int firstNodeValue);

	//Copy constructor
	LinkedListImplementation(const LinkedListImplementation& orig);

    //Add new Node to the list 
    void AddNode(int newNodeValue); 

    int getSizeOfList();

    void printList();


};

#endif