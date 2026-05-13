#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main() {
    // stack<tipe_data> nama_variabel;
    // queue<tipe_data> nama_variabel;
    // deque<tipe_data> nama_variabel;
    // pair<tipe_data1,tipe_data2> nama_variabel;
    // priority_queue<tipe_data> nama_variabel;
    // map<tipe_data1,tipe_data2> nama_var;

    // map<char,bool> truFals;
    map<string,vector<int>> kumpulanAngka;
    kumpulanAngka["Kelas A"] = {10, 40, 48, 19};
    kumpulanAngka["Kelas B"] = {39, 36, 38, 12};

    for(const auto [first, second] : kumpulanAngka) {
        cout << first << endl;
    }

    for(auto p : kumpulanAngka) {
        cout << p.first << endl;
    }

    // for(int i = 0; i  < kumpulanAngka["Kelas A"].size(); i++) {
    //     cout << kumpulanAngka["Kelas A"][i] << " ";
    // }
    // cout << endl;

    // truFals['A'] = 0;

    // if (truFals['A']) cout << "truee" << endl;
    // else cout << "falsss" << endl;

    // map<string,int> daftarNilai;
    // daftarNilai["Budi"] = 40;
    // daftarNilai["ando"] = 13;

    // cout << daftarNilai["Budi"] << endl;
    // cout << daftarNilai["ando"] << endl;

    // urutkan sesuai paling besar
    // priority_queue<int> pq;
    // urutkan sesuai paling kecil
    // priority_queue<int, vector<int>, greater<int>> pq;

    // pq.push(10);
    // pq.push(50);
    // pq.push(30);
    // pq.push(40);

    // while(!pq.empty()) {
    //     int nilai = pq.top();
    //     pq.pop();
    //     cout << nilai << endl;
    // }

    // pair<char,bool> p1;
    // p1.first = 'A';
    // p1.second = true;
    // cout << "Elemen pertama P1: " << p1.first << endl;
    // cout << "Elemen kedua P1: " << p1.second << endl;

    // pair<int, string> p2 = {10, "katadana"};

    // cout << "Elemen pertama P2: " << p2.first << endl;
    // cout << "Elemen kedua P2: " << p2.second << endl;

    // auto [elemen1, elemen2] = p2;

    // deque<string> d;

    // d.push_front("budi");
    // d.push_front("ando");
    // d.push_back("moai");
    // d.push_back("jojo");

    // cout << "ukuran deque adalah: " << d.size() << endl;
    // while(!d.empty()) {
    //     string urutanDepan = d.front();
    //     string urutanBelakang = d.back();

    //     cout << urutanDepan << " ";
    //     cout << urutanBelakang << endl;
    //     d.pop_front(); // ngeluarin dari depan
    //     d.pop_back(); // ngeluarin dari belakang
    // }

    // queue<string> antrian;

    // antrian.push("budi");
    // antrian.push("andi");
    // antrian.push("dono");

    // while(!antrian.empty()) {
    //     string nama = antrian.front();
    //     antrian.pop();

    //     cout << nama << endl;
    // }

    // stack<string> tumpukanNilai;

    // tumpukanNilai.push("coba");
    // tumpukanNilai.push("kedua");

    // while(!tumpukanNilai.empty()) {
    //     string kata = tumpukanNilai.top();
    //     tumpukanNilai.pop();

    //     cout << kata << endl;
    // }
    return 0;
}
