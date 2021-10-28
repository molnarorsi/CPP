//
// Created by Orsolya on 28.10.2021.
//

#include "Polynomial.h"

Polynomial::Polynomial(int degree, const double *coefficients) {
    this->capacity = degree;
    this->coefficients = new double [degree + 1];
    for (int i = 0; i < degree + 1; ++i) {
        this->coefficients[i] = coefficients[i];
    }

}

Polynomial::Polynomial(const Polynomial &that) {
    this->capacity = that.capacity;
    this->coefficients = new double[that.capacity + 1];
    for (int i = 0; i < that.capacity + 1; ++i) {
        this->coefficients[i] = that.coefficients[i];
    }
}

Polynomial::Polynomial(Polynomial &&that) {
//    this->capacity = that.capacity;
//    this->coefficients = that.coefficients;
    this->capacity = 0;
    this->coefficients = nullptr;
}

Polynomial::~Polynomial() {
    delete[] this->coefficients;
}

int Polynomial::degree() const {
    return capacity;
}

ostream &operator<<(ostream &out, const Polynomial &what) {
    if(what.capacity == 0) {
        throw out_of_range("No coefficients for polynom. It is empty!");
    }

    for(int i = 0; i < what.capacity + 1; ++i) {
        if (i < what.capacity) {
            out << what.coefficients[i] <<"x^" << what.capacity - i << "+ ";
        }
        else {
            out << what.coefficients[i];
        }
    }
    out << endl;
    return out;
}

//double Polynomial::evaluate(double x) const {
//    int deg = this->degree();
//    double result = this->coefficients[deg];
//    for (int i = deg - 1; i >= 0; i--) {
//        result = result * x + this->coefficients[i];
//    }
//    return result;
//}

//Polynomial operator +(const Polynomial &a, const Polynomial &b) {
//    Polynomial result(max(a.degree(), b.degree()), nullptr);
//    for (int i = 0; i < result.capacity; i++) {
//        result.coefficients[i] = a[i] + b[i];
//    }
//    return result;
//}



