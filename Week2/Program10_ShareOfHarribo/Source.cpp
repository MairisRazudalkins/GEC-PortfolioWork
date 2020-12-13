#include <iostream>

using namespace std;

int main()
{
	int hariboPackets = 40, students = 14;
	cout << "Packs per student:  " << hariboPackets / students << "\nRemaining packs: " << hariboPackets % students << endl;

	return 0;
}