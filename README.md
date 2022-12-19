# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemrograman
<br> Nama		: Fitran Alfian Nizar
<br>NIM		:	 1227050047
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum

## Source Code

```

#include <iostream>

using namespace std;

void transpose();

int main(){
	transpose();
	
}

void transpose() {
	//initiation
	int kol, bar;
	cout<<"Masukan Jumlah Baris: ";
	cin>>bar;
	cout<<"Masukan Jumlah Kolom: ";
	cin>>kol;
	int mat[bar][kol];
	//input
	for (int i=0;i<bar;i++){
		for (int j=0;j<kol;j++){
			cout<<"Masukan Data: ";
			cin>>mat[i][j];
		}
	}
	//temporary array
	int arr[kol][bar];
	
	//output
	cout<<"Matriks Sebelum Diubah: ";
	for (int i=0;i<bar;i++){
		cout<<endl;
		for (int j=0;j<kol;j++){
			cout<<mat[i][j]<<" ";
		}
	}
	cout<<endl<<endl;
	//transpose output
	cout<<"Matriks Sesudah Diubah: "<<endl;
	for (int i=0;i<kol;i++){
		cout<<endl;
		for (int j=0;j<bar;j++){
			cout<<mat[j][i]<<" ";
		}
	}
	
}

```

## Output
