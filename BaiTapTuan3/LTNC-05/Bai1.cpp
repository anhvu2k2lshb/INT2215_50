void update(int* a, int* b) {
    int sum = *a + *b;        // Tính tổng của hai số
    int abs_diff = abs(*a - *b); // Tính trị tuyệt đối hiệu của hai số

    *a = sum;                // Gán tổng vào biến a thông qua con trỏ
    *b = abs_diff;           // Gán trị tuyệt đối hiệu vào biến b thông qua con trỏ
}