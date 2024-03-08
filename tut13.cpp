#include <iostream>
using namespace std;

int main()
{

    int marks[5] = {
        23,
        56,
        89,
        34,
        56,
    };
    int mathmarks[5] = {234, 345, 456, 789, 263};

    // // you can change the value in arrays before prnting
    marks[2] = 66;
    // These are marks
    cout << "These are marks " << endl;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    // // These are mathmarks
    cout << "These are mathmarks " << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;
    cout << mathmarks[4] << endl;

    // // Now we can slove arrays with the help of the loops

    cout << "Arrays example with the helps of loops" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "The value of marks " << i << "  is " << marks[i] << endl;

        // now we can solve the problem with the help of while and Do while...
        cout << "Arrays example with the help of while" << endl;
        int i = 0;
        while (i < 5)
        {
            cout << marks[i] << endl;
            i++;
        }

        cout << "Arrays example with the help of dowhile" << endl;
        int i = 0;
        do
        {
            cout << marks[i] << endl;
            i++;
        } while (i < 5);

        return 0;
    }
}
