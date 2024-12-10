/******************************
Date: 10.Dec.2024
Author: Harish Natarajan Ravi
Email: harrish.nr@gmail.com
******************************/

#include <iostream>
#include <memory>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

// Node 
struct Node {
    int data;
    shared_ptr<Node> nxt;

    Node(int value) : data(value), nxt(nullptr) {}
};

//Append function

void appendNode(shared_ptr<Node>& head, int value) {
    if (!head) {
        head = std::make_shared<Node>(value);
        return;
    }
    auto temp = head;
    while (temp->nxt) {
        temp = temp->nxt;
    }
    temp->nxt = make_shared<Node>(value);
}

// Binary to Decimal conversion
int binaryToDecimal(const shared_ptr<Node>& head) {
    int decimalValue = 0;
    auto temp = head;

    while (temp) {
        decimalValue = (decimalValue << 1) | temp->data;
        temp = temp->nxt;
    }

    return decimalValue;
}

// Print function
void printList(const shared_ptr<Node>& head) {
    auto temp = head;
    while (temp) {
        cout << temp->data;
        temp = temp->nxt;
    }
    cout << endl;
}

int main(void) {
    shared_ptr<Node> binaryList = nullptr;

    // binary number
    string binaryInput;
    cout << "Enter a binary number: ";
    getline(cin, binaryInput);

    // Empty input
    if (binaryInput.empty()) {
        std::cerr << "Error: Input is empty. Please provide a valid binary number." << std::endl;
        return 1;
    }

    // populate the linked list
    for (char ch : binaryInput) {
        if (ch == '0' || ch == '1') {
            appendNode(binaryList, ch - '0'); //char to integer
        } else {
            cerr << "Invalid binary number. Only 0s and 1s are allowed." << endl;
            return 1;
        }
    }

    // Print the binary number stored in the linked list
    cout << "Binary Linked List: ";
    printList(binaryList);

    int decimalValue = binaryToDecimal(binaryList);
    cout << "Decimal Value: " << decimalValue << endl;

    return 0;
}