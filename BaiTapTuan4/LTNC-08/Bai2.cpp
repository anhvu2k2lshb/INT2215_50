// Sử dụng vòng lặp
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* insertTailLoop(Node* head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        return newNode;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    
    current->next = newNode;
    return head;
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Sử dụng đệ qui
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* insertTailRecursive(Node* head, int value) {
    if (head == nullptr) {
        return new Node(value);
    }

    head->next = insertTailRecursive(head->next, value);
    return head;
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
