#include <iostream>
#include <cstring>
using namespace std;

const int MATRIX_SIZE = 24;

void toUpperCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

bool searchWord(char* word, char matrix[][MATRIX_SIZE], int wordLen, int startX, int startY, int dx, int dy) {
    for (int k = 0; k < wordLen; k++) {
        int x = startX + k * dx;
        int y = startY + k * dy;
        if (x < 0 || x >= MATRIX_SIZE || y < 0 || y >= MATRIX_SIZE || matrix[x][y] != word[k]) {
            return false;
        }
    }
    return true;
}

