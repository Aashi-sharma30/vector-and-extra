#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";

    }
    cout<<endl;
}

int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(4);
    v1.push_back(8);
    v1.push_back(3);
display(v1);
int i=0;
int j=v1.size()-1;
while(i<=j){

//for(int i=0;i<v1.size()-1;i++){
  //  for(int j=v1.size()-1;j>=0;j--){
    int temp=v1[i];
    v1[i]=v1[j];
    v1[j]=temp;
    i++;
    j--;
}

display(v1);
}






 


