#include <bits/stdc++.h>
using namespace std;

int main() {
    // string listNamaSiswa[6] = {"Andi", "Budi", "Dengklek", "Regina", "Jihan", "Dodo"};

    // for(int i = 5; i >= 0; i--) {
    //     cout << listNamaSiswa[i] << " ";
    // }

    vector<double> listBeratBadan = {9, 2, 4};

    listBeratBadan.push_back(10); // {9, 2, 4, 10}
    listBeratBadan.push_back(7); // {9, 2, 4, 10, 7}

    cout << "sebelum:" << listBeratBadan[2] << endl;

    listBeratBadan.insert(listBeratBadan.begin() + 2, 6);

    cout << "sesudah: " << listBeratBadan[2] << endl;

    // cout << listBeratBadan[4];
    // cout << listBeratBadan.at(4);
    

}
