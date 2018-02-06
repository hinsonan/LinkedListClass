#include "LinkedListImplementation.h"

int main()
{
    LinkedListImplementation a(2);

    a.AddNode(3);

    a.printList();

    cout << a.getSizeOfList() << endl;

    return 0;
}