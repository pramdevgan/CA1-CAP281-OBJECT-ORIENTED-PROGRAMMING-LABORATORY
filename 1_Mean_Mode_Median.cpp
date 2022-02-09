/*/////////////////////////////////
||  Name : Pramatma Vishwakarm    ||
||  Class : M.Sc IT               ||
||  Roll No. : A32                ||
||  Set: B (Even Roll No)         ||
||  Reg. No. : 12103282           ||
/////////////////////////////////*/

#include <algorithm>
#include <iostream>
#include<math.h>
using namespace std;


                        /*
                Algorithm for mean: 

declare a variable sum and initialize it with 0.
start loop form i = 0 to n. For each arr[i], add arr[i] in the sum.
print means of data as sum/n
                        */
float mean(float arr[], int n){  /* function to calculate mean*/
    float sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum/n;
}


                        /*
            Algorithm for median: 

    sort the array.
    if the length of array i.e. n is odd then print arr[i]/2.
    if the length of array i.e. n is even, then print  (arr[n/2 – 1] + arr[n/2])/2
                        */

float median(float arr[], int n){ /* function to calculate median*/
    
    sort(arr, arr + n); // sorting array

    if (n % 2 == 0)
        return (arr[n/2 - 1] + arr[n/2]) /2;
    return arr[n/2];
}

                            /*
                Algorithm for mode:

        1.sort the array
        2.declare three variables, let consider max_count, res, and count.
        3.initialize max_count with 1, res with the first element of the array and count with 1.
        4.start a loop form i = 0 to n. for each arr[i], if arr[i] is equal to arr[i – 1] then increment count by 1, otherwise, if count is greater than max_count then max_count = count and save arr[i – 1] in res. save 1 in count and close else.
        5.close the loop
        6.print res.
                            */
// finding mode of ungrouped data
float mode(float arr[], int n){ /* function to findiing mode of ungrouped data*/
    
    sort(arr, arr + n); // sorting the array

    // finding max frequency
    int max_count = 1;
    int result = arr[0];
    int count = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1])
            count++;
        else{
            if (count > max_count){
                max_count = count;
                result = arr[i - 1];
            }
            count = 1;
        }
    }

    // when the last element is most frequent
    if (count > max_count)
    {
        max_count = count;
        result = arr[n - 1];
    }

    return result;
}

int main(){
    int n;
    float arr[50];

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the element of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
        cout << "**************************" << endl;
        cout << "\tMean = " << mean(arr, n) << endl;
        cout << "\tMedian = " << median(arr, n)<< endl;
        cout << "\tMode = " << mode(arr, n)<< endl;
        cout << "**************************" << endl;

}

// Time Complexity = O(n), where n is the number of data