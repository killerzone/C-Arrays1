#include <iostream>
using namespace std;          

int main()
{
    int baconAmounts [10] = {10, 45, 667, 4543, 4543, 456, 765, 897, 342, 830};

    cout << "On day 1, we had about " << baconAmounts [0] << " pieces of bacon." << endl;
    cout << "On day 2, we had about " << baconAmounts [1] << " pieces of bacon." << endl;
    cout << "On day 3, we had about " << baconAmounts [2] << " pieces of bacon." << endl;
    cout << "On day 4, we had about " << baconAmounts [3] << " pieces of bacon." << endl;
    cout << "On day 5, we had about " << baconAmounts [4] << " pieces of bacon." << endl;
    cout << "On day 6, we had about " << baconAmounts [5] << " pieces of bacon." << endl;
    cout << "On day 7, we had about " << baconAmounts [6] << " pieces of bacon." << endl;
    cout << "On day 8, we had about " << baconAmounts [7] << " pieces of bacon." << endl;
    cout << "On day 9, we had about " << baconAmounts [8] << " pieces of bacon." << endl;
    cout << "On day 10, we had about " << baconAmounts [9] << " pieces of bacon." << endl;

     int baconistasty [5][2] = \
{{10, 45}, {667, 4543}, {4543, 456}, {765, 897}, {342, 830}};

cout << "Row 1: " << baconistasty [0][0] << " " \
                  << baconistasty [0][1] << endl;

cout << "Row 2: " << baconistasty [1][0] << " " \
                  << baconistasty [1][1] << endl;

cout << "Row 3: " << baconistasty [2][0] << " " \
                  << baconistasty [2][1] << endl;

cout << "Row 4: " << baconistasty [3][0] << " " \
                  << baconistasty [3][1] << endl;

cout << "Row 5: " << baconistasty [4][0] << " " \
                  << baconistasty [4][1] << endl;

    int a;
    int b;
    int sum;
sum = a + b;

 cout << "Enter a number for a: " << endl;
 cin >> a;
 cout << "Enter a number for b: " << endl;
 cin >> b;
 cout << "Your amount is: " << sum << endl;



    if(sum>5)
    {
        cout << baconAmounts [0] << " We need more bacon!" << endl;
    }


    return 0;
}
