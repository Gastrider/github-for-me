int main() {
    int x = 42;
    const int cx = 13;

    int* ptr = &x;  // ������� ���������

    const int* cptr = &x;  // OK: ����� *cptr ������ ����� �������� x
    cptr = &cx;  // OK

    int* const ptrc = &x;  // OK: *ptrc ����� ������, �� ��� ptrc ������ ������

    const int* const cptrc = &x;  // OK, ��� &cx ���� �� ���������
}
