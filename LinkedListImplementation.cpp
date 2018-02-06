#include "LinkedListImplementation.h"

//this file will put in the implementation of the header file

//Constructor
LinkedListImplementation::LinkedListImplementation(int nodeValue)
{
    //set the pointers to null
    headPtr = nullptr;
    tailPtr = nullptr;

    //take the users first node value and create a new node
    //set the head pointer to point to this first node
    headPtr = new node(nodeValue);

    //now since this is the only item in the list at the initiation of this object set tail pointer to head
    tailPtr = headPtr;

}

//Copy constructor
LinkedListImplementation::LinkedListImplementation(const LinkedListImplementation& orig) 
{

}

//Add new Node to the list 
void LinkedListImplementation::AddNode(int newNodeValue)
{
    //create the temp node to be used to add to the end of the list
    
	
	//Add node
	node* temp = new node(newNodeValue);
	tailPtr->addLink(temp);
	tailPtr = tailPtr->getLink();
           

}

void LinkedListImplementation::printList()
{
    node* iterator = headPtr;
	while(iterator != nullptr)
	{
		cout << iterator->node::getValue() << endl;
		iterator = iterator->node::getLink();

	}
}