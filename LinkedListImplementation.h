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
    
    int listSize;            //Keeps the size of the list
    
public:
    
    //Constructor
    LinkedListImplementation(int firstNodeValue);
    
    //Copy constructor
    LinkedListImplementation(const LinkedListImplementation& orig);
    
    //Assignment operator
    LinkedListImplementation& operator=(const LinkedListImplementation& source);
    
    
    //Addition operator
    friend LinkedListImplementation operator+(const LinkedListImplementation& lhs, const LinkedListImplementation& rhs);
    
    //Multiplication operator    
    friend LinkedListImplementation operator*(const LinkedListImplementation& lhs, const LinkedListImplementation& rhs);

    //Insertion Operator
    friend std::ostream& operator<<(std::ostream& os, const LinkedListImplementation& list);
    
    //destructor
    ~LinkedListImplementation();
    
    //Add new Node to the list
    void AddNode(int newNodeValue);
    
    //returns the amount of nodes in list
    int getSizeOfList();
    
    //prints out all the nodes
    void printList();
    
    
};

#endif
