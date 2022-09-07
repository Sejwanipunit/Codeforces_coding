#include <bits/stdc++.h>

#define R 3
#define C 3

using namespace std;


void printresult(string arr[R][C], int m, int n, string result[R]){

    result[m] = arr[m][n];

        if(m== R-1){
            for(int i=0;i<R;i++){
                cout<<result[i]<<" ";
            }
            cout<<endl;
            return;
        }
    for(int i=0;i<C;i++){
        if(arr[m+1][i] !=""){
            printresult(arr, m+1, i, result);
        }
    } 
}

void printallsentence(string arr[R][C]){

    string result[R];

    for(int i=0;i<C;i++){
        if(arr[0][i] != ""){
            printresult(arr, 0, i, result);
        }
    }


}

int main(){
    
     string arr[R][C]  = {{"you", "we"}, 
                          {"have", "are"}, 
                          {"sleep", "eat", "drink"}};
    
    printallsentence(arr);
}