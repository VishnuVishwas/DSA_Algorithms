// String of hour and min is given return the minimun time difference in min 
// Leet code : 539. Minimum Time Difference

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int findMinDifference(vector<string>& timePoints) {
    vector<int> minutes; // to store the minutes after conversion and sorting

    for (int i = 0; i < timePoints.size(); i++) {
        string current = timePoints[i];

        // converting string to int
        int hour = stoi(current.substr(0, 2));
        int min = stoi(current.substr(3, 2));

        // converting hour into minutes
        int totalMinutes = (hour*60) + min;

        // storing the minutes into minutes array
        minutes.push_back (totalMinutes);
    }

    // sorting 
    sort(minutes.begin(), minutes.end() );

    // searching the minimum difference
    int mini = INT_MAX;
    int n = minutes.size();
    for (int i = 0; i < n-1; i++) {
        int diff = (minutes[i+1] - minutes[i]);
        mini = min(diff, mini);
    }


    // Searching for last and first element
    int lastdiff = (minutes[0] + 1440) - minutes[n-1];
    mini = min(lastdiff, mini);

    // return minimum number
    return mini;
}

int main() {
    vector<char> timePoints{"23:59","00:00"};

    int min = findMinDifference(timePoints);

}
