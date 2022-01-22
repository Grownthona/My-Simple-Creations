#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Number of test cases :";
    long long t;
    cin >> t;

    while(t--)
    {
        string str,prefix="",mainstring = "";
        long long n,c;
        cin >> n;

        str = to_string(n);
        c = str.size();

        map<char,string> ekok{ {'1',"One"} , {'2',"Two"} , {'3',"Three"},{'4',"Four"} , {'5',"Five"} , {'6',"Six"},{'7',"Seven"} , {'8',"Eight"} , {'9',"Nine"}};
        map<int,string> doshok{ {2,"ty"} ,{3,"Hundred"} , {4,"Thousand"},{5,"Thousand"},{6,"Lakh"},{7,"Lakh"},{8,"Crore"},{9,"Crore"},{10,"Billion"},{11,"Billion"}};
        map<char,string> doshok_ft{{'2',"Twen"} , {'3',"Thir"} , {'4',"Four"},{'5',"Fif"},{'6',"Six"},{'7',"Seven"},{'8',"Eight"},{'9',"Nine"}};


        for(int i=0;i<str.size();i++)
        {
            char c1 = str[i];
            char c2 = str[i+1];

            if(c1!='0')
            {
            if(c==2 || c==5 || c==7 || c==9 || c==11)
            {
                if(c1=='1')
                {
                    if(c2=='0')
                        prefix="Ten";
                    else if(c2=='1')
                        prefix = "Eleven";
                    else if(c2=='2')
                        prefix = "Twelve";
                    else
                        prefix = doshok_ft[c2] + "teen";


                    if(c==2){
                    mainstring+=prefix;}
                    else{
                        mainstring+=prefix+doshok[c]+" ";}
                }
                else
                {
                    if(c==2){
                    prefix = doshok_ft[c1]+ doshok[c];
                    mainstring+=prefix+ekok[c2]+" ";}
                    else
                    {
                        prefix = doshok_ft[c1]+ doshok[2];
                        mainstring+=prefix+ekok[c2]+doshok[c]+" ";
                    }
                }

                i++;
                c--;
            }
            else
            {
                mainstring+= ekok[c1]+doshok[c]+" ";
            }
            }
            c--;
        }
        cout << mainstring << endl;
    }
}

