// Sử dụng vong lặp
// Khai báo cấu trúc Node cho danh sách liên kết
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Hàm in ra tất cả các phần tử của danh sách liên kết bằng vòng lặp
void printLinkedListLoop(Node* head) {
    Node* current = head;  // Con trỏ current để duyệt qua danh sách

    while (current != nullptr) {
        cout << current->data << " ";  // In giá trị của node hiện tại
        current = current->next;  // Di chuyển đến node kế tiếp
    }

    cout << endl;  // Xuống dòng sau khi in xong danh sách
}

// Sử dụng đệ qui
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Hàm đệ qui in ra các phần tử của danh sách liên kết
void printLinkedListRecursive(Node* current) {
    if (current == nullptr) {
        cout << endl;  // Xuống dòng khi kết thúc đệ qui
        return;
    }

    cout << current->data << " ";  // In giá trị của node hiện tại
    printLinkedListRecursive(current->next);  // Gọi đệ qui với node kế tiếp
}