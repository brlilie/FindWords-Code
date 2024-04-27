bool searchInMatrix(char* word, char matrix[][MATRIX_SIZE], int wordLen) { //Rana, matrix[24][24],4
    //fungsi searchword dipakai dalam fungsi searchInMatrix
    for (int i = 0; i < MATRIX_SIZE; i++) { //i<24
        for (int j = 0; j < MATRIX_SIZE; j++) { //j<24
            if (searchWord(word, matrix, wordLen, i, j, 1, 0) || // Horizontal //Rana, matrix[24][24],4,0,0,1,0 //SEMUA UNTUK LOOPING PERTAMA
                searchWord(word, matrix, wordLen, i, j, 0, 1) || // Vertical //Rana, matrix[24][24],4,0,0,0,1
                searchWord(word, matrix, wordLen, i, j, 1, 1) || // Diagonal kanan bawah //Rana, matrix[24][24],4,0,0,1,1
                searchWord(word, matrix, wordLen, i, j, -1, 1)) { // Diagonal kiri atas //Rana, matrix[24][24],4,-1,1
                return true;
            }
        }
    }
    return false;
}
