#include<iostream>
#include<vector>
#include<numeric>
#include<math.h>

using namespace std;

//print function to print the elements in the vector

// https://www.tutorialspoint.com/cpp_standard_library/vector.htm
void print(vector<int> &v)
{
    cout<<"Elements in the vector are: ";

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
/*    vector<int> myvector;
    int num;
    cout<<"Enter 5 elements to store into vector: ";

    for(int i=0; i<5; i++)
    {
        cin>>num;
        myvector.push_back(num);  //inserts elements at the end
    }

    print(myvector);

    //Print the size (no. of elements) of vector
    cout<<"Size of vector is: "<<myvector.size()<<endl;

    //Print the capacity of vector
    cout<<"Capacity of vector is: "<<myvector.capacity()<<endl;

    //Get an iterator which points to the first element
    vector<int> :: iterator itr = myvector.begin();

    //Insert an element at index 2
    myvector.insert(itr+2, 8);
    cout<<"After inserting: "<<endl;
    print(myvector);

    //Delete an element at index 4
    myvector.erase(itr+4);
    cout<<"After deletion: "<<endl;
    print(myvector);

    *//*
     * Another native method to find sum and stdev
     * *//*

    // work with vectors
    // https://goo.gl/CmD86x
    vector<int> v = myvector;

    double sum = accumulate(v.begin(), v.end(), 0.0);
    double mean = sum / v.size();

    vector<double> diff(v.size());
//    transform(v.begin(), v.end(), diff.begin(), bind2nd(minus<double>(), mean));
    transform(myvector.begin(), myvector.end(), diff.begin(), [mean](double x) { return x - mean; });

    for (auto i: diff)
        std::cout << i << ' ';

    double sq_sum = inner_product(diff.begin(), diff.end(), diff.begin(), 0.0);

    cout << endl << sq_sum << endl;

    double stdev = sqrt(sq_sum / v.size());

    cout << sum << endl;
    cout << mean << endl;
    cout << stdev << endl;

    vector<vector<vector<double>>> l;
    l.push_back({{23,4}});l.push_back({{25,4}});l.push_back({{26,4}});

    for (auto i: l){
        for (auto j: i){
            for (auto k: j)
                cout << k << ' ';
        }
    }*/

    vector<double> probabilities;
    probabilities = {0.9,0.6,0.3};
    double ans = *max_element(begin(probabilities), end(probabilities));
    cout << ans << endl;
    int final;
    final = distance(begin(probabilities), max_element(begin(probabilities), end(probabilities)));
    cout << final << endl;
}