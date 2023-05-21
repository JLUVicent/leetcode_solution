class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // //排序
        // unordered_map<string,vector<string>> map;
        // for( int i = 0;i < strs.size();i++){
        //     string key = strs[i];
        //     sort(key.begin(),key.end());
        //     map[key].push_back(strs[i]);
        // }
        // vector<vector<string>> result;
        // for( auto iter = map.begin(); iter != map.end(); iter++){
        //     result.push_back(iter->second);
        // }
        // return result;
        //统计字符串出现的频次
        map<vector<int>,vector<string>> map;
        for( int i = 0 ; i < strs.size(); i++){
            vector<int> vec(26,0);
            for( int j = 0; j < strs[i].size(); j++){
                vec[strs[i][j]-'a']++;
            }
            map[vec].emplace_back(strs[i]);
            // for( int j = 0; j < 26; j++){
            //     vec[j] = 0;
            // }
            // vector<int> vec(26,0);
            
            // fill(vec.begin,vec.end(),0);
        }
        vector<vector<string>> result;
        for( auto key:map){
            result.push_back(key.second);
        }
        return result;
    }
};