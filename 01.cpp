#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {

    int namurji;

    switch(a){
        case 2:
            b += 31;
            break;
        case 3:
            b += (31+29);
            break;
        case 4:
            b += (31+29+31);
            break;
        case 5:
            b += (31+29+31+30);
            break;
        case 6:
            b += (31+29+31+30+31);
            break;
        case 7:
            b += (31+29+31+30+31+30);
            break;
        case 8:
            b += (31+29+31+30+31+30+31);
            break;
        case 9:
            b += (31+29+31+30+31+30+31+31);
            break;
        case 10:
            b += (31+29+31+30+31+30+31+31+30);
            break;
        case 11:
            b += (31+29+31+30+31+30+31+31+30+31);
            break;
        case 12:
            b += (31+29+31+30+31+30+31+31+30+31+30);
            break;
        default:
            break;
    }

    namurji = b % 7;

    switch(namurji){
        case 0:
            return "THU";
        case 1:
            return "FRI";
        case 2:
            return "SAT";
        case 3:
            return "SUN";
        case 4:
            return "MON";
        case 5:
            return "TUE";
        case 6:
            return "WED";     

    }


}
