# Reduce Array Size to The Half [⬀](https://leetcode.com/problems/reduce-array-size-to-the-half/)

Given an array `arr`.  You can choose a set of integers and remove all the occurrences of these integers in the array.

Return the *minimum size of the set* so that **at least** half of the integers of the array are removed.


### Example 1:
<pre>
<b>Input:</b> arr = [3,3,3,3,5,5,5,2,2,7]
<b>Output:</b> 2
Explanation: Choosing {3,7} will make the new array [5,5,5,2,2] which has size 5 (i.e equal to half of the size of the old array).
Possible sets of size 2 are {3,5},{3,2},{5,2}.
Choosing set {2,7} is not possible as it will make the new array [3,3,3,3,5,5,5] which has size greater than half of the size of the old array.
</pre>

### Example 2:
<pre>
<b>Input:</b> arr = [7,7,7,7,7,7]
<b>Output:</b> 1
Explanation: The only possible set you can choose is {7}. This will make the new array empty.
</pre>

### Example 3:
<pre>
<b>Input:</b> arr = [1,9]
<b>Output:</b> 1
</pre>

### Example 4:
<pre>
<b>Input:</b> arr = [1000,1000,3,7]
<b>Output:</b> 1
</pre>

### Example 5:
<pre>
<b>Input:</b> arr = [1,2,3,4,5,6,7,8,9,10]
<b>Output:</b> 5
</pre>

### Constraints:

- `1 <= arr.length <= 10^5`
- `arr.length` is even.
- `1 <= arr[i] <= 10^5`