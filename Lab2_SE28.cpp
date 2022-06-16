#include<iostream>
#include <conio.h>

using namespace std;
int main()
{
	int choice,size,i;
    	y:
		x:
	cout<<"Select any number :"<< endl;
	cout<<endl;
	cout<<"\t1.Enter the elements of the array"<< endl;
	cout<<"\t2.Print all even numbers in the array"<<endl;
	cout<<"\t3.Print all odd numbers in the array"<<endl;
	cout<<"\t4.Print all prime numbers in the array"<<endl;
	cout<<"\t5.Print all complete square numbers in the array "<<endl;
	cout<<"\t6.Exit";
	cout<<endl;
	cout<<"Enter your choice    ";
	cin>>choice;
	cout<<endl;
	
	if (choice>0 || choice<7)
	
	{
	switch(choice)
	{
		case 1:
		{
			cout<<"Enter the size of aaray   ";
			cin>>size;
			cout<<endl;
			cout<<"Enter array elements"<<endl;
			int arr[size];
			for (i=0;i<size;i++)
			{
			cin>>arr[i];
		    cout<<" ";
		}
		cout<<endl;
		cout<<"The array is: "<<endl;
		for( i=0 ; i<size; i++)
		{
			cout<<"The element at location ["<<i<<"] is : "<<arr[i];
			cout<<endl;
		}
	getch();	
	system("cls");
	goto x;
	}
	break;
	
	case 2:
	{ 
	cout<<"The array is : "	;
	 int arr[size];
	for( i=0 ; i<size; i++)
		{  
			cout<<arr[i];
			cout<<"  ";
		}
		cout<<endl;
		cout<<"The even numbers in the array are : ";
		for( i=0 ; i<size; i++)
		{
		
		if (arr[i]%2==0)
		cout<<arr[i]<<" ";
	}
	getch();	
	system("cls");
	goto x;
		
	}
	break;
	case 3:
		{
			cout<<"The array is : ";
			int arr[size];
	for( i=0 ; i<size; i++)
		{  
			cout<<arr[i];
			cout<<"  ";
		}
		cout<<endl;
		cout<<"The Odd numbers in the array are : ";
		for( i=0 ; i<size; i++)
		{
		
		if (arr[i]%2!=0)
		cout<<arr[i]<<" ";
	}
	getch();	
	system("cls");
	goto x;
		
	}
	break;
	
	case 4:
		{
				cout<<"The array is : ";
			int arr[size];
	for( i=0 ; i<size; i++)
		{  
			cout<<arr[i];
			cout<<"  ";
		}
		cout<<endl;
		cout<<"The prime numbers in the array are : ";
		
		for(int j=0 ; j<size ; j++)
		{
		for( i=2;i<arr[j];i++)
	        if(arr[j]%i==0)
	        	break;
	    if(arr[j]==i && arr[j]>1 )
			cout << arr[j] <<" ";
		
		}
		
			getch();	
	system("cls");
	goto x;
		
	}
	break;
		
	
	case 5:
	{ 
	cout<<"The array is : ";
			int arr[size];
	for( i=0 ; i<size; i++)
		{  
			cout<<arr[i];
			cout<<"  ";
		}
		cout<<endl;
	cout<<"The complete square numbers in the array are : ";
		for(int j=0 ; j<size ; j++){
		int i=0, temp;
		temp= i * i;
		while (temp < arr[j])
		{
			i++;
			temp = i * i;
		}
		if (temp == arr[j])
			cout << arr[j] <<" ";
	}
			getch();	
	system("cls");
	goto x;
		
	}
	break;
	
	case 6:
		exit(0);
			default:;	
	}
}
   else 
   cout<<"Enter a number between 1-6";
   goto y;
		}
