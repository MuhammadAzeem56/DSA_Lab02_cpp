//Find duplicate numbers in the array
#include<iostream>
using namespace std;
int main()
{
	int size ;
	cout << "\tEnter Size: ";
	cin >> size;
	cout<<"\tEnter array elements: ";
		int arr[size];
			for (int i=0 ; i<size ; i++){
		cin>>arr[i];
	}
	cout << endl;
	cout<<"\tArray is : ";
	for (int i=0 ; i<size ; i++)
	{
		cout << arr[i] << " ";
	}
	cout<<endl;
	cout<<endl;
	cout<<"\tThe duplicate numbers are: ";
	for (int i=0 ; i<size ; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if ( arr[i]== arr[j])
		     {
		     	cout<<arr[i]<<" ";
			 }
		}
	}
	return 0;
}
