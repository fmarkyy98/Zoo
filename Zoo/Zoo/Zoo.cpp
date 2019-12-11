#include <iostream>

using namespace std;

const int MAX_N = 100;
const int MAX_M = 100;
const int MAX_K = 10000;

struct Animal
{
	//int animalID = -1; index represents it.
	int animalCount = 0;
};

struct Zoo
{
	//int zooID = -1; index represents it.
	int animalCount = 0;
	Animal animals[MAX_M];
};

Zoo zoos[MAX_N];
int n, m, k;

int main()
{
	cin >> n >> m >> k;

	for (int i = 0; i < k; ++i)
	{
		int zooIndex, animalIndex, animalCount;
		cin >> zooIndex >> animalIndex >> animalCount;
		zoos[zooIndex - 1].animals[animalIndex - 1].animalCount += animalCount;
		zoos[zooIndex - 1].animalCount += animalCount;
	}

	int maxAnimalCount = -1;
	int maxAnimalCountIndex = 0;
	for (int i = 0; i < n; ++i)
	{
		if (zoos[i].animalCount > maxAnimalCount)
		{
			maxAnimalCount = zoos[i].animalCount;
			maxAnimalCountIndex = i;
		}
	}









	cout << "#" << endl;
	cout << maxAnimalCountIndex + 1 << endl;
	cout << "#" << endl;
	cout << "#" << endl; 
	cout << "#" << endl;
	cout << "#" << endl;
	return 0;
}
