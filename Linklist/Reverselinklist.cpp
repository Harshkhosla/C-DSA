#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Linklist
{
private:
    Node *head;

public:
    Linklist()
    {
        head = nullptr;
    }

    void insert(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr)
        {
            head = newNode;
            // head->next=newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    };

    void reverseLinkedList(){
        Node *previous = nullptr;
        Node *current = head;
        Node *next = nullptr;
      while (current != nullptr) {
        
        
        
         next = current->next;
            current->next = previous;
            previous = current;
            current=next; 
            
            
            
            
            }
        head = previous;
    }
};

int main()
{

    Linklist sll;

    sll.insert(4);
    sll.insert(2);
    sll.insert(3);
    sll.insert(5);
    sll.insert(8);

    sll.reverseLinkedList();
    sll.display();
}