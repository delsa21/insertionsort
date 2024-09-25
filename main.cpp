#include <iostream>
#include <vector>

using namespace std;

bool esPrimo(int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


void insertionSort(vector<int>& vec) {
    for (int i = 1; i < vec.size(); i++) {
        int key = vec[i];  // Guarda el valor actual.
        int j = i - 1;

        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        vec[j + 1] = key;
    }
}

int main() {
    vector<int> vec = {12, 5, 3, 7, 11, 4, 8, 13};

    // Quitar números no primos del vector
    for (int i = 0; i < vec.size(); i++) {
        if (!esPrimo(vec[i])) {
            vec.erase(vec.begin() + i);
            i--;
        }
    }

    insertionSort(vec);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}