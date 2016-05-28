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

	/* Step 2: Read the rest of the input data, still 2MB */
	a.erase(a.begin(),a.begin()+a.size());
	t = MX;
	while(t--) {
		cin>>temp;
		a.push_back(temp);
	}
	sort(a.begin(),a.begin()+a.size());
	/* end of Step 2 */

	/* Step 3: Let's solve */
	t = 0;
	fclose(tempFile);
	FILE *readTemp = fopen("temp.txt","r");
	// Merge
	long int j = 0;
	fscanf(readTemp,"%lld",&temp);	
	while (t<MX&&j<MX) {	// t and j as iterator
		if (a[t]<temp) {
			cout<<a[t++]<<endl;
		} else {
			cout<<temp<<endl;
			j++;
			fscanf(readTemp,"%lld",&temp);
		}
	}
	if (t<MX) {
		for (unsigned int i=t;i<a.size();i++)	// Output the rest
			cout<<a[i]<<endl;
	} else {
		while (fscanf(readTemp,"%lld",&temp))	// Output the rest
			cout<<temp<<endl;
	}
	/* end of Step 3*/
	
	fclose(tempFile);
	remove("temp.txt");

	return 0;	
}



