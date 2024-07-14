#include<iostream>
#include<climits>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node() {
        data = 0;
        next = NULL;
    }
    Node(int n) {
        data = n;
        next = NULL;
    }
};

class LinkedList {
    Node* head;
    int index;
public:
    LinkedList() {
        head = NULL;
        index = 0;
    }

    void Add(int n) {
        Node* nn = new Node(n);
        if (head == NULL) {
            head = nn;
        } else {
            Node* t = head;
            while (t->next != NULL) {
                t = t->next;
            }
            t->next = nn;
        }
        index++;
    }

    void print() {
        Node* t = head;
        while (t != NULL) {
            cout << t->data << " ";
            t = t->next;
        }
        cout << endl;
    }

    bool IsEmpty() {
        return head == NULL;
    }

    void push() {
        if (!IsEmpty()) {
            Node* t = head;
            head = head->next;
            delete t;
            index--;
        }
    }

    int Peek() {
        if (!IsEmpty()) {
            return head->data;
        }
        return -1;
    }

    int getSize() {
        return index;
    }

    int sum() {
        int sum = 0;
        Node* t = head;
        while (t != NULL) {
            sum += t->data;
            t = t->next;
        }
        return sum;
    }

    float average() {
        return index > 0 ? (float)sum() / index : 0;
    }

    int max() {
        if (IsEmpty()) return INT_MIN;
        int max = INT_MIN;
        Node* t = head;
        while (t != NULL) {
            if (t->data > max) {
                max = t->data;
            }
            t = t->next;
        }
        return max;
    }

    int min() {
        if (IsEmpty()) 
        return INT_MAX;
        int min = INT_MAX;
        Node* t = head;
        while (t != NULL) {
            if (t->data < min) {
                min = t->data;
            }
            t = t->next;
        }
        return min;
    }

    void clear() {
        while (!IsEmpty()) {
            push();
        }
    }

    bool isFull() {
        return false; // Since this is a linked list, it can never be full
    }

    bool search(int element) {
        Node* t = head;
        while (t != NULL) {
            if (t->data == element) {
                return true;
            }
            t = t->next;
        }
        return false;
    }
};

int main() {
    LinkedList l1;
    int choice, element;

    while (true) {
        cout << "Linked List Menu:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Remove" << endl;
        cout << "3. Display" << endl;
        cout << "4. Search" << endl;
        cout << "5. Size" << endl;
        cout << "6. Capacity" << endl;
        cout << "7. Sum" << endl;
        cout << "8. Average" << endl;
        cout << "9. Max" << endl;
        cout << "10. Min" << endl;
        cout << "11. Clear" << endl;
        cout << "12. Is Empty" << endl;
        cout << "13. Is Full" << endl;
        cout << "14. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to enqueue: ";
                cin >> element;
                l1.Add(element);
                break;
            case 2:
                l1.push();
                break;
            case 3:
                cout << "Elements in queue: ";
                l1.print();
                break;
            case 4:
                cout << "Enter element to search: ";
                cin >> element;
                if (l1.search(element)) {
                    cout << "Element found" << endl;
                } else {
                    cout << "Element not found" << endl;
                }
                break;
            case 5:
                cout << "Size: " << l1.getSize() << endl;
                break;
            case 6:
                cout << "Capacity: Infinite" << endl;
                break;
            case 7:
                cout << "Sum: " << l1.sum() << endl;
                break;
            case 8:
                cout << "Average: " << l1.average() << endl;
                break;
            case 9:
                cout << "Max: " << l1.max() << endl;
                break;
            case 10:
                cout << "Min: " << l1.min() << endl;
                break;
            case 11:
                l1.clear();
                cout << "Queue cleared" << endl;
                break;
            case 12:
                if (l1.IsEmpty()) {
                    cout << "Queue is empty" << endl;
                } else {
                    cout << "Queue is not empty" << endl;
                }
                break;
            case 13:
                if (l1.isFull()) {
                    cout << "Queue is full" << endl;
                } else {
                    cout << "Queue is not full" << endl;
                }
                break;
            case 14:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }
}