#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


double dividedDifference(const vector<double>& x, const vector<double>& y, int start, int end) {
    if (start == end) {
        return y[start];
    } else {
        return (dividedDifference(x, y, start + 1, end) - dividedDifference(x, y, start, end - 1)) / (x[end] - x[start]);
    }
}

double newtonInterpolation(const vector<double>& x, const vector<double>& y, double point) {
    int n = x.size();
    double result = 0.0;
    double term = 1.0;

    for (int k = 0; k < n; ++k) {
        result += dividedDifference(x, y, 0, k) * term;
        term *= (point - x[k]);
    }
    return result;
}

int main() {
     vector<double> x = {0.0, 1.0, 2.0, 3.0}; // Узлы интерполяции
    vector<double> y = {1.0, 3.0, 2.0, 4.0}; // Значения функции в узлах

    double point = 1.5; // Точка для вычисления значения интерполяции
    double interpolatedValue = newtonInterpolation(x, y, point);

    cout << "Интерполяция Ньютона:" << endl;
    cout << "Значение в точке x = " << point << " равно: " << fixed << setprecision(4) << interpolatedValue << endl;

    return 0;
}
