int maxSubArray(int* nums, int numsSize) {
    int sum=0,max=INT_MIN;
    for(int i=0;i<numsSize;i++){
    	if(sum>=0)
    	sum+=nums[i];
		else
		sum=nums[i];
		if(max<sum)
		max=sum;
	}
	return max;
}
