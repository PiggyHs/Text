   double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int sum = nums1.size()+nums2.size();
        double* arr = new double[sum];
        int i = 0,j=0;
        int pos = 0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i] < nums2[j])
            {
                arr[pos++] = nums1[i];
                i++;
            }
            else if(nums1[i] > nums2[j])
            {
                arr[pos++] = nums2[j];
                j++;
            }
            else{
                arr[pos++] = nums1[i];
                arr[pos++] = nums2[j];
                i++;
                j++;
            }
        }
        while(i<nums1.size())
        {
            arr[pos++] = nums1[i++];
        }
        while(j<nums2.size())
        {
            arr[pos++] = nums2[j++];
        }
        
        if(sum%2 == 0)
            return ((arr[(sum/2)]+arr[(sum/2)-1])/2);
        else
            return arr[sum/2];
    }