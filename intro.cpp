#include <iostream>
using namespace std;
bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
char getMaxOccCharacter(string s){
int arr[26]={0};

//create an array of count of characters
for(int i=0;i<s.length();i++){
    int ch=s[i];
    //lowercase
    int number=0;
     number=ch-'a';
    arr[number]++;
}
//find maximum occ character
int maxi=-1,ans=0;
for(int i=0;i<26;i++){
    if(maxi<arr[i]){
        ans=i;
        maxi=arr[i];
    }
}

char finalAns='a'+ans;
return finalAns;

}


int main()
{
string s;
cin>>s;
cout<<getMaxOccCharacter(s)<<endl;
    return 0;
}
