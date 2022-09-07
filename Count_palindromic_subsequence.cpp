// { Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
long long int printSubsequence(string input, string output)
{
    int n = input.size();
    int count =0;
	if (input.empty()) {
	   string a = output;
	   reverse(a.begin(), a.end());
	   if(output.compare(a)){
	       count++;
	   }
	}

	printSubsequence(input.substr(1), output + input[0]);

	printSubsequence(input.substr(1), output);
	
	return count;
}

    long long int  countPS(string str)
    {
       string input = str;
       string output = "";
       return printSubsequence(input, output);
    }
     
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}  // } Driver Code Ends