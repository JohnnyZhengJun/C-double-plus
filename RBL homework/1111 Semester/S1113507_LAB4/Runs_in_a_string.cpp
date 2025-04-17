//Runs in a string

#include<iostream>
#include<string>
using namespace std;
int main()
{
    // number of test cases
    int t;
    cin >> t;
    while (t--)
    {
        // input string
        string s;
        cin >> s;
        int len = s.length();
        int count = 0; // for number of runs

        // checking uppercase and lowercase
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = tolower(s[i]);
            }
        }
 
        // Num of runs
        for(int i = 0; i < len; i++)
        {
            if(s[i] != s[i+1])
            {
                count++;
            }
        }

        // len of the longest runs & number of the longest runs
        int longest_run = 0, num = 0;
        for(int i = 0; i < len; i++)
        {
            int count = 1;
            while(s[i] == s[i+1])
            {
                count++;
                i++;
            }

            if(count > longest_run)
            {
                longest_run = count;
                num = 1;
            }
            else if(count == longest_run)
            {
                num++;
            }
        }

        // longest letter run length
        int longest_letter_run = 0;
        for(int i = 0; i < len; i++)
        {
            int count = 0;
            while(isalpha(s[i]))
            {
                count++;
                i++;
            }
            if(count > longest_letter_run)
            {
                longest_letter_run = count;
            }
        }

        cout << "# Number of runs= " << count << "\n";
        cout << "# Longest run length= " << longest_run << "\n";
        cout << "# Number of longest runs= " << num << "\n";
        cout << "# Longest letter run length= " << longest_letter_run << "\n";
    }
    return 0;
}