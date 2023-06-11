class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         int n = nums1.size();
        int m = nums2.size();

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        set<int>s;
        int i =0;  //two pointer approach
        int j = 0;

        while(i<n && j<m){
            if(nums1[i] < nums2[j]) // agr i chhota hoga to i ko increment krenge
            i++;
            else if(nums1[i] > nums2[j]) // j chhota hoga then j ko increment krenge
            j++;
            else{
                s.insert(nums1[i]); //equal hoga to set m insert krenge so that ki koi bhi repeated element store na ho and phir dono ko increment krenge
                i++;
                j++;
            }
        }
        vector<int>ans;  //ans vector m chahye isiliye ek vector create ke lenge
        for(auto i:s)
        ans.push_back(i);
        return ans;
    }
};