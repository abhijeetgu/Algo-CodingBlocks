#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=0;
    while(arr[j]<=arr[j+1])
    {
        j++;
    }
    if(j==n-1)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }


	return 0;
}
