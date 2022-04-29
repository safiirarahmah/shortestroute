 /*__________________________________________________
*                          							 *
*-------------------- Learn c++ ---------------------*
*____________________________________________________*
	
*	Nama : Safiira Rahmah Linisa	    			 *
*	NPM : 2017051015                                 *
*	Kelas : C                                        *
*	Tipe Soal B                                      *
*____________________________________________________*/
	
/*	Jarak Terpendek.
Terdapat 4 kota yang saling terhubung, yaitu: A, B, C dan D.
Diketahui jarak: kota A dan B 5km, kota A dan C 8km, kota A dan D 4km, kota B dan C 1km, kota  B dan D 7km, kota C dan D 2km.
Masukan: Kota Asal dan Kota Tujuan.
Keluaran: Semua jalur yang bisa ditempuh dan jaraknya yang terurut mulai dari jarak terpendek.

Misal,
- masukan: Kota Asal: "A" dan Kota Tujuan "D"
  keluaran: A-D: 4km, A-B-C-D: km, A-C-D: km.
- masukan: Kota Asal: "D" dan Kota Tujuan: "B"
  keluaran: D-C-B: 3km, D-A-B: 9km, D-B: 7km.
- masukan: Kota Asal: "C" dan Kota Tujuan: "A"
  keluaran: C-B-A: 6km, C-D-A: 6km, C-A: 8km.
*_________________________________________________________________________________________________________________________________*/



#include <iostream>
using namespace std;

 
int main(){

	int AB = 5;
	int AC = 8; 
	int AD = 4; 
	int BC = 1; 
	int BD = 7;  
 	int CD = 2; 
 	
 	
	char asal,tujuan;
 	
	 
 	cout<<"\n\n-----------Program Mencari Rute Jalur dan Jarak Terdekat----------\n\n";
 	cout<<"Kota A		Kota B		Kota C		Kota D\n"<<endl;
 	cout<<"Masukkan Kota Asal : ";cin>>asal;
 	cout<<"Masukkan Kota Tujuan : ";cin>>tujuan;
 	
 	if(asal=='A' && tujuan=='B'){
 		cout<<"Jalur1: A-B = "<<AB<<" km (Jarak Terpendek)"<<endl;
 		cout<<"Jalur2: A-D-C-B = "<<AD+CD+BC<<" km"<<endl;
 		cout<<"Jalur3: A-C-B = "<<AC+BC<<" km"<<endl;
	}		
	else if(asal=='A' && tujuan=='C'){
		cout<<"Jalur1: A-B-C = "<<AB+BC<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur2: A-D-C = "<<AD+CD<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur3: A-C = "<<AC<<" km (Jarak Terjauh)"<<endl;	
	}
	else if(asal=='A' && tujuan=='D'){
		cout<<"Jalur1: A-D = "<<AD<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur2: A-B-C-D = "<<AB+BC+CD<<" km"<<endl;
 		cout<<"Jalur3: A-C-D = "<<AC+CD<<" km (Jarak Terjauh)"<<endl;	
	}
	else if(asal=='B' && tujuan=='A'){
		cout<<"Jalur1: B-A = "<<AB<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur2: B-C-D-A = "<<BC+CD+AD<<" km"<<endl;
 		cout<<"Jalur3: B-C-A = "<<BC+AC<<" km (Jarak Terjauh)"<<endl;	
	}
	else if(asal=='B' && tujuan=='C'){
		cout<<"Jalur1: B-C = "<<BC<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur2: B-A-D-C = "<<AB+AD+CD<<" km"<<endl;
 		cout<<"Jalur3: B-A-C = "<<AB+AC<<" km (Jarak Terjauh)"<<endl;
	}
	else if(asal=='B' && tujuan=='D'){
		cout<<"Jalur1: B-C-D = "<<BC+CD<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur2: B-D = "<<BD<<" km"<<endl;
 		cout<<"Jalur3: B-A-D = "<<AB+AD<<" km (Jarak Terjauh)"<<endl;
	}
	else if(asal=='C' && tujuan=='A'){
		cout<<"Jalur1: C-B-A = "<<AB+BC<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur2: C-D-A = "<<AD+CD<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur3: C-A = "<<AC<<" km (Jarak Terjauh)"<<endl;
	}
	else if(asal=='C' && tujuan=='B'){
		cout<<"Jalur1: C-B = "<<BC<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur2: C-D-A-B = "<<AB+AD+CD<<" km"<<endl;
 		cout<<"Jalur3: C-A-B = "<<AB+AC<<" km (Jarak Terjauh)"<<endl;	
	}
	else if(asal=='C' && tujuan=='D'){
		cout<<"Jalur1: C-D = "<<CD<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur2: C-B-A-D = "<<BC+AB+AD<<" km"<<endl;
 		cout<<"Jalur3: C-A-D = "<<AC+AD<<" km (Jarak Terjauh)"<<endl;	
	}
	else if(asal=='D' && tujuan=='A'){
		cout<<"Jalur1: D-A = "<<AD<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur2: A-C-B-A = "<<AB+BC+CD<<" km"<<endl;
 		cout<<"Jalur3: D-C-A = "<<AC+CD<<" km (Jarak Terjauh)"<<endl;	
	}
	else if(asal=='D' && tujuan=='B'){
		cout<<"Jalur1: D-C-B = "<<BC+CD<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur2: D-B = "<<BD<<" km"<<endl;
 		cout<<"Jalur3: D-A-B = "<<AB+AD<<" km (Jarak Terjauh)"<<endl;	
	}
	else if(asal=='D' && tujuan=='C'){
		cout<<"Jalur1: D-C = "<<CD<<" km (Jarak Terdekat)"<<endl;
 		cout<<"Jalur2: D-A-B-C = "<<BC+AB+AD<<" km"<<endl;
 		cout<<"Jalur3: D-A-C = "<<AC+AD<<" km (Jarak Terjauh)"<<endl;	
	}
	else{
		cout<<"\n\n---Pilihan Kota Tidak Tersedia!!---"<<endl;
		cout<<"Pastikan kota yang anda masukkan sesuai dengan pilihan yang tersedia :)"<<endl;
		cout<<"(besar kecil huruf memengaruhi) ";
	}


return 0;
}
