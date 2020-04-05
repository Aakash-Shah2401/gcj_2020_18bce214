#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t;
    int tc = 1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        long long int sumr = 0;
        long long int sumc = 0;
        long long int trace = 0;
        int countr = 0;
        int countd = 0;
        long long int fsum = ((n)*(n+1))/2;
        int tmp[n+1];
        for(int i=0;i<n+1;i++)
        {
            tmp[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
                tmp[arr[i][j]] = 1;
                sumr += arr[i][j];
                if(i==j)
                {
                    trace += arr[i][j];
                }
            }
            for(int k=1;k<n+1;k++)
            {
                if(tmp[k]==0)
                {
                    countr++;
                    break;
                }
            }
            for(int p=0;p<n+1;p++)
            {
                tmp[p]=0;
            }
        }
        for(int j=0;j<n;j++)
        {
            sumc=0;
            for(int i=0;i<n;i++)
            {
                tmp[arr[i][j]]=1;
            }
            for(int k=1;k<n+1;k++)
            {
                if(tmp[k]==0)
                {
                    countd++;
                    break;
                }
            }
            for(int p=0;p<n+1;p++)
            {
                tmp[p]=0;
            }
        }
        cout<<"Case #"<<tc<<": "<<trace<<" "<<countr<<" "<<countd<<endl;
        tc++;
    }
}
