#include <iostream>
#include <climits>
using namespace std;


int main(){
    int arr[10];

    for(int i=0;i<10;i++){
        cin>>arr[i];

    }

    int max=arr[0];
    int min=arr[0];
    
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<"max element is :: "<<max<<endl;
    cout<<"min element is :: "<<min<<endl;
    
    }