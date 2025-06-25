#include <iostream>
#include <string>
using namespace std;

double computeAverage(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return 1.0 * sum / size;
}

int findHighest(const int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findLowest(const int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Pass by reference function --> any changes made to the variables inside the function are visible outside the function
void computeLetterGrades(const int arr[], int size, int &aCount, int &bCount, int &cCount, int &dCount, int &fCount) {
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 90 && arr[i] <= 100) {
            aCount++;
        } 
        else if (arr[i] >= 80 && arr[i] <= 89) {
            bCount++;
        }
        else if (arr[i] >= 70 && arr[i] <= 79) {
            cCount++;
        }
        else if (arr[i] >= 60 && arr[i] <= 69) {
            dCount++;
        }
        else {
            fCount++;
        }
    }
}

int main() {
    int numScores;
    cout << "How many scores: ";
    cin >> numScores;

    int scores[numScores];

    for (int i = 0; i < numScores; i++) {
        cout << "Enter score " << i + 1 << ": ";
        cin >> scores[i];
    }

    int average = computeAverage(scores, numScores);
    int maximum = findHighest(scores, numScores);
    int minimum = findLowest(scores, numScores);
    int a = 0, b = 0, c = 0, d = 0, f = 0;
    computeLetterGrades(scores, numScores, a, b, c, d, f);
    
    cout << "Average score: " << average << endl;
    cout << "Highest score: " << maximum << endl;
    cout << "Lowest score: " << minimum << endl;
    cout << "Grade breakdown: " << endl;
    
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "C: " << c << endl;
    cout << "D: " << d << endl;
    cout << "F: " << f << endl;





}