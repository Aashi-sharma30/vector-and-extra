// reverse an array from kth element of array
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
    void reversepart(int i,int j,vector<int> & v){
        while(i<=j){
            int temp=v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    int main(){ 
        vector<int>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
                
            }
            display(v);
            int k;
            cin>>k;
            reversepart(0,n-k-1,v);
            reversepart(n-k,n-1,v);
            reversepart(0,n-1,v);
            display(v);


        }
        // if (k>n){
          //  k=k%n;
        //}


 