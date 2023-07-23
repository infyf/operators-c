#include <iostream>
using namespace std;

class Number {
private:
    int x;
    int y;

public:
    Number(int x, int y) : x(x), y(y) {}

    Number& operator=(const Number& number) {
        if (this == &number)
            return *this;
        this->x = number.x;
        this->y = number.y;
        return *this;
    }

    Number& operator++() {
        x++;
        y++;
        return *this;
    }


    Number operator+(const Number& number) const {
        return Number(x + number.x, y + number.y);
    }

    Number operator+(int num) const {
        return Number(x + num, y + num);
    }

    Number operator*(const Number& number) const {
        return Number(x * number.x, y * number.y);
    }

    Number operator*(int num) const {
        return Number(x * num, y * num);
    }

    Number operator/(int num) const {
        return Number(x / num, y / num);
    }

    bool operator<(const Number& other) const {
        return x < other.x;
    }

    bool operator>(const Number& other) const {
        return x > other.x;
    }

    void Print() const {
        cout << "x=" << x << ", y=" << y << endl;
    }


};

int main() {
    Number numPrisv(1, 2), numPrisv1(0, 0);
    numPrisv1.Print();
    numPrisv1 = numPrisv;
    numPrisv1.Print();

    cout << "________" << endl;

    Number numIncrement(5, 7);
    numPrisv1 = ++numIncrement;
    numIncrement.Print();


    cout << "________" << endl;

    Number numObject1(2, 7), numObject2(0, 0);
    int a = 10;
    numObject2 = numObject1 + a;
    numObject1.Print();
    numObject2.Print();

    cout << "________" << endl;

    Number num1(13, 21);
    Number num2(5, 15);
    Number num3(10, 5);

    Number max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    cout << "Max value: ";
    max.Print();

    cout << "________" << endl;

    Number number1(2, 3);
    Number number2(4, 5);

    Number number3 = number1 + number2;
    number3.Print();
    Number number4 = number1 * number2;
    number4.Print();
    Number number5 = number1 + 10;
    number5.Print();
    Number number6 = number2 * 3;
    number6.Print();

    cout << "________" << endl;

    return 0;
}
