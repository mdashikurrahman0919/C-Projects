#include <iostream>
using namespace std;

int main()
{
    int array[]= {2,5,6,8,9,11,33,55,77,89,100,300};

    int item,middle,left,right;

    item=55;
    left=0;
    right=12;

    while(left<=right)
    {

        middle=(left + right)/2;


        if (array[middle]==item)
        {
            cout<<"Item is found on index : "<<middle;
            break;
        }
        else if (array[middle]<item)
        {
            left = middle+1;

        }
        else
        {
            right= middle-1;
        }


    }

    if (left>right)
    {
        cout<<"Item not found on array"<<item;
    }

    return 0;
}
