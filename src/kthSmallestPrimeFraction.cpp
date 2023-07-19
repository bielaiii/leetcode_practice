#include<vector>
#include<iostream>
#include<queue>
using namespace std;

struct Fraction {
    int numerator;
    int denominator;
    Fraction(int a, int b): numerator(a), denominator(b){};
};

struct FractionCompare {
    bool operator() (const Fraction f1, const Fraction f2) {
        double a = static_cast<double>(f1.numerator) / f1.denominator;
        double b = static_cast<double>(f2.numerator) / f2.denominator;
        return a < b;
    }
};

vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
    priority_queue<Fraction, vector<Fraction>, FractionCompare> pq;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            double t = static_cast<double>(arr[i]) / arr[j];
            if (pq.size() < k || static_cast<double>(pq.top().numerator) / pq.top().denominator > t) {
                if (pq.size() == k) pq.pop();
                pq.push(Fraction(arr[i], arr[j]));
            }
        }
    }
    vector<int> ret =  {pq.top().numerator, pq.top().denominator};
    return ret;
}

