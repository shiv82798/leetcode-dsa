class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }

        vector<pair<int,int>> res;
        for(auto &p: mp){
            res.push_back({p.second,p.first});
        }

        sort(res.rbegin(),res.rend());
         
        vector<int> ans;
        for(int i = 0;i<k;i++){
            ans.push_back(res[i].second);
        }

        return ans;
    }
};