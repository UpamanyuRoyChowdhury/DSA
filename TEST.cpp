#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long binToDec(long long num) {
        long long sum = 0;
        long long i = 0;
        long long rem;
        while (num > 0) {
            rem = num % 10;
            sum = sum + rem * (1 << i); // Replaced (2 ^ i) with (1 << i) for bitwise left shift
            num = num / 10;
            i++;
        }
        return sum;
    }

    string addBinary(string a, string b) {
        long long num1, num2;
        num1 = stoll(a);
        num2 = stol(b);

        num1 = binToDec(num1);
        num2 = binToDec(num2); // Fixed the typo: num1 -> num2
        long long sum = num1 + num2;
        cout<<sum<<endl;
        vector<long long> bin;
        int rem;
        if (sum == 0)
        {
            bin.push_back(0);
        }
        else
        {
            while (sum > 0) 
            {
                rem = sum % 2;
                bin.push_back(rem);
                sum = sum / 2;
            }
        }
        reverse(bin.begin(), bin.end());
        for (const auto& element : bin) 
        {
            std::cout << element << " ";
        }
        std::cout << std::endl;
        string res;
        for (const auto& element : bin) 
        {
            res += to_string(element);
        }
        return res;
    }
};


int main() {
    Solution solution;
    std::string a = "1111111111111111111111111111111111111111111111111111111111111";
    std::string b = "1111111111111111111111111111111111111111111111111111111";
    std::string result = solution.addBinary(a, b);
    std::cout << "Binary Sum: " << result << std::endl;
    return 0;
}
