//insertion sort by assending
#include <iostream>
using namespace std;
int main (){
	int n,j,current;
	cout<<"\n Enter the size of array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter unsorted array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];	}
	for(int i=1;i<n;i++){
		current=arr[i];
		j=(i-1);	
		while(current>arr[j] && j>=0 ){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
		for(int k=0;k<n;k++){
					cout<<arr[k]<<",";
				}
				cout<<endl;
		}
		cout<<"Display the  final insertion sort:"<<endl;
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ,";	
		}
		return 0;
	}
