#include <iostream>
#include <vector>
using namespace std;
vector<int> createList(const vector<int>& arr,int key) {
    vector <int> indices;
    for(int i=0;i<(int)arr.size();i++){
        if(arr[i]==key)
           indices.push_back(i);

    }
return indices;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> val(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }
    int key ;
    cout<<"Enter key to search."<<endl;
    cin>>key;

    
    return 0;
}
