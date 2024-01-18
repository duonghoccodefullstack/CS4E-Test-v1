#include <iostream>
#include <string>
using namespace std;
int Tinh_tonguoc (int n) {
	
	int sum = 0;
	
	 for ( int i = 1 ; i <= n ; i ++) {
	 		if(n %i == 0) {
	 			sum += i;
			  }
	  }
	return sum;
	
}
int main () {
	int t ; cin >> t;
int n;
	for (int i =0 ; i < t; i++) {
		 	
		 cin >> n;
		 	cout << Tinh_tonguoc(n) << endl;
	 }
//	 int sum1 =Tinh_tonguoc(n); 
//	cout << sum1  << endl;

	return 0;
}
