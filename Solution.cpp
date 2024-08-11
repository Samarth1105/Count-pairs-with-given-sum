class Solution {
  public:
    int getPairsCount(const vector<int>& arr, int k) {
        unordered_map<int, int> m;
        
        int count=0;
        for (int i = 0; i < arr.size(); i++) {
            int findElement = k - arr[i];
            if (findElement > 0 && m.find(findElement) != m.end()) {
                count+= m[findElement];
            }
            m[arr[i]]++;
        }
        
        return count;
    }
};
