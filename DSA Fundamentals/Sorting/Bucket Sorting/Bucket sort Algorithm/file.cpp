#include<iostream>
#include<cmath>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
public:
  void BucketSort(vector<float>&arr){

    int n = arr.size();

    int no_buckets = sqrt(n);

    int max_value = *max_element(arr.begin(),arr.end());
    int min_value = *min_element(arr.begin(),arr.end());

    int range = max_value - min_value;

    vector<vector<float>>buckets(no_buckets);

    for(int i=0;i<n;i++){
      
      int index = ((arr[i]-min_value)/range)*(no_buckets-1);

      buckets[index].push_back(arr[i]);
    }

    for(int i=0;i<no_buckets;i++){
      
      sort(buckets[i].begin(),buckets[i].end());
    }

    int idx = 0;
    for(auto it:buckets){
      for(auto val : it){
        arr[idx++] = val;
      }
    }
  }
};

int main(){

  int n;
  cout<<"Enter no of Elements : ";
  cin>>n;

  vector<float>arr(n);

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  Solution s;
  s.BucketSort(arr);

  cout<<"The Elements after Bucket sorting : \n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}