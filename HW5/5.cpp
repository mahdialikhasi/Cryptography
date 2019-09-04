#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
int discreteLogarithm(int p, int a, int b) { 
	long long int ai = 1;
	for (int i = 1; i < p; ++i)
	{
		ai *= a;
		long long int res = ai % p;
		if(res == b)
			return i;
		ai = res;
	}
	return -1; 
} 

// Driver code 
int main() 
{ 
	int p, a,b;
	cin >> p >> a >> b; 
	cout << discreteLogarithm(p, a, b) << endl; 
} 
