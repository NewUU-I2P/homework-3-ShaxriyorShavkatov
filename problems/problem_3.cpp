#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
        if (height < ((S == 'M') ? 1.7 : 1.6))
        {
            return "Short";
        }

        if (height < ((S == 'F') ? 1.85 : 1.75))
        {
            return "Normal";
        }

        return "Tall";
    }
    // use return to return your result
    // make use of control flow statements
}