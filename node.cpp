
//create a class to model a node within a linked list
class node{
    
	//create private values of this class
private:
    node* nodePtr;
    int value;

public:
	//ctor
    node(int val){
        value = val;
		nodePtr = 0;
    }
	//this will point the node ptr property to the next node
    void addLink(node* n)
	{
		nodePtr = n;
	}
	//returns the value of the node
    int getValue()
	{
		return value;
	}
	//returns the node pointer
	node* getLink()
	{
		return nodePtr;
	}
};