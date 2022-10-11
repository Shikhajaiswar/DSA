int LoneMonster(int n, int h, vector<int>&b, vector<int>&d) {
	// Write your code here.
    priority_queue<pair<int,int>>pq;
   for(int i = 0; i < b.size(); i++){
       pq.push({d[i],b[i]});
   } 
//     int sum=0;
    int bullets=0;
    while(!pq.empty()){
        auto top=pq.top();
        pq.pop();
        int i=1;
        while(i<=top.second){
            bullets++;
            h = h - top.first;
            if(h<0){
                return bullets;
            }
            i++;
        }
    }
    if(h>0){
        return -1;
    }
}