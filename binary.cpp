#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    int n;
    int key;
    cout << "Enter size: ";
    cin >> n;
    a.resize(n);
    cout << "Enter the elements : \n";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cout << "Enter the key: ";
    cin >> key;
    int low = 0;
    int high = n - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(key < a[mid])
        {
            high = mid - 1;
        }
        else if(key > a[mid])
        {
            low = mid + 1;
        }
        else if(key == a[mid])
        {
            cout << "Found";
            return 0;
        }
    }
    cout << "Not found";
    return 0; 
}
