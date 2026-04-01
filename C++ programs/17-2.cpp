#include <iostream>
#include <vector>
using namespace std;

template<class T>
class Matrix {
    vector<vector<T>> data;
public:
    Matrix(int r, int c) : data(r, vector<T>(c)) {}
    Matrix operator+(const Matrix& other) {
        Matrix res(data.size(), data[0].size());
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[0].size(); ++j) {
                res.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return res;
    }
    Matrix operator*(const Matrix& other) {
        Matrix res(data.size(), data.size());
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data.size(); ++j) {
                for (size_t k = 0; k < data.size(); ++k) {
                    res.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return res;
    }
};

int main() {
    Matrix<int> m(2, 2);
    // assume initialized
    return 0;
}