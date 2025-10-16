class Solution {
public:
    int singleNonDuplicate(vector<int>& n) {
        int st=0,en=n.size()-1;
        while(st<=en){
            int mid=st + (en-st)/2;
            if (n.size()==1){return n[0];}
            if (st == en) {
            return n[st];
            }

            if (n[mid]==n[mid-1]){
                if ((st-mid+1)%2 !=0){
                    en=mid-2;
                }else{
                    st=mid+1;
                }
            }else if(n[mid]==n[mid+1]){
                if ((en-mid+1)%2 !=0){
                    st=mid+2;
                }else{
                    en=mid-1;
                }
            }else{return n[mid];}
        }
        return -1;
    }
};
