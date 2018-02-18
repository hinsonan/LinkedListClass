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
   
    headPtr = nullptr;
    tailPtr = nullptr;
    //point new head pointer to the original one
    headPtr = new node(orig.headPtr->getValue());
    
    tailPtr = headPtr;
    
    //make a iterator node pointer to point and run through all the nodes in original list
    node* iterator = orig.headPtr;
    //this moves the iterator to the next node so it wont copy the first node twice
    iterator = iterator->getLink();
    
    
    while(iterator != nullptr)
    {
        
        //take the original node and copy it to a new node
        node* temp = new node(iterator->getValue());
        tailPtr->addLink(temp);
        tailPtr = tailPtr->getLink();
        //moves the iterator to point to next node
        iterator = iterator->getLink();
        
    }
    
}

//Assignment operator
LinkedListImplementation& LinkedListImplementation::operator=(const LinkedListImplementation& source)
{
    if (this == &source){
        return *this;
    }
    
    this->headPtr = nullptr;
    this->tailPtr = nullptr;
    //point new head pointer to the original one
    this->headPtr = new node(source.headPtr->getValue());
    
    this->tailPtr = this->headPtr;
    
    //make a iterator node pointer to point and run through all the nodes in original list
    node* iterator = source.headPtr;
    //this moves the iterator to the next node so it wont copy the first node twice
    iterator = iterator->getLink();
    
    
    while(iterator != nullptr)
    {
        
        //take the original node and copy it to a new node
        node* temp = new node(iterator->getValue());
        this->tailPtr->addLink(temp);
        this->tailPtr = tailPtr->getLink();
        //moves the iterator to point to next node
        iterator = iterator->getLink();
        
    }
    
    return *this;
    
}



//Addition operator
LinkedListImplementation operator+(const LinkedListImplementation& lhs, const LinkedListImplementation& rhs)
{
    //use this node pointer to point to the list
    node* defaultList = lhs.headPtr;
    //make a iterator node pointer to point and run through all the nodes in original list
    node* sourceList = rhs.headPtr;
    
    
    //make a new list with the first nodes added
    //take the original node and copy it to a new node
    node* addedNode = new node(sourceList->getValue() + defaultList->getValue());
    LinkedListImplementation addedList(addedNode->getValue());
    
    //this moves the iterator to the next node so it wont copy the first node twice
    sourceList = sourceList->getLink();
    defaultList = defaultList->getLink();
    
    
    while(sourceList != nullptr || defaultList != nullptr)
    {
        if (sourceList == nullptr)
        {
            node* addedNode = new node(0 + defaultList->getValue());
            //take this new node addedNode and add the value to the new list
            addedList.AddNode(addedNode->getValue());
        }
        else if (defaultList == nullptr)
        {
            node* addedNode = new node(sourceList->getValue() + 0);
            //take this new node addedNode and add the value to the new list
            addedList.AddNode(addedNode->getValue());
        }
        else
        {
            //take the original node and copy it to a new node
            node* addedNode = new node(sourceList->getValue() + defaultList->getValue());
            //take this new node addedNode and add the value to the new list
            addedList.AddNode(addedNode->getValue());
        }
        
        if (sourceList == nullptr)
        {
            defaultList = defaultList->getLink();
        }
        else if(defaultList == nullptr)
        {
            sourceList = sourceList->getLink();
        }
        else{
            //moves both list to point to next node
            sourceList = sourceList->getLink();
            defaultList = defaultList->getLink();
        }
        
    }
    
    
    
    return addedList;
    
}

//Multiplication operator
LinkedListImplementation operator*(const LinkedListImplementation& lhs, const LinkedListImplementation& rhs)
{
    
    //use this node pointer to point to the list
    node* defaultList = lhs.headPtr;
    //make a iterator node pointer to point and run through all the nodes in original list
    node* sourceList = rhs.headPtr;
    
    
    //make a new list with the first nodes added
    //take the original node and copy it to a new node
    node* productNode = new node(sourceList->getValue() * defaultList->getValue());
    LinkedListImplementation productList(productNode->getValue());
    
    //this moves the iterator to the next node so it wont copy the first node twice
    sourceList = sourceList->getLink();
    defaultList = defaultList->getLink();
    
    
    while(sourceList != nullptr || defaultList != nullptr)
    {
        if (sourceList == nullptr)
        {
            productNode = new node(1 * defaultList->getValue());
            //take this new node addedNode and add the value to the new list
            productList.AddNode(productNode->getValue());
        }
        else if (defaultList == nullptr)
        {
            productNode = new node(sourceList->getValue() * 1);
            //take this new node addedNode and add the value to the new list
            productList.AddNode(productNode->getValue());
        }
        else
        {
            //take the original node and copy it to a new node
            productNode = new node(sourceList->getValue() * defaultList->getValue());
            //take this new node addedNode and add the value to the new list
            productList.AddNode(productNode->getValue());
        }
        
        if (sourceList == nullptr)
        {
            defaultList = defaultList->getLink();
        }
        else if(defaultList == nullptr)
        {
            sourceList = sourceList->getLink();
        }
        else{
            //moves both list to point to next node
            sourceList = sourceList->getLink();
            defaultList = defaultList->getLink();
        }
        
    }
    
    
    return productList;
}

//Insertion Operator
std::ostream& operator<<(std::ostream& os, const LinkedListImplementation& list)
{
    //this is vary similar to the above method
    node* iterator = list.headPtr;
    //count to be used to seperate the lines for every 10 node values
    int count = 0;
    //iterates through if the list isnt at the end and gets the value of the nodes
    while(iterator != nullptr)
    {
        if(count == 10)
        {
            os << endl;
            count = 0;
        }
        
        os << iterator->getValue() << " ";
        iterator = iterator->getLink();
        count++;
        
    }
    return os;
}

LinkedListImplementation::~LinkedListImplementation()
{
    
    node* current = headPtr;
    while( current != nullptr ) {
        node* next = current->getLink();
        delete current;
        current = next;
    }
    headPtr = nullptr;
    
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
        iterator = iterator->getLink();
        listSize++;
        
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
        cout << iterator->getValue() << endl;
        iterator = iterator->getLink();
        
    }
     
}
