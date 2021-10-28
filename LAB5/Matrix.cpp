//
// Created by Orsolya on 18.10.2021.
//

#include "Matrix.h"
#include <ctime>
#include <random>

Matrix::Matrix(int mRows, int mCols) {
    this->mRows = mRows;
    this->mCols = mCols;

    this->mElements = new double *[mRows];

    for(int i = 0; i < mRows; ++i) {
        mElements[i] = new double [mCols];
    }
}


Matrix::Matrix(const Matrix &what) {
    mRows = what.mRows;
    mCols = what.mCols;

    mElements = new double *[mRows];

    for(int i = 0; i < mRows; ++i) {
        mElements[i] = new double [mCols];
    }

    for(int i = 0; i < mRows; ++i) {
        for(int j = 0; j < mCols; ++j) {
            mElements[i][j] = what.mElements[i][j];
        }
    }
}

//Matrix::Matrix(Matrix &&what) {
//    this->mRows = what.mRows;
//    this->mCols = what.mCols;
//
//    mElements = new double *[mRows];
//
//    for(int i = 0; i < mRows; ++i) {
//        mElements[i] = new double [mCols];
//    }
//
//    what.mRows = 0;
//    what.mCols = 0;
//    mElements = nullptr;
//
//    for(int i = 0; i < mRows; ++i) {
//        mElements[i] = nullptr;
//    }
//}

Matrix::Matrix(Matrix &&what) {
    this->mRows = what.mRows;
    this->mCols = what.mCols;
    this->mElements = what.mElements;

    what.mRows = 0;
    what.mCols = 0;
    what.mElements = nullptr;
}



Matrix::~Matrix() {
    for(int i = 0; i < mRows; ++i) {
        delete[] mElements[i];
    }

    delete[] mElements;
}

void Matrix::fillMatrix(double value) {
    for(int i = 0; i < mRows; ++i) {
        for(int j = 0; j < mCols; ++j) {
            mElements[i][j] = value;
        }
    }
}

void Matrix::randomMatrix(int a, int b) {
//        std::random_device dev;
//        std::mt19937 gen(dev());
//        uniform_real_distribution<> rnd(a, b);
//        for (int i = 0; i < mRows; i++) {
//            for (int j = 0; j < mCols; j++) {
//                mElements[i][j] = rnd(gen);
//            }
//        }

    srand(time(0));
    for(int i = 0; i < mRows; ++i) {
        for(int j = 0; j < mCols; ++j) {
            mElements[i][j] = (rand() % (b -a ) )+ a;
        }
    }
}

void Matrix::printMatrix(ostream &os) const {
    for(int i = 0; i < mRows; ++i) {
        for(int j = 0; j < mCols; ++j) {
            os << mElements[i][j] << " ";
        }
        os << endl;
    }

    //os << endl;
}

bool Matrix::isSquare() const {
    if(mRows == mCols) {
        return true;
    }
    else {
        return false;
    }
}

Matrix operator+(const Matrix &x, const Matrix &y) {
    if(x.mRows != y.mRows || x.mCols != y.mCols) {
        throw out_of_range("Matrices don't have the same dimension!");
    }

    Matrix result(x);

    for(int i = 0; i < x.mRows; ++i) {
        for(int j = 0; j < x.mCols; ++j) {
            result.mElements[i][j] += y.mElements[i][j];
        }
    }
    return result;
}

Matrix operator*(const Matrix &x, const Matrix &y) {
    if(x.mRows != y.mCols) {
        throw out_of_range("Matrices don't have proper dimension!");
    }

    Matrix prod(x.mRows,y.mCols);

    for(int i = 0; i < x.mRows; ++i) {
        for(int j = 0; j < y.mCols; ++j) {
            for(int k = 0; k < x.mCols; ++k) {
                prod.mElements[i][j] += x.mElements[i][k] * y.mElements[k][j];
            }
        }
    }
    return prod;
}

istream &operator>>(istream &is, Matrix &mat) {
    for(int i = 0; i < mat.mRows; ++i) {
        for(int j = 0; j < mat.mCols; ++j) {
            is >> mat.mElements[i][j];
        }
    }
    return is;
}

ostream &operator<<(ostream &os, const Matrix &mat) {
//    mat.printMatrix(os);
//    return os;
    for(int i = 0; i < mat.mRows; ++i) {
        for(int j = 0; j < mat.mCols; ++j) {
            os << mat.mElements[i][j] << " ";
        }
        os << "\n";
    }
    return os;
}


double *Matrix::operator[](int index) {
    if(index < 0 || index >= mRows) {
        throw runtime_error("Not existing index!");
    }
    return mElements[index];
}


double *Matrix::operator[](int index) const {
    if(index < 0 || index >= mRows) {
        throw runtime_error("Not existing index!");
    }
    return mElements[index];
}


Matrix &Matrix::operator=(const Matrix &mat) {
    if(mRows != mat.mRows || mCols != mat.mCols) {
        throw out_of_range("Matrices don't have the same dimension!");
    }

    if(this == &mat) {
        return *this;
    }

    for(int i = 0; i < mRows; ++i) {
        for(int j = 0; j < mCols; ++j) {
            mElements[i][j] = mat.mElements[i][j];
        }
    }

    return *this;
//    if(this->mRows != this->mRows || mat.mCols != mat.mCols) {
//        throw out_of_range("Matrices don't have the same dimension!");
//    }
//
//    for(int i = 0; i < mat.mRows; ++i) {
//        for(int j = 0; j < mat.mCols; ++j) {
//            this->mElements[i][j] = mat.mElements[i][j];
//        }
}


Matrix &Matrix::operator=(Matrix &&mat) {
    for (int i = 0; i < mRows; ++i) {
        delete[] this->mElements[i];
    }
    delete[] this->mElements;
    this->mRows = mat.mRows;
    this->mCols = mat.mCols;
    this->mElements = mat.mElements;
    mat.mElements = nullptr;
    mat.mRows = 0;

}
