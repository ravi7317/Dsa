#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
    public:
    void merge(vector<int>&nums1,int m, vector<int>&nums2, int n){
        for (int i=m; i<m+n; i++){
        nums1[i]=nums2[i-m];
    }
    sort(nums1.begin(), nums1.end());
}
};
int main(){
vector<int> nums1 ={1,4,5,6,0,0,0};
vector<int> nums2= {3,2,7};
int m =4;
int n =3;
 solution solution;
solution.merge(nums1,m, nums2,n);
 for(int num  : nums1){
    cout<<num<<" ";
 }
 cout<<endl;
 return 0 ;
}