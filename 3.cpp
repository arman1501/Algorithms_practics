#include <bits/stdc++.h>          // All header file.
using namespace std;

// 0/1 Knapsack function
void zeroOne() 
{
    int weights[] = {2, 3, 4, 5};     // prottek item er weight
    int profits[] = {1, 2, 5, 6};     // prottek item er profit
    int n = 4;                        // item er total number
    int capacity = 8;                // bag er maximum weight dhorar capacity

    int dp[5][9] = {0};              // DP table banacchi size (n+1) x (capacity+1)

    // DP table fill kortesi
    for (int i = 1; i <= n; i++) 
    {
        for (int w = 0; w <= capacity; w++) 
        {
            if (weights[i - 1] <= w)
                dp[i][w] = max(profits[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
                // item ta nebo kina check kortesi (nele profit baray kina dekhchi)
            else
                dp[i][w] = dp[i - 1][w];  // item ta nite parbo na tai previous value use
        }
    }

    cout << "Max profit: " << dp[n][capacity] << "\n";   // total maximum profit print

    // je item gula select hoise ta dekhi
    cout << "Selected items: ";
    int w = capacity;
    for (int i = n; i > 0; i--) 
    {
        if (dp[i][w] != dp[i - 1][w]) 
        {
            cout << (i - 1) << " ";       // index print kortesi
            w -= weights[i - 1];          // weight komacchi
        }
    }
    cout << "\n";
}

// Coin Change function (minimum coins)
void coinChange() 
{
    int coins[] = {1, 3, 4};        // available coin values
    int n = 3;                      // total coin types
    int amount = 6;                 // target amount jeita banate hobe

    vector<int> dp(amount + 1, INT_MAX);  // dp[i] = i amount banate minimum koyta coin lage
    vector<int> chosen(amount + 1, -1);   // kon coin diye banacchi ta track rakhbo
    dp[0] = 0;                            // 0 amount banate 0 coin lage

    // sob amount er jonno minimum coin count ber kortesi
    for (int i = 1; i <= amount; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) 
            {
                if (dp[i] > dp[i - coins[j]] + 1) 
                {
                    dp[i] = dp[i - coins[j]] + 1;    // better option pailam
                    chosen[i] = coins[j];            // ei coin ta nilam
                }
            }
        }
    }

    if (dp[amount] == INT_MAX)   // jodi possible na hoy
    {
        cout << "Not possible.\n";
        return;
    }

    // minimum coin number print kortesi
    cout << "Minimum number of coins: " << dp[amount] << "\nCoins used: ";
    int a = amount;
    while (a > 0) 
    {
        cout << chosen[a] << " ";  // je coin ta use hoise ta print
        a -= chosen[a];            // amount ta komacchi
    }
    cout << "\n";
}

int main() 
{
    char choice;
    cout << "Press '0' or 'C' : ";   // user input nibo
    cin >> choice;

    if (choice == '0')               // jodi 0 dey
        zeroOne();                   // knapsack call hobe
    else if (choice == 'C' || choice == 'c')  // jodi C dey
        coinChange();                // coin change call hobe
    else
        cout << "Invalid choice!\n";  // vul input

    return 0;  // main function end
}
