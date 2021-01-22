#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
for(int i=1;i<=N-1;i++){
 	T DRC=d[i];
	int SAO=i-1;
	while(SAO>=0&&DRC>d[SAO]){
		d[SAO+1]=d[SAO];
		SAO--;
	}
	d[SAO+1]=DRC; 
	cout<<"Pass "<<i<<":";
	for(int j=0;j<N;j++){
		cout<<d[j]<<" ";
	}
	cout<<endl;
 }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}