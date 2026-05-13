#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nilaiFisikaSiswa;

    nilaiFisikaSiswa.push_back(79);
    nilaiFisikaSiswa.push_back(65);
    nilaiFisikaSiswa.push_back(20);
    nilaiFisikaSiswa.push_back(87);
    nilaiFisikaSiswa.push_back(58);
    nilaiFisikaSiswa.push_back(17);

    int jumlahNilai = 0;

    for(int i = 0; i < nilaiFisikaSiswa.size(); i++) {
        jumlahNilai = jumlahNilai + nilaiFisikaSiswa[i];
        // jumlahNilai += nilaiFisikaSiswa[i];
    }

    int rataRata = jumlahNilai / nilaiFisikaSiswa.size();

    cout << rataRata << endl;

    int nilaiMaksimum = -1, nilaiMinimum = 101;

    for(int i = 0; i < nilaiFisikaSiswa.size(); i++) {
        if (nilaiFisikaSiswa[i] > nilaiMaksimum) {
            nilaiMaksimum = nilaiFisikaSiswa[i];
        }
        if (nilaiFisikaSiswa[i] < nilaiMinimum) {
            nilaiMinimum = nilaiFisikaSiswa[i];
        }
    }

    cout << "Nilai Paling Kecil: " << nilaiMinimum << endl;
    cout << "Nilai Paling Besar: " << nilaiMaksimum << endl;
    

}
