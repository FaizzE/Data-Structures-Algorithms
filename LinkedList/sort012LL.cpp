#include <iostream>
using namespace std;

// Node is defined as
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

//Brute Force Solution ->
Node* segregate(Node* head) {
    Node* temp = head;
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    // Count the number of 0s, 1s, and 2s in the linked list
    while (temp != nullptr) {
        if (temp->data == 0) {
            cnt0++;
        } else if (temp->data == 1) {
            cnt1++;
        } else {
            cnt2++;
        }
        temp = temp->next;
    }

    Node* cur = head;
    // Refill the linked list with the counted values
    while (cur != nullptr) {
        if (cnt0) {
            cur->data = 0;
            cnt0--;
        } else if (cnt1) {
            cur->data = 1;
            cnt1--;
        } else {
            cur->data = 2;
            cnt2--;
        }
        cur = cur->next;
    }

    return head; 
}

// Helper functions to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function for testing
int main() {
    Node* head = new Node(1);
    head->next = new Node(0);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(0);

    cout << "Original Linked List: ";
    printList(head);

    head = segregate(head);

    cout << "Sorted Linked List: ";
    printList(head);

    return 0;
}
