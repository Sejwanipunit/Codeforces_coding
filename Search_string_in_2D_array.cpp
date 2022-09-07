#include <bits/stdc++.h>

using namespace std;


int search(string s, string a[], int row, int col, int row_max, int col_max, int id){

    int size = row_max + 1;
    int found =0;

    if(col>= 0 && row>=0 && col<=size-1 && row<=size-1 && s[id] == a[row][col]){
        char temp = s[id];
        
        a[row][col] = 0;
        id += 1;
        if(id == size-1){
            found = 1;
        }
        else{
            found += search(s,a,row+1,col,row_max,col_max,id);
            found += search(s,a,row,col+1,row_max,col_max,id);
            found += search(s,a,row,col-1,row_max,col_max,id);
            found += search(s,a,row-1,col,row_max,col_max,id);
        }

        a[row][col] = temp;
            
    }
    return found;

}

int middle(string s, string a[], int row, int col, int row_max, int col_max){

    int count = 0;
    int r,c;

    for(r= 0; r < row_max; r++)
    {
        for(c = 0; c < col_max; ++c)
        {
            count += search(s, a, r, c, row_max-1, col_max-1,0);
        }
    }
    return count;
}

int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    string a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<middle(s,a,0,0,n,n);
}