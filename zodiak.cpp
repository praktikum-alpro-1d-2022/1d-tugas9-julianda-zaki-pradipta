#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void tentukan_zodiak();
struct zodiak
{
string nama;
int tanggal_mulai;
int tanggal_selesai;
};
    const int jumlah_zodiak = 12;
    zodiak daftar_zodiak[jumlah_zodiak] =
    {
    {"Aries", 21, 3},
    {"Taurus", 21, 4},
    {"Gemini", 21, 5},
    {"Cancer", 21, 6},
    {"Leo", 21, 7},
    {"Virgo", 21, 8},
    {"Libra", 21, 9},
    {"Scorpio", 21, 10},
    {"Sagitarius", 21, 11},
    {"Capricorn", 21, 12},
    {"Aquarius", 21, 1},
    {"Pisces", 21, 2}
    };
    int tgl_lahir, bln_lahir;

int main(){

    cout << "masukkan tanggal_lahir : ";
    cin >> tgl_lahir;
    cout << "masukkan bln_lahir (contoh 'juli -> 07') : ";
    cin >> bln_lahir;
    tentukan_zodiak();
    return 0;
}
// Fungsi untuk menentukan zodiak
void tentukan_zodiak(){
// Penentuan zodiak berdasarkan tanggal kelahiran
for (int i = 0; i < jumlah_zodiak; i++)
{
    if (bln_lahir == daftar_zodiak[i].tanggal_selesai)
    {
        if (tgl_lahir >= daftar_zodiak[i].tanggal_mulai)
        {
            cout << "Zodiak Anda adalah: " << daftar_zodiak[i].nama << endl;
            break;
        }
        else if (i == 0)
        {
            cout << "Zodiak Anda adalah: " << daftar_zodiak[11].nama << endl;
            break;
        }
        else
        {
            cout << "Zodiak Anda adalah: " << daftar_zodiak[i - 1].nama << endl;
            break;
        }
    }
}}
