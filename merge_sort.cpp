#include<iostream>

using namespace std;

int *merge(int arr[],int s,int mid,int e){

    int n1=mid-s+1;
    int n2=e-mid;

    //temp arrays
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i]=arr[s+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i]=arr[mid+1+i];
    }
    
    int i=0;
    int j=0;
    int k=s;
    while(i<n1 && j<n2){
        
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
            i++;
            k++;
    }
    while(j<n2){
        arr[k]=b[j];
            j++;
            k++;
    }
return arr;
}

int *merge_sort(int arr[],int s,int e){
    
    if(s<e){
    int mid =(s+e)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);

    merge(arr,s,mid,e);
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
    int *sorted_arr = merge_sort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<sorted_arr[i]<<" ";

    }
    return 0;
}
/*
8
6 3 9 5 2 8 7 1 
*/