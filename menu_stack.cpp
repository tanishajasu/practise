#include <iostream>
#include <climits>

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

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 99;
    }

    void print() {
        for (int i = top; i >= 0; i--) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    void search(int n) {
        bool found = false;
        for(int i = top; i >= 0; i--) {
            if(arr[i] == n) {
                std::cout << "Element found at position " << i << std::endl;
                found = true;
            }
        }
        if(!found) {
            std::cout << "Element not found in the stack" << std::endl;
        }
    }

    void size() {
        int size = top + 1;
        std::cout << "Size: " << size << std::endl;
    }

    int sum() {
        int sum = 0;
        for(int i = top; i >= 0; i--) {
            sum += arr[i];
        }
        return sum;
    }

    double average() {
        int sum = this->sum();
        int size = top + 1;
        return static_cast<double>(sum) / size;
    }

    int max() {
        int max = INT_MIN;
        for(int i = top; i >= 0; i--) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }

    int min() {
        int min = INT_MAX;
        for(int i = top; i >= 0; i--) {
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    }

    void clear() {
        top = -1;
    }

    int capacity() {
        return 100;
    }
};

int main() {
    Stack stack;
    int choice, element;

    while(true) {
        std::cout << "Stack Menu:" << std::endl;
        std::cout << "1. Push" << std::endl;
        std::cout << "2. Pop" << std::endl;
        std::cout << "3. Peek" << std::endl;
        std::cout << "4. Display" << std::endl;
        std::cout << "5. Search" << std::endl;
        std::cout << "6. Size" << std::endl;
        std::cout << "7. Capacity" << std::endl;
        std::cout << "8. Sum" << std::endl;
        std::cout << "9. Average" << std::endl;
        std::cout << "10. Max" << std::endl;
        std::cout << "11. Min" << std::endl;
        std::cout << "12. Clear" << std::endl;
        std::cout << "13. Is Empty" << std::endl;
        std::cout << "14. Is Full" << std::endl;
        std::cout << "15. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                std::cout << "Enter element to push: ";
            std::cin >> element;
            stack.push(element);
            break;
            case 2:
                std::cout << "Popped element: " << stack.pop() << std::endl;
            break;
            case 3:
                std::cout << "Top element: " << stack.peek() << std::endl;
            break;
            case 4:
                std::cout << "Elements in stack: ";
            stack.print();
            break;
            case 5:
                std::cout << "Enter element to search: ";
            std::cin >> element;
            stack.search(element);
            break;
            case 6:
                stack.size();
            break;
            case 7:
                std::cout << "Capacity: " << stack.capacity() << std::endl;
            break;
            case 8:
                std::cout << "Sum: " << stack.sum() << std::endl;
            break;
            case 9:
                std::cout << "Average: " << stack.average() << std::endl;
            break;
            case 10:
                std::cout << "Max: " << stack.max() << std::endl;
            break;
            case 11:
                std::cout << "Min: " << stack.min() << std::endl;
            break;
            case 12:
                stack.clear();
            std::cout << "Stack cleared" << std::endl;
            break;
            case 13:
                if(stack.isEmpty()) {
                    std::cout << "Stack is empty" << std::endl;
                } else {
                    std::cout << "Stack is not empty" << std::endl;
                }
            break;
            case 14:
                if(stack.isFull()) {
                    std::cout << "Stack is full" << std::endl;
                } else {
                    std::cout << "Stack is not full" << std::endl;
                }
            break;
            case 15:
                std::cout << "Exiting..." << std::endl;
            return 0;
            default:
                std::cout << "Invalid choice" << std::endl;
        }
    }

    return 0;
}