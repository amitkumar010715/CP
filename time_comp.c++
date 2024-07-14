/*NOTE:
if there is individual testcase (t) then we if  range n<1e9  then it is done in O(n) and for range n<1e18 time: O(logn);
other wise for more testcase(t) then we take range as (t*n)<1e9 then it is done in O(n); and for range (t*n)<1e18 time: O(logn);
*/


// runtime error:
// divide by 0, declaration of size of arr,excess negative index, 
// we can't declare any arr in fuction >1e6 because of fuction have 4MB stack
// but we can declare it global for upto 1e8

/* wrong ans:
//  overflow: ll ko int me store , double ko float me store or uninitialize kiya ho

 agar ye sab problem nahi hai to apka logic wrong hai
 */

/*space complexity:

**auxilery space is when something store in  any arr and then into original array that space is the auxilary space. 
**if(not recursively): then the peak or maximum size of space is the space complexity because if we use the variable it uses and free for next time.
else{
    every sub recursion fun waiting for the end point so they occupied their space till to the end so there is some space complexity int term of n. 
}
*/

