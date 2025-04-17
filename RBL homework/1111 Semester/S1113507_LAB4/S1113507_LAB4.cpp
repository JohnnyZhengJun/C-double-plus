#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Initialize variables
    int numoftestcases = 0;
    string words;
    int numofruns = 0;
    int counter = 0;
    int lenoflongestrun = 0;
    int numoflongestlenrun = 0; // 記錄 Lenoflongestrun 最多有幾個
    cin >> numoftestcases;
    for (int i = 0; i < numoftestcases; i++)
    {
        cin >> words;
        for (int j = 0; j < words.length(); j++) // Uppercase to Lowercase
        {
            if (words[j] >= 65 && words[j] <= 90)
            {
                words[j] += 32;
            }
        }
        int temp = 0;
        for (int k = 0; k < words.length(); k++) // Calculate num of runs
        {
            temp += 1;
            if (words[k] > words[k + 1])
            {
                numofruns++;
                if (temp > lenoflongestrun) // 記錄哪個是大小順序數目最長的
                {
                    lenoflongestrun = temp;
                    numoflongestlenrun = 1; // 重新開始記錄 Lenoflongestrun
                }
                else if (temp == lenoflongestrun)
                {
                    numoflongestlenrun++;
                }
                temp = 0;
            }
        }
        // Output the results
        cout << numofruns << " " << lenoflongestrun << " " << numoflongestlenrun << " " << "\n";
        // Reset numofruns and lenoflongestrun for the next test case
        numofruns = 0;
        lenoflongestrun = 0;
        numoflongestlenrun = 0;
    }
}
