#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    if(S=='M')
    {
        if(height<1.7)
            return "Short";
        else if(height>1.85)
            return "Tall";
        else
            return "Normal";
    }
    else
    {
        if(height<1.6)
            return "Short";
        else if(height>1.75)
            return "Tall";
        else
            return "Normal";
    }
    return "Normal";
    // use return to return your result
    // make use of control flow statements
}