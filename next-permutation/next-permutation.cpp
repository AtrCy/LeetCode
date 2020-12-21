class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=0,n=nums.size(),flag=0;
        if(n<2) return;
        i=n-2;
        while(i>=0 && nums[i]>=nums[i+1]){
            i--;
            flag=1;
        }
        if(i<0) i=0;
       
        
        //find the next smaller number in the range after i
        int base=nums[i];
        int x=nums[i+1],pos=i+1;
        for(int j=i+2;j<n;j++){
            //find the least maximum number greater than base
            if(nums[j]>base && nums[j]<x){
                x=nums[j];
                pos=j;
            }
        }
        if(nums[pos]<nums[i])
           reverse(nums,i,n-1);
        else{
    swap (nums,i,pos);
        reverse(nums,i+1,n-1);}
        return;
    }
void reverse(vector<int>&A, int s, int end){
    sort(A.begin()+s,A.begin()+end+1);
    return;}
    
void swap(vector<int>&A, int x, int y){
    int temp=A[x];
    A[x]=A[y];
    A[y]=temp;
    return;
}
};
