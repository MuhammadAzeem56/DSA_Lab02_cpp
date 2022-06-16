//common elemetns between two arrays of intigers
#include<iostream>
using namespace std;
int main()
{
	int size,num ;
	cout << "\tEnter Size: ";
	cin >> size;
	cout<<"\tEnter 1st Array elements: ";
		int arr1[size];
		for (int i=0 ; i<size ; i++)
		{
		cin>>arr1[i];
	    }
	cout << endl;
	
	cout<<"\t1st Array is : ";
	for (int i=0 ; i<size ; i++)
	{
		cout << arr1[i] << " ";
	}
	cout<<endl;
	cout<<endl;
	    int arr2[size];
		cout<<"\tEnter 2nd Array elements: ";
		for (int j=0 ; j<size ; j++){
		cin>>arr2[j];
	}
	cout << endl;
	
	cout<<"\t2nd Array is : ";
	for (int j=0 ; j<size ; j++)
	{
		cout << arr2[j] << " ";	
	}
	cout<<endl;
	cout<<endl;
	cout<<"\tCommon elements between two arrays of integers are: ";
	for (int i=0 ; i<size ; i++)
	for (int j=0 ; j<size ; j++)
	if (arr1[i]==arr2[j])
	{ arr2[num++]=arr1[j];
	}
	for (int k=0 ; k<num ; k++)
	{
	cout<<arr2[k]<<" ";
	}
	return 0;
}