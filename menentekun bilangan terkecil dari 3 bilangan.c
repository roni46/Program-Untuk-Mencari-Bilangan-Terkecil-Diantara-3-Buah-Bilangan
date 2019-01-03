#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main()

{
printf("PROGRAM MENGUBAH BILANGAN PECAHAN\n");
printf("BY M Achmad Sahroni NIM 311620782\n");
printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");

	int bil1, bil2, bil3, terkecil;

	cout<<"Masukkan Bilangan 1 : ";

	cin>>bil1;

	cout<<"Masukkan Bilangan 2 : ";

	cin>>bil2;

	cout<<"Masukkan Bilangan 3 : ";

	cin>>bil3;



	{

		if(bil1 < bil2)

		terkecil = bil1;



		else

		terkecil = bil2;



		if(bil3 < terkecil)

		terkecil = bil3;



		cout<<endl;

		cout<<"Nilai Terkecil = "<<terkecil;cout<<endl;

	}

	return 0;

}

