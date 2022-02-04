#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string a = "Tetrahedron";
	string b = "Cube";
	string c = "Octahedron";
	string d = "Dodecahedron";
	string e = "Icosahedron";
	
	cin>>n;
	int count =0;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s==a){
			count = count+4;
		}
		else if(s==b){
			count += 6;
		}
		else if(s==c){
			count += 8;
		}
		else if(s==d){
			count += 12;
		}
		else if(s==e){
			count += 20;
		}
		
	}
	cout<<count;
}
