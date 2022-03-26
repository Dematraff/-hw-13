// ноут hw 13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
 using namespace std;
 void FillArray(int** array1, int l, int w);
 void PrintArray(int** array1, int l, int w);
 int main()
 {
	 int l, w;
	 cin >> l >> w;\


	 int** array1 = new int* [l];
	 for (int i = 0; i < l; i++) {
		 array1[i] = new int[w];
	 }
	 FillArray(array1, l, w);
	 PrintArray(array1, l, w);
 }

 void FillArray(int** array1, int l, int w) {
	 for (int i = 0; i < l; i++) {
		 for (int j = 0; j < w; j++) {
			 array1[i][j] = (rand()) ;
		 }
	 }
 }

 void PrintArray(int** array1, int l, int w) {
	 for (int i = 0; i < l; i++) {
		 for (int j = 0; j < w; j++) {
			 cout <<array1[i][j] << " ";
		 }
		 cout << endl;
	 }
 }