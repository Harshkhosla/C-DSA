#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    // this can be used if i am not defining the node above

    // Node(int val){
    //     data =val;
    //     next =nullptr;
    // }
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
        // this can be used if i am defining the node above
        //  Node* newNode = new Node(value);

        Node *newNode = new Node;
        // newNode->next=head;
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr)
        {
            head = newNode;
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
    }
};

// Node* insert(Node* head, int value) {
//     Node* newNode = new Node;
//     newNode->data = value;
//     newNode->next = nullptr;

//     if (head == nullptr) {
//         head = newNode;
//     } else {
//         Node* current = head;
//         while (current->next != nullptr) {
//             current = current->next;
//         }
//         current->next = newNode;
//     }

//     return head;
// }

// void display(Node* head) {
//     Node* current = head;
//     while (current != nullptr) {
//         cout << current->data << " ";
//         current = current->next;
//     }
//     cout << endl;
// }

int main()
{

    Linklist l1;
    l1.insert(2);
    l1.display();

    // Node* head = nullptr;
    // head = insert(head, 1);
    // head = insert(head, 2);
    // head = insert(head, 3);
    // head = insert(head, 4);

    // display(head);

    return 0;
}
