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

int LinkedListImplementation::getSizeOfList()
{
    //set list size to 0
    listSize = 0;
    //make a iterator node pointer to point and run through all the nodes that are in the linked list
    node* iterator = headPtr;
    //check if the pointer is null; this checks to see if there is another node linked
	while(iterator != nullptr)
	{
		//moves the iterator to point to next node
		iterator = iterator->node::getLink();
        count++;

	}
    //returns the size of list as an int
    return listSize;
}

void LinkedListImplementation::printList()
{
    //this is vary similar to the above method
    node* iterator = headPtr;
    //iterates through if the list isnt at the end and gets the value of the nodes
	while(iterator != nullptr)
	{
		cout << iterator->node::getValue() << endl;
		iterator = iterator->node::getLink();

	}
}