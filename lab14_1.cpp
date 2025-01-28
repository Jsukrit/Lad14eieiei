#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	int start = 1;
	while(start < N){
		int now = start;
		while(now > 0){
			if(d[now] > d[now-1]){
				T temp = d[now];
				d[now] = d[now-1];
				d[now-1] = temp; 
			}
			else{
				break;
			}
			now--;
		}
		cout << "Pass " << start << ":";
		for(int i = 0; i < 10; i++) cout << d[i] << " ";
		cout << endl;
		start++;
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
