#include<iostream>

using namespace std;

int main(){
    int size ;
    cout << "Enter Size of Array : ";
    cin >> size ;
    
    int arr[size] ;
    
    for(int index = 0 ; index < size ; index++){
        cin >> arr[index];
    }
    
    int min = 0;
    int max = 0 ;
    for(int index = 0 ; index < size ; index++){
        if(arr[index] < min){
            min = arr[index];
        }
        if(arr[index] > max){
            max = arr[index];
        }
    }
    cout << min << " " << max ;
    
    return 0 ;
}
