/*

Author @Badshah Aman

*/

#include <bits/stdc++.h>
using namespace std;

void Triplets(int arr[], int count){
    bool check = true;
    for (int i = 0; i < count-2; i++)
    {
        for (int j = i + 1; j < count-1; j++)
        {
            for (int k = j + 1; k < count; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[k] << endl;
                    check = true;     
                }
                
            }
            
        }
        
    }
    if (check == false)
    {
        cout << "Thanos Entered the Lobby";
    }
}

int main(){
    int arr[] = {-1, 12, 5, 7, -2, -4, 5, 1};
    int count = sizeof(arr)/sizeof(arr[0]);
    Triplets(arr, count);
    return 0;
}