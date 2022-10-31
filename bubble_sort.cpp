#include<iostream>

using namespace std;

int *bubble_sort(int arr[],int n){
    int temp,count=1;
    while (count<n-1){
        for (int i = 0; i <n-count ; i++){
            if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            }
        }
        count++;
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
    int *sorted_arr = bubble_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<sorted_arr[i]<<" ";

    }
    return 0;
}