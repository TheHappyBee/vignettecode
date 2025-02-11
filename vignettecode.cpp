#include <bits/stdc++.h>



using namespace std;


string shift(const string& cipher, int pos)
{
    return cipher.substr(cipher.size() - pos , pos) + cipher.substr(0, cipher.size() - pos);
}
int main()
{
    freopen("a.in", "r", stdin);
    freopen("a.out", "w+", stdout);
    string cipher = "abcdefghijklmnopqrstuvwxyz";
    string text; getline(cin, text);
    string key; getline(cin, key);
    

    int counter = 0;
    for (int i = 0; i < text.size(); i++)
    {
        string curr = shift(cipher, key[counter % key.size()] - 65);
        //cout << curr << "\n";
        if (text[i] - 65 > 25 || text[i] - 65 < 0)
            continue;
        text[i] = curr[text[i] - 65];
        counter++;
    }
    cout << text << "\n";
}