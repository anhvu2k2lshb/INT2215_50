#include <iostream>

using namespace std;

class Box {
private:
    int l, b, h;

public:
    Box();
    Box(int length, int breadth, int height);
    Box(const Box& B);

    int getLength();
    int getBreadth();
    int getHeight();
    long long CalculateVolume();

    bool operator<(Box& b);
    friend ostream& operator<<(ostream& out, Box& B);
};

Box::Box() : l(0), b(0), h(0) {}

Box::Box(int length, int breadth, int height) : l(length), b(breadth), h(height) {}

Box::Box(const Box& B) : l(B.l), b(B.b), h(B.h) {}

int Box::getLength() { return l; }

int Box::getBreadth() { return b; }

int Box::getHeight() { return h; }

long long Box::CalculateVolume() { return (long long)l * b * h; }

bool Box::operator<(Box& B) {
    if (l < B.l || (b < B.b && l == B.l) || (h < B.h && b == B.b && l == B.l)) {
        return true;
    } else {
        return false;
    }
}

ostream& operator<<(ostream& out, Box& B) {
    out << B.l << " " << B.b << " " << B.h;
    return out;
}