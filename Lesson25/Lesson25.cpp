#include <iostream>
#include <fstream>
#include <vector>


// ofstream вывести из файла
// fstream ввести в файл


/*
ofstream fout;
	fout.open("C:\\example\\example.txt");
	if (fout) {
		int output = 12;
		std::cin >> output;
		fout << output;
		fout.close();
	}
	else {
		cout << "error writing to file\n";
	}

	ifstream fin;
	fin.open("C:\\example\\example.txt");
	if (fin) {
		int input;
		fin >> input;
		fin.close();
		cout << input;
	}
	else {
		cout << "error reading from to file\n";
	}

	cout << endl;
*/
using namespace std;
int main()
{
	vector<int> vec = { 15,25,35,50 };
	for (int item : vec) {
		cout << item << " ";
	}

	ofstream fout;
	fout.open("C:\\example\\example.txt");
	if (fout) {
		for (int i = 0; i < vec.size(); i++) {
			fout << vec[i] << " ";
			if (i < vec.size() - 1)
				fout << " ";
		}
		fout.close();
	}
	else {
		cout << "error writing to file\n";
	}
	cout << endl;

	ifstream fin;
	fin.open("C:\\example\\example.txt");
	if (fin) {
		while (!fin.eof()) {
			int input;
			fin >> input;
			cout << input << " ";
		}
		fin.close();
	}
	else {
		cout << "error reading from to file\n";
	}
}