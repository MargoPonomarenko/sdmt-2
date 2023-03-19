#include <iostream>
using namespace std;

class LinkedList
{
    char *arr;
    int capacity;
    int current;

public:
    LinkedList()
    {
        arr = new char[1];
        capacity = 1;
        current = 0;
    }

    ~LinkedList()
    {
        delete[] arr;
    }

    int length() { return current; }

    void append(char data)
    {

        if (current == capacity)
        {
            char *temp = new char[2 * capacity];

            for (int i = 0; i < capacity; i++)
            {
                temp[i] = arr[i];
            }

            delete[] arr;
            capacity *= 2;
            arr = temp;
        }

        arr[current] = data;
        current++;
    }

    char deleteChar(int index)
    {
        if (index >= current || index < 0)
        {
            throw std::out_of_range{"Index out of range"};
        }
        char removedElement = arr[index];
        for (int i = index + 1; i < current; ++i)
        {
            arr[i - 1] = arr[i];
        }
        --current;
        return removedElement;
    }

    void deleteAll(char data)
    {
        int write_index = 0;
        for (int i = 0; i < current; ++i)
        {
            if (arr[i] != data)
            {
                arr[write_index++] = arr[i];
            }
        }
        current = write_index;
    }

    void insert(char data, int index)
    {
        if (index >= current || index < 0)
        {
            throw std::out_of_range{"Index out of range"};
        }
        if (index == capacity)
            append(data);
        else
            arr[index] = data;
    }

    char get(int index)
    {
        if (index >= current || index < 0)
        {
            throw std::out_of_range{"Index out of range"};
        }
        else
        {
            return arr[index];
        }
    }

    LinkedList clone() const
    {
        LinkedList newVector;
        for (int i = 0; i < current; ++i)
        {
            newVector.append(arr[i]);
        }
        return newVector;
    }

    void reverse()
    {
        for (int i = 0; i < current / 2; ++i)
        {
            char temp = arr[i];
            arr[i] = arr[current - i - 1];
            arr[current - i - 1] = temp;
        }
    }

    int findFirst(char item) const
    {
        for (int i = 0; i < current; ++i)
        {
            if (arr[i] == item)
            {
                return i;
            }
        }
        return -1;
    }

    int findLast(char item) const
    {
        for (int i = current - 1; i >= 0; --i)
        {
            if (arr[i] == item)
            {
                return i;
            }
        }
        return -1;
    }

    void clear()
    {
        current = 0;
    }

    void extend(const LinkedList &other)
    {
        for (int i = 0; i < other.current; ++i)
        {
            append(other.arr[i]);
        }
    }

    // function to print array elements
    void print()
    {
        for (int i = 0; i < current; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
