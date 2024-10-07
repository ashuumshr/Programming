//string : thunder
// int : 5
// dict d: wonder, under, jungle, upper, number
// return under
#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

string rhyming(vector <string> d, string s){
    string ans; 
    int maxCount;   
    int preMaxCount=0;
    int slen=s.length();
    for(string a: d){
        int alen=a.length();
        maxCount=0;
        for(int i=slen-1,j=alen-1; (i>=0 && j>=0); i--,j--){
            if(s[i]==a[j]){
                maxCount++;
            }
            else{
                break;
            }
        }
        if(maxCount>preMaxCount){
            preMaxCount=maxCount;
            ans=a;
        }
    }
    return ans;
}
int main(){
    string s= "thunder";
    vector<string> d={"upper", "tinder", "under", "jungle"};
    cout<<rhyming(d,s);
return 0;
}