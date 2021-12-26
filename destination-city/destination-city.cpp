class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string> umap;
        for(auto s:paths){
            umap[s[0]] = s[1];
        }
        string start = paths[0][0];
        while(umap.find(start) != umap.end()){
            start = umap[start];
        }
        return start;
    }
};