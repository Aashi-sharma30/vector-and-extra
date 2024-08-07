// find the doublet in the array whose sum is equal to the given value of x
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter target element";
    cin>>x;
    vector<int>v;
    int n;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q); 

    }
    for(int i=0;i<v.size()-1;i++){ // last index se ek phle tk
        for(int j=i+1;j<v.size();j++){ // last index tak
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;        
            }
        }
    }

}
