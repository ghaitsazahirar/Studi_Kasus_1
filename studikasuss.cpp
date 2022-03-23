#include <iostream>
#include <fstream>
using namespace std;  
        
int main() {  
	fstream myFile;
	myFile.open("Struk.txt", ios::out);
  	long bakar,goreng, biaya, diskon, biayatotal, bayar, kembalian;  
  	int jumlah;  
  	char a,b,paket;  
   
  	cout<<"-------------------------"<<endl;  
  	cout<<"  WARUNG AYAM   "<<endl;  
  	cout<<"-------------------------"<<endl<<endl;  
   
  	cout<<"MENU PAKET:       "<<endl;  
  	cout<<"A. Ayam Goreng : Rp. 17000 "<<endl;  
  	cout<<"B. Ayam Bakar  : Rp. 21000 "<<endl;  
 
	cout<<"Pesan Ayam Goreng ?(y/t) ";
	cin>>a;
	
	if (a=='y') {
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>goreng;
		cout<<"Jumlah Harga  = "<<goreng*17000<<endl;
	}
	else {
		cout<<"Pesanan Ayam Goreng = 0\n";
		goreng=0;
	}
	cout<<"Pesan Ayam Bakar  ?(y/t) ";
	cin>>b;
	if (b=='y') {
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>bakar;
		cout<<"Jumlah Harga  = "<<bakar*17000<<endl;
	}
	else {
		cout<<"Pesanan Ayam Bakar  = 0\n";
		bakar=0;
	}
	
	  	biaya=(goreng*17000)+(bakar*21000);  
  	if(biaya>45000)  
      	{  
           diskon=0.1*biaya;  
      	}  
  	else if(biaya<50000)  
      	{  
           diskon=0*biaya;  
      	}  
 	 biayatotal=biaya-diskon;  
	cout<<"Total Pesanan : "<<endl;
	cout<<"1. Ayam Goreng : "<<goreng*17000<<endl;
	cout<<"2. Ayam Bakar  : "<<bakar*21000<<endl;
	cout<<"_______________"<<endl;
	cout<<"Total Harga    : "<<biaya<<endl;
   
  	cout<<"-------------------------"<<endl;  
  	cout<<"  WARUNG AYAM   "<<endl;  
  	cout<<"-------------------------"<<endl<<endl;  
   
	cout<<"RINCIAN PEMBAYARAN:   "<<endl;  
  	cout<<"1. Ayam Goreng : "<<goreng*17000<<endl;
	cout<<"2. Ayam Bakar  : "<<bakar*21000<<endl;  
  	cout<<"         ------------ x"<<endl;  
  	cout<<"Biaya      = "<<biaya<<endl;  
  	cout<<"Diskon 10%    = "<<diskon<<endl;  
  	cout<<"         ------------ -"<<endl;  
  	cout<<"Biaya Total   = "<<biayatotal<<endl;  
  	cout<<"Bayar      = "; cin>>bayar; kembalian=bayar-biayatotal;  
  	cout<<"         --------------"<<endl;  
  	cout<<"Uang Kembalian  = "<<kembalian<<endl; 
	
	myFile<<"Nota Pembayaran:   "<<endl;  
  	myFile<<"1. Ayam Goreng : "<<goreng*17000<<endl;
	myFile<<"2. Ayam Bakar  : "<<bakar*21000<<endl;  
  	myFile<<"         ------------ x"<<endl;  
  	myFile<<"Biaya         = "<<biaya<<endl;  
  	myFile<<"Diskon 10%    = "<<diskon<<endl;  
  	myFile<<"         ------------ -"<<endl;  
  	myFile<<"Biaya Total   = "<<biayatotal<<endl;  
  	myFile<<"Bayar         = "<<bayar;  
  	myFile<<"         --------------"<<endl;  
  	myFile<<"Uang Kembalian  = "<<kembalian<<endl;   
}
