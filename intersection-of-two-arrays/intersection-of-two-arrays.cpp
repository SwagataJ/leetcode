class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        set<int> v;
        if(nums1.size() > nums2.size()){
            for(int i=0;i<nums2.size();i++)
                m[nums2[i]] = i;
            for(int i=0;i<nums1.size();i++)
                if(m.find(nums1[i]) != m.end())
                    v.insert(nums1[i]);
        }
        else{
            for(int i=0;i<nums1.size();i++)
                m[nums1[i]] = i;
            for(int i=0;i<nums2.size();i++)
                if(m.find(nums2[i]) != m.end())
                    v.insert(nums2[i]);
        }
        vector<int> ans(v.begin(),v.end());
        return ans;
    }
};