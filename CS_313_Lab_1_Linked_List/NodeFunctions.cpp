#include "Node.h"
/*Delete:
1. Check if head nodes match target value; If matches, move to next
2. Check rest of list with pointer
3.If next node matches target value, skip by linking current node to next node
*/
bool searchValue(Node* head, int target) 
{
    while (head) 
    {
        if (head->value == target) return true;
        head = head->next;
    }
    return false;
}
void addValue(Node*& head, int newVal) 
{
    Node* newNode = new Node(newVal);
    newNode-> next = head;
    head = newNode;
}
void deleteValue(Node*& head, int target)
{
    while (head && head->value == target) 
    {
        Node* temp = head;
        head = head-> next;
        delete temp;
    }
    Node* current = head;
    while (current && current->next) 
    {
        if (current->next->value == target) 
        {
            Node* temp = current-> next;
            current-> next = current->next-> next;
            delete temp;
        }
        else 
        {
            current = current->next;
        }
    }
}

