#include "LinkedListImplementation.h"

void shallowOrDeep(LinkedListImplementation list);

int main()
{
    LinkedListImplementation a(2);
    
    a.AddNode(3);
    
    cout << "print list A" << endl;
   
    a.printList();
    
    LinkedListImplementation b(5);
    
    b.AddNode(6);
    
     cout << endl;
     cout << "print list B" << endl;
    b.printList();
    
    cout << "print list B after assignment operator" << endl;
    b = a;
    b.printList();
    
     cout << endl;
    cout << "deep copy" << endl;
    shallowOrDeep(a);
    cout << "end of deep copy list" << endl;
    
     cout << endl;
    cout << "reprint list A" << endl;

    a.printList();
    //cout << a.getSizeOfList() << endl;
    
    
    return 0;
}

void shallowOrDeep(LinkedListImplementation list)
{
    list.AddNode(4);
    list.printList();
    
}
