#include <iostream>

class Array {
private:
    int* arr;
    int size;
public:
    Array(int s) {
        size = s;
        arr = new int[size];
    }

    ~Array() {
        delete[] arr;
    }

    int& operator[](int index) {
        return arr[index];
    }

    int getSize() {
        return size;
    }
};

int main() {
    Array myArray(5);

    for (int i = 0; i < myArray.getSize(); i++) {
        myArray[i] = i + 1;
    }

    for (int i = 0; i < myArray.getSize(); i++) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}
        