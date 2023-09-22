#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation

    unordered_map<string,int> m;

    //insertion
    //1
    pair<string,int> p=make_pair("riaz",3);
    m.insert(p);
    //2
    pair<string,int>pair2("love",2);
    m.insert(pair2);

    //3 
    m["mera"]=1;


    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("riaz")<<endl;
    cout<<m["unknownKey"]<<endl;
    cout<<m.at("unknownKey")<<endl;

    //size
    cout<<m.size()<<endl;
    //to check presence
    cout<<m.count("love")<<endl;

    //erase
    m.erase("love");
    cout<<m.size()<<endl;

    //iterator
    unordered_map<string,int> :: iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first <<" " <<it->second<<endl;
        it++;
    } 
 
 
    return 0;
}