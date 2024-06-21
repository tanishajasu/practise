#include <iostream>
#include <cstring>
using namespace std;

class Node {
public:
    int id;
    char name[50];
    int emptype;
    int basicsal;
    int da;
    int hra;
    int totalsal;
    Node* left;
    Node* right;
};

class Employee {
public:
    Node *root;
    Employee() {
        root = NULL;}
    Node * newNode(int id1, char name1[50], int emptype1, int basicsal1) {
        Node * emp = new Node;
        emp -> id = id1;
        strcpy(emp -> name, name1);
        emp -> emptype = emptype1;
        emp -> basicsal = basicsal1;
        if(emptype1 == 1){
            emp -> da = basicsal1 * 0.5;
            emp -> hra = basicsal1 * 0.2;
        } else {
            emp -> da = basicsal1 * 0.3;
            emp -> hra = basicsal1 * 0.1;
        }
        emp -> totalsal = basicsal1 + emp -> da + emp -> hra;
        emp -> right = NULL;
        emp -> left = NULL;
        return emp;
    }

    void preOrder(Node *node) {
        if (node == NULL) return;
        cout << "ID: " << node->id << ", Name: " << node->name << ", Employee Type: " << node->emptype << ", Basic Salary: " << node->basicsal << ", DA: " << node->da << ", HRA: " << node->hra << ", Total Salary: " << node->totalsal << endl;
        preOrder(node->left);
        preOrder(node->right);
    }

    void inOrder(Node *node) {
        if (node == NULL) return;
        inOrder(node->left);
        cout << "ID: " << node->id << ", Name: " << node->name << ", Employee Type: " << node->emptype << ", Basic Salary: " << node->basicsal << ", DA: " << node->da << ", HRA: " << node->hra << ", Total Salary: " << node->totalsal << endl;
        inOrder(node->right);
    }

    void postOrder(Node *node) {
        if (node == NULL) return;
        postOrder(node->left);
        postOrder(node->right);
        cout << "ID: " << node->id << ", Name: " << node->name << ", Employee Type: " << node->emptype << ", Basic Salary: " << node->basicsal << ", DA: " << node->da << ", HRA: " << node->hra << ", Total Salary: " << node->totalsal << endl;
    }
};

int main() 
{
    Employee emp;
    emp.root = emp.newNode(1, "John Doe", 1, 50000);
    emp.root->left = emp.newNode(2, "Jane Doe", 2, 40000);
    emp.root->right = emp.newNode(3, "Bob Smith", 3, 60000);

    cout << "Pre-order traversal:" << endl;
    emp.preOrder(emp.root);
    cout << endl;

    cout << "In-order traversal:" << endl;
    emp.inOrder(emp.root);
    cout << endl;

    cout << "Post-order traversal:" << endl;
    emp.postOrder(emp.root);
    cout << endl;

    return 0;
}