//memanggil semua fungsi yang dikerjakan di int main
int main() {
    int num;
    cin >> num; //menginput banyak  kata yang ingin dicari, misal: 2
    cin.ignore(); 

    char words[num][25]; //char words[2][25]
    for (int i = 0; i < num; i++) {
        cin.getline(words[i], 25); //cin.getline(words[0],25)-memasukkan kata dan akan dimasukan ke dalam array words[0] (prtama kali)
        toUpperCase(words[i]); //toUpperCase(words[0]) looping untuk mengkapitalkan seluruh karakter dalam words[i]
    }

    char matrix[MATRIX_SIZE][MATRIX_SIZE] = { //matrix[24][24]
        "AAFLKHPFSSUFICICLESGNNH",
        "SFVREOMRWLRTTSXOQQNAOAO",
        "QEIAIFXAEIRFVFYSXIMINJI",
        "WSTRLGOCAPBIAFIWIWTUACM",
        "FEYAEAISTPCRLUJKOAKCERS",
        "RVDAKPNDEEHDEMSNCKKFOAH",
        "MRNEDSLCRRIWNRSAAFITMMI",
        "YAAECIEAHYMOTAVHRSSTISB",
        "RJSEWELCCENNIETOHWSGLSE",
        "ATANYYMOIEESNESIOIRELTR",
        "UTENEWEBHMYBETNNRAIEBEN",
        "RCLKUTEAEQJLSGSHTGDSKOA",
        "BHOICATNRRSDDECEHOOLGIT",
        "ENSLUARIRSETALOCOHCTOHE",
        "FZFUDQJYMADOYIWYGLOVESU",
        "TEKALFWONSNAEBMIEJTZNTG",
        "ESWPOSJXEUTUYOZUWAKEZHM",
        "KZUHBPEZEERFLMSNOWBALLH",
        "NSNOWBOARDYTVWYCLEVOHSA",
        "ACOCRQLGZIYCHODRAZZILBI",
        "LBVKKWANZAAQINWOLPWONSL",
        "BFREEZINGRAINSLILGTMELT",
        "HQPYLWHFMNFFUFPSWXNUMMV"
    };

    for (int i = 0; i < num; i++) {//melakukan looping sebanyak jumlah kata yang dicari
        if (searchInMatrix(words[i], matrix, strlen(words[i]))) { //memanggil fungsi searchInMatrix, misal kata Rana maka looping pertama: SearchInMatrix(Rana, isi matrix, 4)
            cout << "Ada" << endl;
        } else {
            cout << "Tidak Ada" << endl;
        }
    }

    return 0;
}
