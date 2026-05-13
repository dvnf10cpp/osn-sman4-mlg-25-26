
#include <bits/stdc++.h>

using namespace std;

struct Laptop {
    string cpu, gpu; 
    string merek;
    int ram; // GB
    int storage; // GB 
};

void printLaptop(Laptop laptop) {
    // implementasi TODO 1
    // Ngeprint semua attribut laptop
    
    cout << laptop.merek << endl;
    cout << laptop.cpu << endl; 
    cout << laptop.gpu << endl; 
    cout << laptop.ram << endl;
    cout << laptop.storage << endl;
    cout << "----------------------------------------------------" << endl;
}

Laptop buatLaptop(string cpu, string gpu, string merek, int ram, int storage) {
    // implementasi TODO 2
    Laptop laptop; 
    laptop.cpu = cpu;
    laptop.gpu = gpu;
    laptop.merek = merek;
    laptop.ram = ram;
    laptop.storage = storage;
    return laptop;
}

void printIteratif(vector<Laptop> kumpulanLaptop) {
    // implementasi TODO 3  
    for(int i = 0; i < kumpulanLaptop.size() ; i++) {
        printLaptop(kumpulanLaptop[i]);
    }
}

int main() {
    Laptop laptop1 = buatLaptop("Ryzen 7", "NVIDIA RTX", "Asus", 16, 512);
    printLaptop(laptop1);    
    
    Laptop laptop2 = buatLaptop("Intel i7", "Intel UHD" ,"HP", 8, 256);
    printLaptop(laptop1);
    
    vector<Laptop> kumpulanLaptop = {laptop1, laptop2};
    printIteratif(kumpulanLaptop);
    return 0;
}