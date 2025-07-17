#include <iostream>
using namespace std ;
int main()
{
    int size ;
    
    cout << "Enter size of array : " ;
    cin >> size ;
    
    int arr[size] ;
    int rev_arr[size] ;
    
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
        rev_arr[(size - 1)-i] = arr[i] ;
    }
    
    for(int i = 0 ; i < size ; i++){
        cout << rev_arr[i] <<" ";
    }

    return 0;
}
