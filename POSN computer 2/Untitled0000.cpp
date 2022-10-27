class Solution {
public:
    int majorityElement(vector<int>& v) {
        map<int,int> MAP;
        for(int i=0;i<v.size();i++){
        	MAP[v[i]]++;
		}
		int max=0,temp;
		for(int i=0;i<v.size();i++){
        	if((MAP[v[i]]>max)&&(MAP[v[i]]>v.size()/2)){
        		max=MAP[v[i]];
        		temp=v[i];
        		a++;
			}
		}
    }
    return temp;
};
