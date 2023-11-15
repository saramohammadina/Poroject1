#include <iostream>
using namespace std;

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

    void Insert(int object, int index) {
        arr[index] = object;
    }

    int Delete(int index) {
        int object = arr[index];
        arr[index] = 0;
        return object;
    }

    int Find(int object) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == object) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Array myArray(5);
    myArray.Insert(10, 0);
    myArray.Insert(20, 1);
    myArray.Insert(30, 2);
    myArray.Insert(40, 3);
    myArray.Insert(50, 4);

    cout << "Element at index 2: " << myArray.Delete(2) << endl;
    cout << "Index of element 40: " << myArray.Find(40) << endl;

    return 0;
}
