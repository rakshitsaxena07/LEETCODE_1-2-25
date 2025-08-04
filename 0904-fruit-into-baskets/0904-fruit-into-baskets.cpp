class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>ump;
        int i=0,j=0,maxi=0;

        while(j<fruits.size()){
            ump[fruits[j]]++;

            while(ump.size()>2){
                ump[fruits[i]]--;
                if(ump[fruits[i]]==0){
                    ump.erase(fruits[i]);
                }
                //ump.erase(fruits[i]);
                i++;
            }

            if(ump.size()<=2){
                int sum=0;
                for(auto it:ump){
                    sum+=it.second;
                }
                maxi=max(maxi,sum);
            }
            j++;
        }
        return maxi;
    }
};