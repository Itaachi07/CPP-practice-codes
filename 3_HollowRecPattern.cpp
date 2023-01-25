#include<iostream>

using namespace std;

int main()
{
    int rows, columns;
    cout<<"Enter Number of rows"<<endl;
    cin>>rows;

    cout<<"Enter Number of columns"<<endl;
    cin>>columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if ( j==1 || j==columns || i==1 || i== rows )
            {
                cout<<"*";
            }
            else
            cout<<" ";
            
        }
        cout<<endl;
    }
    


    return 0;
}