#include<iostream>

using namespace std;

int *selection_sort(int arr[],int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j<n ; j++) 
        {
            if (arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}

int main(){
    int n;
    cout<<"size of array: ";
    cin>>n;
    int arr[n];
    cout<<"elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int *sorted_arr = selection_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<sorted_arr[i]<<" ";

    }
    return 0;
}