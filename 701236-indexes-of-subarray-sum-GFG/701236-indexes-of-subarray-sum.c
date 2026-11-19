int subarraySum(int arr[], int n,int target, int *res)
 {
     int left = 0;
     int sum = 0;
     for (int right =0 ; right <n ; right ++)
     {
         sum += arr[right];
         
while (sum > target && left <= right) {
                 sum -= arr[left];
                 left++;
             }
             if ( sum == target && left <= right ) {
                res[0] = left + 1;
                res[1] = right + 1;
                return 1;
             }
         }
         res[0] = -1;
         return 0;
 }

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna