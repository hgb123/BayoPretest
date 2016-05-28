#include<iostream>
#include<random>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() {
	freopen("inp.txt","w",stdout);
	mt19937 mt_rand(time(NULL));
	srand(time(NULL));

	for (unsigned long int i=1;i<=1000000;i++) {

		printf("%lu\n",mt_rand());
		
	}

	return 0;
}