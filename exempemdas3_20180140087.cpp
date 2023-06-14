
#include <iostream>
using namespace std;

class Penerbit {
private :
    string nama_penerbit;
public:
    
    Penerbit(const std::string& namaper):nama_penerbit(namaper){}
    string getnama_penerbit(){
        return nama_penerbit;
    };
};

class Pengarang {
private:
    string nama_pengarang;
    Penerbit* penerbit;
public:
    Pengarang(const std::string& namapeng, Penerbit* penerbit) : nama_pengarang(namapeng), penerbit(penerbit) {};
    std::string getnamapeng() const {
        return nama_pengarang;
    }
    Penerbit* getPenerbit() const {
        return penerbit;
    }
};

class Buku {
    string judul_buku;
    Buku(string& judulBK) : judul_buku(judulBK) {}
};

int main()
{
    Penerbit penerbit1("Gema Press");
    Penerbit penerbit2("Intan Pariwara");

    Pengarang pengarang1("Joko", &penerbit1);
    Pengarang pengarang2("Lia", &penerbit1);
    Pengarang pengarang3("Asroni", &penerbit2);
    Pengarang pengarang4("Giga", &penerbit1);

    cout << "Daftar pengarang pada penerbit Gama Press :" << endl;
    if (pengarang1.getPenerbit() == &penerbit1) {
        cout << "1. " << pengarang1.getnamapeng() << endl;
        if (pengarang2.getPenerbit() == &penerbit1) {
            cout << "2. " << pengarang2.getnamapeng() << endl;
        };

    }
}

