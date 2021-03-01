  #include<iostream>
using namespace std;
int main()
{
	int i;
	int SN;
	int arr[10];

	cout<<" Enter the numbers you want .";
	cout<<endl;
	
	for(i=0; i<10; i++)
	{
	  cout<<" Enter the "<<i+1<<" number : ";
	  cin>>arr[i];
	}
	
	cout<< "Put the nubmer that you want search and its location."<<endl;
	cin>>SN;
	
	for(i=0; i<10; i++)
	{
		if(arr[i] == SN)
		{
			cout<<"Search number and it's Position Is :"<< (i+1) <<endl;
		}
	}
	return 0;
}
