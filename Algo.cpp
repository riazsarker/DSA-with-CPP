#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
vector<int>v;
v.push_back(1);
v.push_back(13);
v.push_back(12);
v.push_back(2);


cout<<binary_search(v.begin(),v.end(),6)<<endl;
cout<<"lower bound"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
int a=4,b=5;

cout<<"max "<<max(a,b);
swap(a,b);
cout <<endl<<"a"<<a<<endl;

string abcd="abcd";
reverse(abcd.begin(),abcd.end());

cout<<"String "<<abcd<<endl;

rotate(v.begin(),v.begin()+1,v.end());

cout<<"after rotate"<<endl;
for(int i:v){
    cout<<i<<endl;
}


}
