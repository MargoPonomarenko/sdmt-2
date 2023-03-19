#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main()
{
    LinkedList firstList;
    firstList.append('2');
    firstList.append('5');
    firstList.append('a');
    firstList.append('f');
    firstList.append('e');
    firstList.append('a');

    cout << "First list length: " << firstList.length() << endl;
    cout << "First list elements: ", firstList.print();

    LinkedList secondList;
    cout << "Second list length: " << secondList.length() << endl;

    firstList.insert('e', 3);
    cout << "\nFirst list after insert(): ", firstList.print();

    cout << "Deleted character: " << firstList.deleteChar(0);
    cout << "\nFirst list after delete(): ", firstList.print();
    firstList.deleteAll('e');
    cout << "First list after deleteAll(): ", firstList.print();

    cout << "\nCharacter at given position: " << firstList.get(1);

    LinkedList clonedList = firstList.clone();
    cout << "\nCloned list: ", clonedList.print();

    firstList.reverse();
    cout << "First list after reverse(): ", firstList.print();

    cout << "\nPosition of first search character is: " << firstList.findFirst('a');
    cout << "\nPosition of last search character is: " << firstList.findLast('a');

    firstList.clear();
    cout << "\nFirst list after clear(): ", firstList.print();

    secondList.append('5');
    secondList.append('0');
    secondList.append('m');
    secondList.append('a');

    firstList.extend(secondList);
    cout << "\nFirst list after extend(): ", firstList.print();
}
