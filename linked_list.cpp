// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node() {
//         data = 0;
//         next = NULL;
//     }
//     Node(int n) {
//         data = n;
//         next = NULL;
//     }
// };

// class LinkedList {
//     Node* head;
//     int index;
// public:
//     LinkedList() {
//         head = NULL;
//         index = 0;
//     }
//     void Add(int n) {
//         Node* nn = new Node(n);
//         if (head == NULL) {
//             head = nn;
//         }
//         else {
//             Node *t = head;
//             while(t->next!=NULL) {
//                 t = t -> next;
//             }
//             t -> next = nn;
//         }
//         index++;
//     }
//     void print() {
//         Node* t = head;
//         while (t!= NULL) {
//             cout<<t->data<<" ";
//             t = t->next;
//         }
//         cout << endl;
//     }
//     bool IsEmpty() {
//         return head == NULL;
//     }
//     void push(){
//         if(!IsEmpty()) {
//             index--;
//         }
//     }
//     int Peek() {
//         if(!IsEmpty()) {
//             Node* t = head;
//             for(int i = 0; i < index - 1; i++) {
//                 t = t->next;
//             }
//             return t->next->data;
//         }
//         return -1;
//     }
// };

// int main() {
//     LinkedList li;
//     li.Add(10);
//     li.Add(20);
//     li.Add(30);
//     li.Add(40);
//     li.Add(50);
//     li.print();
//     li.Peek();
//     return 0;
// }


#include <iostream>
class Stack {
private:
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int element) {
        if (top < 100) {
            arr[++top] = element;
        } else {
            std::cout << "Stack overflow!" << std::endl;
        }
    }

    int pop() {
        if (top >= 0) {
            return arr[top--];
        } else {
            std::cout << "Stack underflow!" << std::endl;
            return 0;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            std::cout << "Stack is empty!" << std::endl;
            return 0;
        }
    }
    int search(int n)
    {
        for(int i=top;i>=0;i--)
        {
            if(arr[i]==n)
            {
                std::cout<<"Searched element:"<<i<<std::endl;

            }
            
        }
        
    }
    // void Menu()
    // {
    //     std::cout<<"1.New\n2.Remove\n3.Top\n4.Print\n5.Search\n6.Size\n7.Capacity\n8.Sum\n9.Avg\n10.Max\n11.Min\n12.Clear\n13.IsEmpty\n14.IsFull\n15.Exit"<<std::endl;

    // }

    bool isEmpty() {
        return top == -1;
    }

    void size()
    {
        int size=0;
        for(int i=top;i>=0;i--)
        {
            size+=1;
        }
        std::cout<<"size:"<<size<<std::endl;
    }
    void print() {
        for (int i = top; i >= 0; i--) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
    
};
int main() {
    Stack stack;
  //  stack.Menu();
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(90);
    stack.size();
    stack.search(30);
    stack.pop();
    std::cout << "Elements in stack: ";
    stack.print();

    std::cout << "Popped element: " << stack.pop() << std::endl;

    std::cout << "Top element: " << stack.peek() << std::endl;

    std::cout << "Elements in stack: ";
    stack.print();

    return 0;
}