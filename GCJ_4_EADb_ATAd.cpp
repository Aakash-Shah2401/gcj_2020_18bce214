#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int b;
    cin>>t>>b;
    while(t--)
    {
        int mc = 0;
        string s;
        char str[b],strp[b];
        for(int i=0;i<b;i++)
        {
            str[i] = 'x';
            strp[i] = 'x';
        }
        for(int i=0;i<5;i++)
        {
            cout<<i+1<<"\n";
            cout.flush();
            char c;
            cin>>c;
            strp[i]=c;
            str[i]=c;
        }
        for(int i=b-1;i>=b-5;i--)
        {
            cout<<i+1<<"\n";
            cout.flush();
            char c;
            cin>>c;
            strp[i]=c;
            str[i]=c;
        }
        int count = 5;
        while(count<=(b/2)-1)
        {
            count++;
            for(int i=0;i<4;i++)
            {
                cout<<i+1<<"\n";
                cout.flush();
                char c;
                cin>>c;
                str[i]=c;
            }
            for(int i=b-1;i>=b-4;i--)
            {
                cout<<i+1<<"\n";
                cout.flush();
                char c;
                cin>>c;
                str[i]=c;
            }


            cout<<count<<"\n";
            cout.flush();
            char c;
            cin>>c;
            str[count-1]=c;


            cout<<b-count+1<<"\n";
            cout.flush();
            cin>>c;
            str[b-count]=c;

            //checking for Bit substitution
            if((str[0]!=strp[0])&&(str[1]!=strp[1])&&(str[2]!=strp[2])&&(str[3]!=strp[3])&&(str[16]!=strp[16])&&(str[17]!=strp[17])&&(str[18]!=strp[18])&&(str[19]!=strp[19]))
            {
                for(int i=4;i<count-1;i++)
                {
                    if(strp[i]=='0')
                    {
                        str[i]='1';
                    }
                    else if(strp[i]=='1')
                    {
                        str[i]='0';
                    }
                    if(strp[b-i-1]=='0')
                    {
                        str[b-i-1]='1';
                    }
                    else if(strp[b-i-1]=='1')
                    {
                        str[b-i-1]='0';
                    }
                }
            }
            else if((str[0]==strp[0])&&(str[1]==strp[1])&&(str[2]==strp[2])&&(str[3]==strp[3])&&(str[16]==strp[16])&&(str[17]==strp[17])&&(str[18]==strp[18])&&(str[19]==strp[19]))
            {
                for(int i=4;i<count-1;i++)
                {
                    str[i]=strp[i];
                    str[b-i-1]=strp[b-i-1];
                }
            }
            else if((str[0]==strp[19])&&(str[1]==strp[18])&&(str[2]==strp[17])&&(str[3]==strp[16])&&(str[16]==strp[3])&&(str[17]==strp[2])&&(str[18]==strp[1])&&(str[19]==strp[0]))
            {
                for(int i=4;i<count-1;i++)
                {
                    str[i]=strp[b-i-1];
                    str[b-i-1]=strp[i];
                }
            }
            else if((str[0]!=strp[19])&&(str[1]!=strp[18])&&(str[2]!=strp[17])&&(str[3]!=strp[16])&&(str[16]!=strp[3])&&(str[17]!=strp[2])&&(str[18]!=strp[1])&&(str[19]!=strp[0]))
            {
                for(int i=4;i<count-1;i++)
                {
                    if(strp[i]=='0')
                    {
                        str[b-i-1]='1';
                    }
                    else if(strp[i]=='1')
                    {
                        str[b-i-1]='0';
                    }
                    if(strp[b-i-1]=='0')
                    {
                        str[i]='1';
                    }
                    else if(strp[b-i-1]=='1')
                    {
                        str[i]='0';
                    }
                }
            }

            for(int i=0;i<count;i++)
            {
                strp[i]=str[i];
                strp[b-i-1]=str[b-i-1];
            }
        }
            for(int i=0;i<count;i++)
            {
                strp[i]=str[i];
                strp[b-i-1]=str[b-i-1];
            }
            for(int i=0;i<b;i++)
            {
                s+=strp[i];
            }
            cout<<s<<"\n";
            cout.flush();
            char inps;
            cin>>inps;
        if(inps=='N'||inps=='n')
        {
            break;
        }
    }
    return 0;
}
