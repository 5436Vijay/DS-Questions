#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> arr;
cout << "Size and Capacity of vector" <<endl;
cout  << arr.size() << endl;
cout << arr.capacity() << endl;

//insert
arr.push_back(5);
arr.push_back(6);

//print
 cout << "Element pushed" << endl;
for(int i=0;i<arr.size();i++){
   
cout <<arr[i] << " ";
}
cout << endl;

//remove /delete

arr.pop_back();

//print

for(int i=0;i<arr.size();i++){
    cout <<"Element poped " << arr[i] <<" ";
}
cout << endl;

return 0;
}