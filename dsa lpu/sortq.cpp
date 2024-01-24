#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
};

Node* head = NULL;

void insert(int data) {
  Node* new_node = new Node;
  new_node->data = data;
  new_node->next = NULL;

  if (head == NULL) {
    head = new_node;
  } else {
    Node* current = head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = new_node;
  }
}

void print() {
  Node* current = head;
  while (current != NULL) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

void sort() {
  Node* current = head;
  Node* next;

  while (current != NULL) {
    next = current->next;

    while (next != NULL) {
      if (current->data > next->data) {
        int temp = current->data;
        current->data = next->data;
        next->data = temp;
      }
      next = next->next;
    }

    current = current->next;
  }
}

int main() {
  int input;

  cout << "Enter a number (or -1 to stop): ";
  cin >> input;

  while (input != -1) {
    insert(input);

    cout << "Enter a number (or -1 to stop): ";
    cin >> input;
  }

  sort();

  print();

  return 0;
}
