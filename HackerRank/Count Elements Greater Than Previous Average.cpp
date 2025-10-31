#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'countResponseTimeRegressions' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY responseTimes as parameter.
 */

int countResponseTimeRegressions(vector<int> responseTimes) {
    long long sum = 0, avg = responseTimes[0];
    int count = 0;
    for(long unsigned int i = 0; i < responseTimes.size(); i++) {
        if(responseTimes[i] > avg) count++;
        sum += responseTimes[i];
        avg = sum / (i+1);
    }
    return count;
}

int main()
{
    string responseTimes_count_temp;
    getline(cin, responseTimes_count_temp);

    int responseTimes_count = stoi(ltrim(rtrim(responseTimes_count_temp)));

    vector<int> responseTimes(responseTimes_count);

    for (int i = 0; i < responseTimes_count; i++) {
        string responseTimes_item_temp;
        getline(cin, responseTimes_item_temp);

        int responseTimes_item = stoi(ltrim(rtrim(responseTimes_item_temp)));

        responseTimes[i] = responseTimes_item;
    }

    int result = countResponseTimeRegressions(responseTimes);

    cout << result << "\n";

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
