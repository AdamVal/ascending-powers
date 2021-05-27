#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long countDigit(long long number) {
	long long count = 0;
	while(number != 0) {
    	number = number / 10;
      	count++;
   	}
   return count;
}

unsigned long long integerPower(unsigned long long x, long long y){
	
	unsigned long long e = 1;

	for (unsigned long long i = 1; i <= y; i++){
		e *= x;
  	}

  	return (e);
}

void numberSplit(long long i, vector<int> &v){
	//rozkuskovanie cisla do array
	for(; i; i/=10)
  	v.push_back( i%10 );
  	
  	// reversnut ho
  	reverse(v.begin(), v.end());
 	return;
}

bool AscP(unsigned long long i, vector<int> &v){
	unsigned long long sum = 0;
	
	numberSplit(i, v);
	
	//spocitanie cislic v cisle 
	for(int j = 1; j <= countDigit(i); j++){
		sum += integerPower(v[j-1] , j);
	}	
	
	if(i == sum){
		return true;
		cout << sum<< endl;
	}else{
		return false;
		cout << sum<< endl;
		}
	}

int main(){
	unsigned long long i = 0;
	
	while(true){
		i++;
		vector<int> v;
		if((AscP(i, v)) == true){
			cout << i << endl;
		};
		cout <<  i << "\r";
	}
}

// inspirovane https://twitter.com/engineers_feed/status/1397538007251525633
