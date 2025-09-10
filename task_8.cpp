#include <iostream>
using namespace std;
bool find(string sent,string word){
bool found;
    if (word.size() > sent.size()) return false;
   for(int i=0 ; i<=sent.size()-word.size();i++)
   {    found = true;   
     for(int k=0;k<word.size();k++){
      if(sent[i+k]!=word[k])
         {  found =false;
            break; 
        }
     
   } 
if (found)
    return true;
}
return found;
} 
int main() {
    string sent = "Welcome to DSA Lab 1!" ;
    string word = "Welcome";
    if(find( sent, word))
         cout<<"found"<<endl;
    else
         cout<<"Not found"<<endl;
         return 0;
}
