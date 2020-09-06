class Solution{
public:
	vector<vector<int>> merge(vector<vector<int>>& intervals){
		vector<vector<int>> mergedIntervals;
		if(intervals.size() == 0){
			return mergedIntervals;
		}
		//we will sort all the intervals
		sort(intervals.begin(),intervals.end());
		vector<int> tempInterval = intervals[0];

		//traverse in all the intervals
		for(auto it: intervals){
			if(it[0] <= tempInterval[1]){
				//store the maximum right value of interval in tempInterval
				tempInterval[1] = max(it[1], tempInterval[1]); 
			}else{
				mergedIntervals.push_back(tempInterval);
				tempInterval = it;
			}
		}
		mergedIntervals.push_back(tempInterval);
		return mergedIntervals;
	}
};