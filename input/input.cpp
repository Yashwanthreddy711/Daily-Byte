#include<bits/stdc++.h>
using namespace std;
int main(){
     string input;
     vector<int>nums;
     getline(cin,input);
     stringstream ss(input);
     int number;
     while(ss>>number){
        nums.push_back(number);
     }

     for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
     }
     cout<<endl;
return 0;
 }