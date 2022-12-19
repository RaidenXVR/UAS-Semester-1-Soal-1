#include <iostream>

using namespace std;

void transpose();

int main(){
	transpose();
	
}

void transpose() {
	//initiation
	int kol, bar;
	cin>>bar;
	cin>>kol;
	int mat[bar][kol];
	//input
	for (int i=0;i<bar;i++){
		for (int j=0;j<kol;j++){
			cin>>mat[i][j];
		}
	}
	//temporary array
	int arr[kol][bar];
	
	//output
	for (int i=0;i<bar;i++){
		cout<<endl;
		for (int j=0;j<kol;j++){
			cout<<mat[i][j]<<" ";
		}
	}
	//transpose output
	cout<<endl;
	for (int i=0;i<kol;i++){
		cout<<endl;
		for (int j=0;j<bar;j++){
			cout<<mat[j][i]<<" ";
		}
	}
	
}

