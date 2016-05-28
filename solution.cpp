#include<bits/stdc++.h> // Use bits/stdc++.h lib, MX constant for short
#define MX 500000
using namespace std;
int main() {

	/* Init */
	freopen("inp.txt","r",stdin);	// Use inp.txt as standard input stream, 
	freopen("out.txt","w",stdout); 	// Prepare output file
	FILE *tempFile = fopen("temp.txt","w");	// Create temp file for splitted data
	long long int temp;
	vector<long int> a;	// A container variable for array of integer
	unsigned int t = MX;
	/* end of init */

	/* Step 1: Read half of the input data, 2MB */
	while(t--) {
		cin>>temp;
		a.push_back(temp);
	}
	sort(a.begin(),a.begin()+a.size()); // Sort it using function in STL algorithm.h
	for (unsigned int i=0;i<a.size();i++)	// Save into a temporary file
		fprintf(tempFile,"%ld\n",a[i]);		// ..we'll use later
	/* end of Step 1 */

	return 0;	
}



