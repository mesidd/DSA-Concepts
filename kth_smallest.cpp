class Solution {
  public:
  
    int kthSmallest( vector<int> &arr, int k ) {
 
        int max_value = *max_element(arr.begin(),arr.end());
        vector<int> count( max_value + 1 , 0 );
        
        for ( int num : arr )
        count[num]++;
        
        int rank = 0;
        for ( int i = 0; i <= max_value; i++){
            rank+= count[i];
            if ( rank >= k){
                return i;
            }
        }
        
    }
};
