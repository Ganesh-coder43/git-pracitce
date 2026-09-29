#include<iostream>
using namespace std;
template <typename T>
void bubblesort(T a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                T temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
template <typename U>
void display(U arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }cout<<endl;
}
int main(){
    int arr[] = {3,2,1,6,5};
    int n = 5;
    cout<<"before sorting : ";
    display(arr,n);
    bubblesort(arr,n);
    cout<<"after sorting : ";
    display(arr,n);

    float ar[] = {3.33,22.33,10.34,6.34,5.5};
    cout<<"before sorting : ";
    display(ar,n);
    bubblesort(ar,n);
    cout<<"after sorting : ";
    display(ar,n);

    char a[] = {'u','a','b','z','w'};
    cout<<"before sorting : ";
    display(a,n);
    bubblesort(a,n);
    cout<<"after sorting : ";
    display(a,n);
    cout<<"hi h'll";//cc
    cout<<"This is a bubble sort";
    return 0;
}