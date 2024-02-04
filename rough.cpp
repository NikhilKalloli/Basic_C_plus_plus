// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

 string longestCommonPrefix(vector<string> strs) {
        if(strs.size()==1) return strs[0];

        string ans ="";
        int x=0;
        int n=strs[0].length() ,m=strs[1].length();

        while(strs[0][x]==strs[1][x] && x<n && x<m)
        {
            ans+=strs[0][x];
            x++;
        }
        if(strs.size()==2) return ans;

        int count = ans.length();
        int j = 2;
        while(j<strs.size())
        {
            int a = 0;
            while(strs[j][a]==ans[a] && a<count)
            {
                a++;
            }
            count = a;
        }
    string s = "";
    for(int i =0 ; i<count; i++)
    {
        s=s+ans[i];
    }

    return s;

        
        
 }
int main() {
    // Write C++ code here
    cout<<longestCommonPrefix({"flower","flow","flight"});
    

    return 0;
}