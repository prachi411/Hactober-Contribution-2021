class Solution {
    public int longestConsecutive(int[] nums) {
        
        // HashSet<Integer> h = new HashSet<>();
        PriorityQueue<Integer> p = new PriorityQueue<>();
        HashSet<Integer> j = new HashSet<>();
        for(int i=0;i<nums.length;i++)
        {
            if(!j.contains(nums[i]))
            {
            p.add(nums[i]);
            j.add(nums[i]);
            }
            
        }
        
        int count=1;
        int max=1;
        
        if(nums.length>0)
        {
        int a=p.poll();
        while(p.peek()!=null)
        {
            if(p.peek()==a+1)
            {
                count++;
                // a=p.poll();
                if(count>max)
                {
                    max=count;
                }
            }
            else{
                count=1;
            }
            a=p.poll();
        }
        return max;
        }
        
        return 0;
    }
}
