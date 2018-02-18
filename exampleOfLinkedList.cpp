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
    
    cout << endl;
    cout << "Add two list" << endl;
    LinkedListImplementation first(1);
    first.AddNode(3);
    first.AddNode(8);
    first.AddNode(6);
    LinkedListImplementation second(2);
    second.AddNode(4);
    second.AddNode(5);
    LinkedListImplementation c(5);
    c = first + second;
    
    c.printList();
    
    cout << endl;
    cout << "multiply two list" << endl;
    c = first * second;
    c.printList();
    
    cout << endl;
    cout << "Override << operator" << endl;
    LinkedListImplementation d(56);
    d.AddNode(45);
    d.AddNode(34);
    d.AddNode(67);
    cout << d << endl;
    
    
    
    
    return 0;
}

void shallowOrDeep(LinkedListImplementation list)
{
    list.AddNode(4);
    list.printList();
    
}
