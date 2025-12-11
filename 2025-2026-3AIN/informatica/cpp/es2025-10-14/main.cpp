/*
 * Esercizio per casa del prof Foschini
 * Diego Massanova 3AIN
 * https://classroom.google.com/u/2/c/NzgwNTkwMTcwMTc3/a/ODEyNjkyNjgwMjI1/details
 * Info compiler
 *      gcc version 15.2.1 20250813 (GCC)
 *      Target: x86_64-pc-linux-gnu
 */

#include <iostream>
#include <stdexcept>

// Rubato da https://www.geeksforgeeks.org/dsa/euclidean-algorithms-basic-and-extended/
int findGCD(unsigned int a, unsigned int b) {
    if (a == 0)
        return b;
    return findGCD(b % a, a);
}

struct Fraction {
    int num;
    unsigned int den;

    Fraction(int num, int den) {
        if (den == 0) {
            throw "den == 0";
        }

        // Semplifica parecchio i calcoli con numeri negativi
        // Se il denominatore è minore di 0, o entrambi sono negativi, o il denominatore è negativo e il numeratore è positivo
        // Noi vogliamo solamente il numeratore con segno.
        if (den < 0) {
            den = -den;
            num = -num;
        }

        this->num = num;
        this->den = den;

        this->simplify();
    };

    void simplify() {
        int gcd = findGCD(this->den, this->num);
        this->num /= gcd;
        this->den /= gcd;
    }

    float toFloat() const {
        return (float)this->num / (float)this->den;
    }
};

std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
    os << frac.num << "/" << frac.den;
    return os;
}

Fraction operator*(Fraction& left, Fraction& right) {
    Fraction x(left.num * right.num, left.den * right.den);
    return x;
}

Fraction operator/(Fraction& left, Fraction& right) {
    // lhv determina il tipo del risultato
    Fraction x(left.num * right.den, right.num * left.den);
    return x;
}

Fraction operator+(Fraction& left, Fraction& right) {
    int leftNumNormalized = left.num * right.den;
    int rightNumNormalized = right.num * left.den;
    Fraction x(leftNumNormalized + rightNumNormalized, left.den * right.den);
    return x;
}

Fraction operator-(Fraction& left, Fraction& right) {
    int leftNumNormalized = left.num * right.den;
    int rightNumNormalized = right.num * left.den;
    Fraction x(leftNumNormalized - rightNumNormalized, left.den * right.den);
    return x;
}

int main(void) {
    int num, den;

    std::cout << "Inserire il numeratore della prima frazione" << std::endl;
    std::cin >> num;
    std::cout << "Inserire il denominatore della prima frazione" << std::endl;
    std::cin >> den;

    Fraction frazione1(num, den);
    std::cout << "Hai inserito la frazione " << frazione1 << " = " << frazione1.toFloat() << std::endl;

    std::cout << "Inserire il numeratore della seconda frazione" << std::endl;
    std::cin >> num;
    std::cout << "Inserire il denominatore della seconda frazione" << std::endl;
    std::cin >> den;

    Fraction frazione2(num, den);
    std::cout << "Hai inserito la frazione " << frazione2 << " = " << frazione2.toFloat() << std::endl;

    Fraction res = frazione1+frazione2;
    std::cout << frazione1 << " + " << frazione2 << " = " << res << " = " << res.toFloat() << std::endl;
    res = frazione1-frazione2;
    std::cout << frazione1 << " - " << frazione2 << " = " << res << " = " << res.toFloat() << std::endl;
    res = frazione1*frazione2;
    std::cout << frazione1 << " * " << frazione2 << " = " << res << " = " << res.toFloat() << std::endl;
    res = frazione1/frazione2;
    std::cout << frazione1 << " / " << frazione2 << " = " << res << " = " << res.toFloat() << std::endl;
}