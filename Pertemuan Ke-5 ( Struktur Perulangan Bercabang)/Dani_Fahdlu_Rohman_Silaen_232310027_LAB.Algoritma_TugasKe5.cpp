// NO 1
//	#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//using namespace std;
//
//int main () {
//	
//	int a,b;
//	char ulang;
//	atas: 
//	cout << "\nMasukkan Bilangan =";
//	cin >> a;
//	b = a % 2;
//	printf("Nilai %d% % 2 adalah = %d", a,b);
//	printf("\nIngin Hitung lagi (Y/T) : ");
//	ulang = getche ();
//	if (ulang == 'Y' || ulang == 'y') {
//		goto atas;
//	}
//	getch(); 
//}
//
//
// NO 2
//#include <iostream>
//using namespace std;
//int main(){
//	int c = 0;
//	for (int i = 1; i <= 20; i++) {
//		if (i%2==1) {
//			cout << i << " ";
//			c += i;
//		}
//	}
//	cout << " = " << c;
//}
//
//
// NO 3
//#include <iostream>
//using namespace std;
//
//int main () {
//    int x = 0; 
//
//    for (int i = 1; i <= 20; i++) {
//        if (i % 2 == 0) {
//            cout << i << " ";
//            x += i;
//        }
//    }
//
//    cout << " = " << x;
//    return 0;
//}
//	
//	
// NO 4
//	#include <stdio.h>
//#include <conio.h>
//int main() {
//	int a = 3, b = 2, c = 1, bil;
//	printf("Bil-A | Bil-B | Bil-C\n");
//	printf("----------------------------");
//	for (bil =1; bil <= 10; ++bil) {
//		a +=b, b += c, c += 2;
//		printf("\n%d\t| %d\t| %d", a,b,c);
//		if(c == 13) {
//			break;
//		}
//	}
//	getche();
//}
//
//
// NO 5
//#include <iostream>
//using namespace std;
//
//int main() {
//    int x, bil=0;	// Mendeklarasikan variabel x dan bil dengan tipe data integer dan memberikan nilai awal 0
//    
//    cout << "Masukkan Bilangan Pembatas Akhir : ";	// Menampilkan pesan untuk meminta input dari pengguna
//    cin >> x;	// Mengambil input dari pengguna dan menyimpannya ke variabel x
//    
//    do {	// Memulai blok do-while loop
//        if (bil > x)	// Jika nilai bil lebih besar dari x
//            break;	// Menghentikan loop jika kondisi terpenuhi
//        cout << bil << " ";	// Menampilkan nilai bil di layar, diikuti dengan spasi
//        bil += 4;	// Menambahkan nilai 4 ke bil
//    } while(bil <= x);	// Melakukan loop selama nilai bil masih kurang dari atau sama dengan x
//    
//    getchar();	// Mengambil satu karakter yang diinputkan oleh pengguna
//    return 0;	// Mengembalikan nilai 0 untuk menunjukkan bahwa program berakhir dengan sukses
//}
//

