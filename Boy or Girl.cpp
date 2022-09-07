#include<iostream>

using namespace std;

int main(){
	string s;
	int c=0;
   int i = 0, alphabet[26] = {0}, j;
   cin>>s;
   while (s[i] != '\0') {
      if (s[i] >= 'a' && s[i] <= 'z') {
         j = s[i] - 'a';
         ++alphabet[j];
        }
      ++i;
    }
    for (i = 0; i < 26; i++){
   if(alphabet[i]!=0){
   	c++;
   }
    }
    
    if(c%2 == 0){
    	cout<<"CHAT WITH HER!"<<endl;
	}
	else{
		cout<<"IGNORE HIM!"<<endl;
	}
}
