//difference between the largest and smallest values in an array of integers
#include<iostream>
using namespace std;

int main()
{	int size,Difference ;
	cout << "\tEnter Size: ";
	cin >> size;
	cout<<"\tEnter Array elements: ";
		int arr[size];
		for (int i=0 ; i<size ; i++)
		{
		cin>>arr[i];
	    }
	cout << endl;
	for(int i=0;i<size;i++)
	{
	  for (int j=i+1; j<size; j++)
	 {

	  if (arr[i]>arr[j])
	  swap(arr[i],arr[j]);
	 }
}
	cout<<"\tSorted array is :";
		for (int i=0 ; i<size ; i++){
		cout << arr[i] <<" ";

	}
	cout<<endl;
	cout<<endl;
	cout<<"\tThe difference between the largest and smallest values in an array of integers is : ";
	int max=arr[0];

	for (int i=0 ; i<size ; i++)
	{
		if (arr[i]>max)
		max=arr[i];
	}
	int min=arr[0];
	for (int i=0 ; i<size ; i++)
	{
		if (arr[i]<min)
		min=arr[i];
	}
	Difference=max-min;
	cout<<Difference;
	cout<<endl;

    return 0;
}
