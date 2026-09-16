#include <iostream>
using namespace std;

class Fraction
{
public:
    int numerator;
    int denominator;

    Fraction(int n, int d)
    {
        numerator = n;
        denominator = d;
    }

    Fraction operator+(Fraction f)
    {
        int n = numerator * f.denominator
              + f.numerator * denominator;

        int d = denominator * f.denominator;

        return Fraction(n, d);
    }

    Fraction operator-(Fraction f)
    {
        int n = numerator * f.denominator
              - f.numerator * denominator;

        int d = denominator * f.denominator;

        return Fraction(n, d);
    }

    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction f1(1, 2);
    Fraction f2(1, 3);

    Fraction sum = f1 + f2;
    Fraction sub = f1 - f2;

    cout << "Addition = ";
    sum.print();

    cout << "Subtraction = ";
    sub.print();

    return 0;
}
