

#include<bits/stdc++.h>
using namespace std;

int main(){
 /*int n;
 cin>>n;
 string s;
 cin>>s;
 int sw=0,sb=0;

 for(int i=0;i<s.size();i++){
    if(s[i]=='W') sw++;
    else {
            sb++;

    }
 }

 if(sw%2 and sb%2){
    cout<<-1;
    return 0;
 }
 if(sw==0 or sb==0){
    cout<<0;
    return 0;
 }
 char c;
 if(sw%2==0 and sb%2==0){
    if(sw<=sb) c='W';
    else c='B';
 }
 else{
    if(sw%2==0) c='W';
    else c='B';
 }
 vector<int>v;
 for(int i=0;i<s.size()-1;i++){
    if(s[i]==c and s[i+1]==c){
        if(c=='W'){
            s[i]='B';
            s[i+1]='B';
            v.push_back(i+1);
        }
        else {
            s[i]='W';
            s[i+1]='W';
            v.push_back(i+1);
        }
    }
 }
 while(1){
    int l=-5;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==c){
            l=i;
 break;
        }
    }
    if(l==-5) break;
    for(int i=l;i<s.size();i++){
        if(s[i+1]==c){
            v.push_back(i+1);
             if(c=='W'){
            s[i]='B';
            s[i+1]='B';

        }
        else {
            s[i]='W';
            s[i+1]='W';

        }
        break;
        }
        else{
            v.push_back(i+1);
            if(c=='W'){
                s[i+1]='W';
                s[i]='B';
            }
            else{
                s[i+1]='B';
                s[i]='W';
            }
        }
    }
 }
 cout<<v.size()<<endl;
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
*/
int n;
cin>>n;
string s;
cin>>s;
vector<int>v;
for(int i=0;i<s.size()-1;i++){
    if(s[i]!='W'){
        v.push_back(i+1);
        s[i]='W';
        if(s[i+1]=='W') s[i+1]='B';
        else s[i+1]='W';
    }
}
if(s[s.size()-1]!='W' and s.size()%2==0) {
        cout<<-1;
return 0;
}
if(s[s.size()-1]!='W' and s.size()%2==1){
    for(int i=1;i<s.size();i+=2) v.push_back(i);
}

    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";

}
