class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n=players.size();
        int m=trainers.size();
        if(n==1 and m==1)
        return players[0]<=trainers[0]?1:0;

        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i=0,j=0;
            int c=0;
        while(i<n and j<m){
            if(players[i]<=trainers[j]){
                c++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }


        return c;


    }
};