#include<iostream>
#include<vector>


using namespace std;

class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n = plants.size();
        int Alice = capacityA;
        int Bob = capacityB;
        int refills = 0;

        int i = 0;
        int j = n - 1;

        while (i < j) {
            // Alice waters from left
            if (Alice < plants[i]) {
                refills++;
                Alice = capacityA;
            }
            Alice -= plants[i];
            i++;

            // Bob waters from right
            if (Bob < plants[j]) {
                refills++;
                Bob = capacityB;
            }
            Bob -= plants[j];
            j--;
        }

        // If both meet at the same plant (odd n)
        if (i == j) {
            if (max(Alice, Bob) < plants[i])
                refills++;
        }

        return refills;
    }
};


int main(){

  int n;
  cout<<"Enter the array size : ";
  cin>>n;

  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }


  int capacityA,capacityB;
  cout<<"Enter the Capacities of A and B : ";
  cin>>capacityA >> capacityB ;

  Solution s;

  int no_refils = s.minimumRefill(arr,capacityA,capacityB);

  cout<<"No of Time Refils the water to meet Both are : "<<no_refils<<endl;

  return 0;

}