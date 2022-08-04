#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    int sum = 0;
    int dCnt = 0;

    for (int i = 0; i < nums.size() - 2; i++) {
        for (int j = i + 1; j < nums.size() - 1; j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                sum = nums[i] + nums[j] + nums[k];
                for (int m = 1; m <= sum; m++) {
                    if (sum % m == 0)
                        dCnt++;
                }
                if (dCnt != 2) {
                    dCnt = 0;
                    continue;
                }  
                dCnt = 0;
                sum = 0;
                answer++;
            }
        }
    }

    return answer;
}

int main() {

    vector<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    int result = solution(nums);

    cout << result;
}
