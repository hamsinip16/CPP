/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. 
You may assume that each input would have exactly one solution, and you may not use the same element twice. 
You can return the answer in any order. 
*/

class Solution { 
public: 
    vector<int> twoSum(vector<int>& nums, int target) { 
        vector<int> result; 
        for (int i = 0; i < nums.size(); ++i) { 
            for (int j = i + 1; j < nums.size(); ++j) { 
                if (nums[i] + nums[j] == target) { 
                    result.push_back(i); 
                    result.push_back(j); 
                    return result; 
                } 
            } 
        } 
        return result; // No solution found   
    } 
}; 

//USING UNORDERED MAP

class Solution { 
public: 
	vector<int> twoSum(vector<int>& nums, int target) { 
    	int n = nums.size(); 
    	unordered_map<int, int> mp; 
    	for(int i = 0; i < n; i++) mp[nums[i]] = i; 
    	for(int i = 0; i < n; i++) { 
        	if(mp.count(target - nums[i]) && i != mp[target - nums[i]]) return {i, mp[target - nums[i]]}; 
    	} 
    	return {0, 0}; 
	} 
};  
