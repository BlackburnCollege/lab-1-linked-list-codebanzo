#include <iostream>
#include "Node.h"
#include <fstream>
#include "NodeFunctions.h"
/*
1. Initialize linked list by loading numbers.csv into linked list
open numbers.csv to read all values into linked list
loop until user exits;
2. Display Menu: Search for Value, Add Value, Delete Value, Exit
    1. Display menu
    2. Get user choice and value
    3. Execute user choice
3. Execute function from input
*/
int main()
{
    Node* head = nullptr;
    std::ifstream inputFile("numbers.csv");
    int tempVal;

    while (inputFile >> tempVal)
    {
        Node* newNode = new Node(tempVal);
        newNode->next = head;
        head = newNode;
    }
    inputFile.close();

    int choice, searchVal;
    do 
    {
        std::cout << "\n1) Search For Value\n2) Add Value\n3) Delete Value\n4) Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 1) 
        {
            std::cout << "Enter value to search: ";
            std::cin >> searchVal;
            std::cout << (searchValue(head, searchVal) ? "True\n" : "False\n");
        }
        else if (choice == 2) 
        {
            std::cout << "Enter value to add: ";
            std::cin >> searchVal;
            addValue(head, searchVal);
        }
        else if (choice == 3) 
        {
            std::cout << "Enter value to delete: ";
            std::cin >> searchVal;
            deleteValue(head, searchVal);
        }
    } while (choice != 4);
}

