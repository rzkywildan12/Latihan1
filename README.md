# 📌1. PENGENALAN PROGRAM
<br>Kode ini adalah implementasi kalkulator sederhana<br /> 
menggunakan **kelas (class) dalam C++**
<BR>Program ini mendukung operasi dasar :<br />
<br>✅**Penjumlahan (+)**<br />
✅**Pengurangan (-)**
<br>✅**Perkalian (*)**<br />
✅**Pembagian (/)**

---

# 📌2. STRUKTUR KODE
<br> kode ini terdiri dari dua bagian utama :<br />
1. **Kelas Calculator :** Berisi metode perhitungan
2. **Fungsi main() :** Mengambil input pengguna dan mengontrol logika program

---

# 📌3. Bagian-bagian kode
🔷 **A) Header File (3include <iostream>)**
```
#include <iostream>
```
* Digunanakan untuk input (std::cin) dan output
  <br>(std : : cout, std : : cer)<br />
* std : : cer digunakan untuk menampilkan pesan kesalahan

---

🔷 **B) Deklarasi kelas calculator**
```
class Calculator {
public :
    double add(double a, double b) { return a + b; }
    double subtract (double a, double b) {return a - B; }
    double multiply (double a, double b) {return a * b; }
    double divide (double a, double b) {reutrn a / b; }
        if (b == 0) {
            std : : cerr << "Error: Division by zero!" << std : :end1;
            return 0;
```
🔷 **C) Fungsi Main()**
```
int main () {
    Calculator calc;

    double num1 = 10, num2 = 5;

    std : :cout << "Addition: " << calc.add(num1, num2) << std : : end1;


