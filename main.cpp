#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
	ofstream result;
	result.open("rectangulos.out");
	ifstream input("rectangulos_example.in");
	int n, x, y;
	string config;
	getline(input, config);
	stringstream configvals(config);
	configvals >> n >> x >> y;
	cout << config;

}