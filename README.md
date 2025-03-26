# Program Kalkulator Sederhana
---
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
    std : :cout << "Subtraction: " << calc.subtract(num1, num2) << std : : end1;
    std : :cout << "Multiplication: " << calc.multiply(num1, num2) << std : : end1;
    std : :cout << "Division: " << calc.divide(num1, num2) << std : : end1;

    reutrn 0;
}
```
* **Calculator calc**
  * Membuat objek calc dari kelas Calculator
* **Mendeklarasikan variabel num1 dan num2**
  * calc.add(num1, num2) &rarr; Hasilnya 10 + 5
    <br>= 15<br />
  * calc.subtract(num1, num2) &rarr; Hasilnya 10 - 5
    <br>= 5<br />
  * calc.multiply(num1, num2) &rarr; Hasilnya 10 * 5
    <br>= 50<br />
  * calc.divide(num1, num2)&rarr; Hasilnya 10 / 5
    <br>= 2<br />
---
# 📌4. Bagaimana kode ini dibuat?
**Konsep yang digunakan**
1. **Object-Oriented Programing (OOP)**
* program dibuat dengan pendekatan **kelas dan objek**
* Calculator adalah kelas, sedangkan calc adalah objek dari kelas tersebut
* Kelas memiliki metode untuk operasi matematika, yang bisa dipanggil oleh objeknya
2. **Encapsulation (Pembungkusan Data)**
*  Semua operasi didefinisikan dalam satu kelas, sehingga **kode lebih terorganisir dan mudah digunakan kembali**
3. **Error Hancling**
* Dala metode divide(), terdapat **pengecekan pembagian oleh program agar tidak pecah**
---
# 📌5. Contoh OutPut
<br>Jika program dijalankan, output yang dihasilkan adalah :<br />
```
Addition : 10
Subtraction : 10
Multiplication : 50
Division : 2
```
<br>Jika nilai num2 = 0, maka outputnya akan seperti ini :
```
Addition : 10
Subtraction : 10
Multipicaton : 0
Error : Division by zero!
Division : 0
```




