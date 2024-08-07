//last_occurance_of_x_in_array(last index at which x prresents)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7); 
    v.push_back(6);
    int x=6;
    int n,i;
    int index=-1;
    for(i=0;i<v.size();i++){
    if(v[i]==x) 
    index=i;
    } 
    cout<<index;
}
//second approach
//for(int i=v.size-1();i>0;i--){
  //  if(v[i]==x)
    //cout<<i;
//}
//  break;
