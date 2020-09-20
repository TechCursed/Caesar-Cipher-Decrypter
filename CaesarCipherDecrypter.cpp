#include <bits/stdc++.h>
using namespace std;

void encrypt(string input)
{    
    int counter = 0, length;
    length = (int)input.length();
    
    for (counter = 0; counter < length; counter++)
    {
        if (isalpha(input[counter]))
        {
            input[counter] = tolower(input[counter]);
            for (int i = 0; i < 13; i++)
            {
                if (input[counter] == 'a')
                    input[counter] = 'z';
                else
                    input[counter]--;
            }
        }
    }
    cout<<"Decrypted String is : ";
    cout<<input<<endl;
}

int main()
{
   string intel;
   cout<<"WELCOME TO CAESAR CIPHER\n";
   cout<<"Enter The String To Decrypt\n";
   cout<<">> ";
   getline(cin, intel);
   encrypt(intel);
}
