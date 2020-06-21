//
//  main.cpp
//  subtractProdAndSum
//
//  Created by Bryant Sahota on 12/15/19.
//  Copyright © 2019 Bryant Sahota. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    int subtractProductAndSum(int n) {
        std::string stringNum = std::to_string(n);
        int product = 1;
        int sum = 0;
        for(int i = 0; i < stringNum.length(); i++)
        {
            sum+= (stringNum[i] - 48);
            product = product * (stringNum[i] - 48);
        }
        std::cout << product << std::endl;
        std::cout << sum << std::endl;
        int solution = product - sum;
        std::cout << "product - Sum =" << std::endl;
        std::cout << solution << std::endl;
        return solution;
    }
};

int main()
{
    Solution s;
    s.subtractProductAndSum(1234);
}
