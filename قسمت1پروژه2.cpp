#include <iostream>
#include <vector>

std::vector<std::vector<int>> generateEmptyMatrix(int n) {
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));
    return matrix;
}

int main() {
    int n;
    std::cout << "Enter the size of the matrix: ";
    std::cin >> n;

    std::vector<std::vector<int>> emptyMatrix = generateEmptyMatrix(n);

    std::cout << "Empty Matrix:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << emptyMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}