#include <string>
#include <vector>

using namespace std;


int getA(vector<vector<int>> sizes){

    int A_max = sizes[0][0];
    // 지갑의 크기를 결정하는 변수 설정

    for(int i=0;i<sizes.size();i++){

        if(A_max < sizes[i][0]){
            A_max = sizes[i][0];
        }

    }

    return A_max;

}

int getB(vector<vector<int>> sizes){

    int B_max = sizes[0][1];

    for(int i=0;i<sizes.size();i++){

        if(B_max < sizes[i][1]){
            B_max = sizes[i][1];
        }

    }

    return B_max;

}


int solution(vector<vector<int>> sizes) {

    int imsi = 0;

    int A_max=0,B_max=0,walletSize=0;

    A_max = getA(sizes);
    B_max = getB(sizes);

    walletSize = A_max * B_max;

    for(int i =0;i<sizes.size();i++){

        imsi = sizes[i][0];
        sizes[i][0] = sizes[i][1];
        sizes[i][1] = imsi;

        A_max = getA(sizes);
        B_max = getB(sizes);

        if(walletSize > (A_max * B_max)){
            walletSize = A_max*B_max;
        }

    }

    return walletSize;

}
