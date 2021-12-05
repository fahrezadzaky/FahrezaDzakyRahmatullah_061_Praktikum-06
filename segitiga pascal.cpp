# include <iostream>
using namespace std;

long int faktorial (int n);

	long z = 1;
	int i = 1;
	
	while(i<=n){
	
		z=z*i;
		i++
	}
	
int main(){
	int a, i, j;
	cout<<"Masukan nilai= ";
	cin>> a;
	
	for (i=0; i<a; i++) {
		for (j=0; j<a-i-1; j++){
			cout<< " ";
		}
		cout<<endl;
	}
	return 0;
}

