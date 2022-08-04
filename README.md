# Programmers
practice coding test
<hr>

## 프로그래머스 스킬 체크 1단계(C++)


### 문제 설명

주어진 숫자 중 3개의 숫자를 더해서 소수(素數)가 되는 경우의 수를 구하시오.

<pre>
<code>
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
</code>
</pre>

코드는 가장 단순하게 for문을 엮어서 구성하였다.

