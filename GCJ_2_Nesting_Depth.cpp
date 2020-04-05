#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int main()
{
    int t;
        cin>>t;
        int temp = t;
        while(t--)
        {
            string s;
            string ans="";
            cin>>s;
            for(int i=0;i<s.length();i++)
            {
                if(i==0)
                {
                    for(int j=0;j<s[i]-'0';j++)
                    {
                        ans+="(";
                    }
                    ans+=s[i];
                }
                else
                {
                    int p = s[i]-s[i-1];
                    if(p<0)
                    {
                        for(int i=0;i<abs(p);i++)
                        {
                            ans+=")";
                        }
                        ans+=s[i];
                    }
                    else
                    {
                        for(int i=0;i<p;i++)
                        {
                            ans+="(";
                        }
                        ans+=s[i];
                    }

                }
            }
            for(int i=0;i<s[s.length()-1]-'0';i++){
                ans+=")";
            }
            cout<<"Case #"<<temp-t<<": ";
            cout<<ans<<endl;
        }
}



