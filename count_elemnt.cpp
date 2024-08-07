#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i;
    vector<int>v;
    int n;
    cout<<"enter n";
    cin>>n;
    for( i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<<"enter x";
    int x;
    cin>>x;
    int count=1;
    if(v[i]>x){
        count+=1;
        cout<<count;
    }

    
}