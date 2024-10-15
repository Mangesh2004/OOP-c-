#include <iostream>
using namespace std;

class Complex {
public:
    int real, img;

    void accept() {
        cout << "Enter the real part: ";
        cin >> real;
        cout << "Enter the imaginary part: ";
        cin >> img;
    }

    Complex operator + (Complex c) {
        Complex c3;
        c3.real = real + c.real;
        c3.img = img + c.img;
        return c3;
    }

    Complex operator * (Complex c) {
        Complex c3;
        c3.real = (real * c.real) - (img * c.img);
        c3.img = (real * c.img) + (img * c.real);
        return c3;
    }

    void Display() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;
    int choice;

    cout << "Complex Number Operations\n";
    cout << "1. Addition\n";
    cout << "2. Multiplication\n";
    cout << "Enter your choice (1/2): ";
    cin >> choice;

    c1.accept();
    c2.accept();

    switch (choice) {
        case 1:
            c3 = c1 + c2;
            cout << "Result of Addition: ";
            break;
        case 2:
            c3 = c1 * c2;
            cout << "Result of Multiplication: ";
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    c3.Display();
    return 0;
}
