#include<iostream> 
using namespace std;

void interDirectoSenal(int a[], int n);

int main() {
    int n;
    cin >> n;

    int A[n];

    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    interDirectoSenal(A, n);

    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}

void interDirectoSenal(int A[], int n) {
    int cen, i;
    cen = 1; 
    i = 1;

    while (i <= n - 1 && cen == 1) {
        cen = 0;
        for (int j = 0; j < n - i; j++) {
            if (A[j] > A[j + 1]) {
                int aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
                cen = 1; 
            }
        }
        i = i + 1; 
    }
}