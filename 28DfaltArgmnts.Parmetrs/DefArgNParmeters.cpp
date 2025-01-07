#include <iostream>
using namespace std;


int volume(int l=1, int w=1, int h=1); // These are default parameters

int main()

{
	cout << volume (5,6); //user automatically goes in order. Overwrites default values
}

int volume (int l, int w, int h) {
	return l * w * h;
}