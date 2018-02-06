
//create a class to model a node within a linked list
class node{
    
private:
    node* nodePtr;
    int value;

public:
    node(int val){
        value = val;
		nodePtr = 0;
    }

    void addLink(node* n)
	{
		nodePtr = n;
	}

    int getValue()
	{
		return value;
	}

	node* getLink()
	{
		return nodePtr;
	}
};