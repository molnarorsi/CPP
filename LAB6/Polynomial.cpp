//
// Created by Orsolya on 28.10.2021.
//

#include "Polynomial.h"

Polynomial::Polynomial(int degree, const double *coefficients) {
    this->capacity = degree;
    this->coefficients = new double [degree + 1];
    for (int i = 0; i < capacity + 1; ++i) {
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
    this->capacity = that.capacity;
    this->coefficients = that.coefficients;
//    this->capacity = 0;
//    this->coefficients = nullptr;
    that.capacity = 0;
    that.coefficients = nullptr;
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
    else {
        for(int i = 0; i < what.capacity + 1; i++) {
            if(i < what.capacity) {
                out << what.coefficients[i] << " * x^" << what.capacity -i << " + ";
            }
            else {
                out << what.coefficients[i] ;
            }
        }
    }
    out << endl;
    return out;
}

double Polynomial::evaluate(double x) const {
    double result = 0;
    int degree = this->degree();
    for(int i = degree; i >= 0; i--) {
        result = this->coefficients[i] + (x * result);
    }
    return result;
}

Polynomial Polynomial::derivative() const {
     int number = this->capacity;
     for(int i = 0; i < capacity; i++) {
         if(degree() == 0) {
             number--;
             break;
         }
     }
     Polynomial derivative(capacity - 1, coefficients);
        for(int i = 0; i < capacity; i++) {
            if(degree() != 0) {
                derivative.coefficients[i] =  (capacity - i) * coefficients[i] ;
                //derivative.capacity = capacity - 1;
                derivative.coefficients[derivative.capacity] = coefficients[derivative.capacity];
            }
        }
     return derivative;

}

double Polynomial::operator[](int index) const {
    if( index < 0 || index >= degree() ) {
        throw out_of_range("Index is outside bounds!");
    }
    else {
        return coefficients[index];
    }
}

Polynomial operator-(const Polynomial &a) {
    Polynomial result(a);
    for(int i = 0; i < result.capacity; i++) {
        result.coefficients[i] =  (-1) * result.coefficients[i];
    }
    return result;

}

Polynomial operator +(const Polynomial &a, const Polynomial &b) {
//    Polynomial sum(max(a.degree(), b.degree()), nullptr);
//    for (int i = 0; i < sum.capacity; i++) {
//        sum.coefficients[i] = a[i] + b[i];
//    }
//    return sum;
    if(a.capacity > b.capacity) {
        Polynomial sum(a);
        for(int i = 0; i < b.capacity; i++) {
            sum.coefficients[sum.capacity - i] += b.coefficients[b.capacity - i];
        }
        return sum;
    }
    Polynomial sum(b);
    for (int i = 0; i < a.capacity; i++) {
        sum.coefficients[sum.capacity - i] += a.coefficients[a.capacity - i];
    }
    return sum;

}

Polynomial operator-(const Polynomial &a, const Polynomial &b) {
    if(a.capacity >= b.capacity) {
        Polynomial difference(a);
        return difference + (-b);
    }
    Polynomial difference(-b);
    return difference + a;
}

Polynomial operator*(const Polynomial &a, const Polynomial &b) {
    double newCapacity[a.capacity + b.capacity];
    int degree = a.capacity + b.capacity;
    Polynomial product(degree, newCapacity + 1);

    for(int i = 0; i <= degree; i++) {
        newCapacity[i] = 0;
    }

    for(int i = 0; i <= b.capacity; i++) {
        for(int j = 0; j <= a.capacity; j++) {
            product.coefficients[i + j] += a.coefficients[i] * b.coefficients[j];
        }
    }

    return product;
}

//Polynomial operator*(const Polynomial &a, const Polynomial &b) {
//    int aDeg = a.degree();
//    int bDeg = b.degree();
//    Polynomial result(aDeg + bDeg, nullptr);
//    for (int i = 0; i < result.capacity; i++) {
//        result.coefficients[i] = 0;
//    }
//    for (int i = 0; i <= aDeg; i++) {
//        for (int j = 0; j <= bDeg; j++) {
//            result.coefficients[i + j] = a[i] * b[j];
//        }
//    }
//    return result;
//}