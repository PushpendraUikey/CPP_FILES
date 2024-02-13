#include <iostream>
using namespace std;

#define PUSH_BACK 1
#define PUSH_FRONT 2
#define DELETE 3
#define DISPLAY 4
#define EXIT 5

class Node {
public:
    int data;
    Node* next, *prev;
};

class CircularLinkedList {
private:
    Node* head, *tail;

public:
    CircularLinkedList() {
        head = nullptr;
        tail = head;
    }

    void push_back(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        if (head == nullptr) {
            head = newNode;
            tail = newNode; 
            newNode->next = head;
            newNode->prev = head;
        } else {
            tail = newNode;
            head->prev = newNode;
            tail->next = newNode;
            newNode->prev = tail;
            newNode->next = head;
        }
    }

    void push_front(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        if (head == nullptr) {
            head = newNode;
            tail = head;
            newNode->next = head;
            newNode->prev = tail;
        } else {
            head = newNode;
            head->prev = newNode;
            tail->next = newNode;
            newNode->next = head;
            newNode->prev = tail;
        }
    }

    void display() {
        Node* temp = head;
        while (temp->next != tail) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }

    void deleteNode(int data) {
        Node* temp = head;
        if (head==tail) {
            if (head->data==data) {
                delete head;
                head=nullptr;
                tail=nullptr;
            }
            return;
        }
        else {
            while (temp != tail) {
                if (temp->data == data) {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                    if (temp == head) {
                        head = temp->next;
                    }
                    delete temp;
                    return;
                }
                temp = temp->next;  
            }
            if (temp->data == data) {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                tail = temp->prev;
                delete temp;
                return;
            }
        }
    }
};

int main() {
    CircularLinkedList list;
    int choice, data;
    while (1) {
        cin >> choice;
        switch (choice) {
            case PUSH_FRONT:
                cin >> data;
                list.push_front(data);
                break;
            case PUSH_BACK:
                cin >> data;
                list.push_back(data);
                break;
            case DELETE:
                cin >> data;
                list.deleteNode(data);
                break;
            case DISPLAY:
                list.display();
                break;
            case EXIT:
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
    return 0;
}