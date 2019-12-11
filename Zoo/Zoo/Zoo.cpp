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

int animalRareityInZoos[MAX_M];

int main()
{
	cin >> n >> m >> k;

	// Reading //
	for (int i = 0; i < k; ++i)
	{
		int zooIndex, animalIndex, animalCount;
		cin >> zooIndex >> animalIndex >> animalCount;
		zoos[zooIndex - 1].animals[animalIndex - 1].animalCount += animalCount;
		zoos[zooIndex - 1].animalCount += animalCount;
	}

	// 1st task implementation //
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

	// 2nd task implementation //
	// Generating array //
	for (int i = 0; i < m; ++i)
	{
		animalRareityInZoos[i] = 0;
		for (int j = 0; j < n; ++j)
		{
			if (zoos[j].animals[i].animalCount != 0)
			{
				++animalRareityInZoos[i];
			}
		}
	}

	// Selecting minimum //
	int minAnimalRareityInZoos = 101;
	int minAnimalRareityInZoosIndex = -1;
	for (int i = 0; i < MAX_M; ++i)
	{
		if (animalRareityInZoos[i] < minAnimalRareityInZoos && animalRareityInZoos[i] != 0)
		{
			minAnimalRareityInZoos = animalRareityInZoos[i];
			minAnimalRareityInZoosIndex = i;
		}
	}

	// Counting minimum valus in the given index //
	int minAnimalRareityInZoosCount = 0;
	for (int i = 0; i < n; ++i)
	{
		if (zoos[i].animals[minAnimalRareityInZoosIndex].animalCount == minAnimalRareityInZoos)
		{
			++minAnimalRareityInZoosCount;
		}
	}


	// 1st task output //
	cout << "#" << endl;
	cout << maxAnimalCountIndex + 1 << endl;

	// 2st task output //
	cout << "#" << endl;
	cout << minAnimalRareityInZoosCount << endl;

	// 3st task output //
	cout << "#" << endl;

	// 4st task output //
	cout << "#" << endl;

	// 5st task output //
	cout << "#" << endl;

	return 0;
}
