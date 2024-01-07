#include <iostream>
using namespace std;
int main()
{
    // Creating 2D array using the dynamic memory allocation:
    // This for the same rows and same columns:
    int n;
    cout << "Enter the size of 2D array: ";
    cin >> n;

    // Creation a 2D array:
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    // Taking input to the user:
    cout << "Enter the values of an array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Giving the output:
    cout << "Output of an array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // if we created something in the HEAP Memory then we have to release the memory also:
    // using the syntax "delete":
    for (int i = 0; i < n; i++)
    {
        // it will delete the cols/rows one-by-one:
        delete[] arr[i];
    }
    // then it will delete the array:
    delete[] arr;

    // Creating 2D array using the dynamic memory allocation:
    // This for the different rows and different columns:
    int row;
    cout << "Enter the size of row of 2D array: ";
    cin >> row;

    int col;
    cout << "Enter the size of col of 2D array: ";
    cin >> col;

    // Creation a 2D array:
    int **arr1 = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr1[i] = new int[col];
    }
    // Taking input to the user:
    cout << "Enter the values of an array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr1[i][j];
        }
    }
    // Giving the output:
    cout << "Output of an array is : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    // if we created something in the HEAP Memory then we have to release the memory also:
    // using the syntax "delete":
    for (int i = 0; i < row; i++)
    {
        // it will delete the cols/rows one-by-one:
        delete[] arr1[i];
    }
    // then it will delete the array:
    delete[] arr1;
}
