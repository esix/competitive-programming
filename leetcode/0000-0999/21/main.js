/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var mergeTwoLists = function(l1, l2) {
    let resultRoot = new ListNode(-1);
    let it = resultRoot;
    while (l1 || l2) {
        if ((l1 && l2 && (l2.val < l1.val)) || !l1) {
            [l1, l2] = [l2, l1];
        }
        it.next = l1;
        l1 = l1.next;
        it = it.next;
        it.next = null;
    }
    return resultRoot.next;
};
