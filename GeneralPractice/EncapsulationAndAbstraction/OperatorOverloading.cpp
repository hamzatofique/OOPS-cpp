#include <iostream>
using namespace std;

class Complex {
    double real, imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Addition: (a+bi) + (c+di) = (a+c) + (b+d)i
    Complex operator+(const Complex& o) const {
        return Complex(real + o.real, imag + o.imag);
    }

    // Subtraction
    Complex operator-(const Complex& o) const {
        return Complex(real - o.real, imag - o.imag);
    }

    // Multiplication: (a+bi)(c+di) = (ac-bd) + (ad+bc)i
    Complex operator*(const Complex& o) const {
        return Complex(real * o.real - imag * o.imag,
                       real * o.imag + imag * o.real);
    }

    // Division: multiply by conjugate of the denominator
    Complex operator/(const Complex& o) const {
        double d = o.real * o.real + o.imag * o.imag;
        return Complex((real * o.real + imag * o.imag) / d,
                       (imag * o.real - real * o.imag) / d);
    }

    // Equality
    bool operator==(const Complex& o) const {
        return real == o.real && imag == o.imag;
    }

    // Compound assignment (modifies this object, returns reference)
    Complex& operator+=(const Complex& o) {
        real += o.real;
        imag += o.imag;
        return *this;
    }

    // Output: must be a friend (non-member) because the left operand is ostream
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << (c.imag >= 0 ? " + " : " - ")
            << (c.imag >= 0 ? c.imag : -c.imag) << "i";
        return out;
    }

    // Input
    friend istream& operator>>(istream& in, Complex& c) {
        in >> c.real >> c.imag;
        return in;
    }
};

int main() {
    Complex a(3, 4), b(1, -2);

    cout << "a     = " << a << "\n";
    cout << "b     = " << b << "\n";
    cout << "a + b = " << a + b << "\n";
    cout << "a - b = " << a - b << "\n";
    cout << "a * b = " << a * b << "\n";
    cout << "a / b = " << a / b << "\n";

    a += b;
    cout << "a += b -> " << a << "\n";
    cout << "a == b? " << (a == b ? "yes" : "no") << "\n";
}