#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> arr;
    int size;
    cin>>size;

    for (int i = 0; i<size; i++) {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    map <int , int> mp;
    for (int i = 0; i<size; i++) {
        mp[arr[i]]++;
    }

    vector <int> repeated;
    vector <int> non_repeated;

    map <int, int> ::iterator iter;
    for (iter = mp.begin(); iter != mp.end(); iter++){
        if ((*iter).second > 1)
            repeated.push_back((*iter).first);
        else    
            non_repeated.push_back((*iter).first);

    }
    
    for (int i = 0; i<repeated.size(); i++) {
        cout<<repeated[i]<<' ';
    }
    cout<<endl<<endl;
    for (int i = 0; i<non_repeated.size(); i++) {
        cout<<non_repeated[i]<<' ';
    }

    
    return 0;
}